
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache_cpu {scalar_t__ page; } ;
struct kmem_cache {int cpu_slab; } ;


 struct kmem_cache_cpu* FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct kmem_cache_cpu*) ;

__attribute__((used)) static bool FUNC_2(int VAR_0, void *VAR_1)
{
 struct kmem_cache *VAR_2 = VAR_1;
 struct kmem_cache_cpu *VAR_3 = FUNC_0(VAR_2->cpu_slab, VAR_0);

 return VAR_3->page || FUNC_1(VAR_3);
}
