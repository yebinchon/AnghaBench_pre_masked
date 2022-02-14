
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache_cpu {int dummy; } ;
struct kmem_cache {int cpu_slab; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct kmem_cache*) ;

__attribute__((used)) static inline int FUNC_3(struct kmem_cache *VAR_2)
{
 FUNC_0(VAR_1 <
   VAR_0 * sizeof(struct kmem_cache_cpu));





 VAR_2->cpu_slab = FUNC_1(sizeof(struct kmem_cache_cpu),
         2 * sizeof(void *));

 if (!VAR_2->cpu_slab)
  return 0;

 FUNC_2(VAR_2);

 return 1;
}
