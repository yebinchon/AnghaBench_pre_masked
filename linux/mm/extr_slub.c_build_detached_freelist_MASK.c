
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int slab_cache; } ;
struct kmem_cache {int dummy; } ;
struct detached_freelist {int cnt; int * freelist; int s; struct page* page; void* tail; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (struct kmem_cache*,void*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,void*,int *) ;
 scalar_t__ FUNC_8 (int) ;
 struct page* FUNC_9 (void*) ;

__attribute__((used)) static inline
int FUNC_10(struct kmem_cache *VAR_0, size_t VAR_1,
       void **VAR_2, struct detached_freelist *VAR_3)
{
 size_t VAR_4 = 0;
 int VAR_5 = 3;
 void *VAR_6;
 struct page *VAR_7;


 VAR_3->page = ((void*)0);

 do {
  VAR_6 = VAR_2[--VAR_1];

 } while (!VAR_6 && VAR_1);

 if (!VAR_6)
  return 0;

 VAR_7 = FUNC_9(VAR_6);
 if (!VAR_0) {

  if (FUNC_8(!FUNC_2(VAR_7))) {
   FUNC_0(!FUNC_1(VAR_7));
   FUNC_6(VAR_6);
   FUNC_3(VAR_7, FUNC_5(VAR_7));
   VAR_2[VAR_1] = ((void*)0);
   return VAR_1;
  }

  VAR_3->s = VAR_7->slab_cache;
 } else {
  VAR_3->s = FUNC_4(VAR_0, VAR_6);
 }


 VAR_3->page = VAR_7;
 FUNC_7(VAR_3->s, VAR_6, ((void*)0));
 VAR_3->tail = VAR_6;
 VAR_3->freelist = VAR_6;
 VAR_2[VAR_1] = ((void*)0);
 VAR_3->cnt = 1;

 while (VAR_1) {
  VAR_6 = VAR_2[--VAR_1];
  if (!VAR_6)
   continue;


  if (VAR_3->page == FUNC_9(VAR_6)) {

   FUNC_7(VAR_3->s, VAR_6, VAR_3->freelist);
   VAR_3->freelist = VAR_6;
   VAR_3->cnt++;
   VAR_2[VAR_1] = ((void*)0);

   continue;
  }


  if (!--VAR_5)
   break;

  if (!VAR_4)
   VAR_4 = VAR_1 + 1;
 }

 return VAR_4;
}
