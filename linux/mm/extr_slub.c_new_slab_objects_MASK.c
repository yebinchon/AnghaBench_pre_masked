
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int * freelist; } ;
struct kmem_cache_cpu {struct page* page; } ;
struct kmem_cache {int cpu_slab; scalar_t__ ctor; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct kmem_cache*,struct kmem_cache_cpu*) ;
 void* FUNC_2 (struct kmem_cache*,int,int,struct kmem_cache_cpu*) ;
 struct page* FUNC_3 (struct kmem_cache*,int,int) ;
 struct kmem_cache_cpu* FUNC_4 (int ) ;
 int FUNC_5 (struct kmem_cache*,int ) ;

__attribute__((used)) static inline void *FUNC_6(struct kmem_cache *VAR_2, gfp_t VAR_3,
   int VAR_4, struct kmem_cache_cpu **VAR_5)
{
 void *VAR_6;
 struct kmem_cache_cpu *VAR_7 = *VAR_5;
 struct page *VAR_8;

 FUNC_0(VAR_2->ctor && (VAR_3 & VAR_1));

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_7);

 if (VAR_6)
  return VAR_6;

 VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (VAR_8) {
  VAR_7 = FUNC_4(VAR_2->cpu_slab);
  if (VAR_7->page)
   FUNC_1(VAR_2, VAR_7);





  VAR_6 = VAR_8->freelist;
  VAR_8->freelist = ((void*)0);

  FUNC_5(VAR_2, VAR_0);
  VAR_7->page = VAR_8;
  *VAR_5 = VAR_7;
 }

 return VAR_6;
}
