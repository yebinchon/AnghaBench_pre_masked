
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {unsigned long counters; int frozen; int objects; int inuse; void* freelist; } ;
struct kmem_cache {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kmem_cache*,struct page*,void*,unsigned long,int *,unsigned long,char*) ;

__attribute__((used)) static inline void *FUNC_2(struct kmem_cache *VAR_0, struct page *VAR_1)
{
 struct page VAR_2;
 unsigned long VAR_3;
 void *VAR_4;

 do {
  VAR_4 = VAR_1->freelist;
  VAR_3 = VAR_1->counters;

  VAR_2.counters = VAR_3;
  FUNC_0(!VAR_2.frozen);

  VAR_2.inuse = VAR_1->objects;
  VAR_2.frozen = VAR_4 != ((void*)0);

 } while (!FUNC_1(VAR_0, VAR_1,
  VAR_4, VAR_3,
  ((void*)0), VAR_2.counters,
  "get_freelist"));

 return VAR_4;
}
