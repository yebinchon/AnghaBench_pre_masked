
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache_cpu {int dummy; } ;
struct kmem_cache {int cpu_slab; } ;
typedef int gfp_t ;


 void* FUNC_0 (struct kmem_cache*,int ,int,unsigned long,struct kmem_cache_cpu*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 struct kmem_cache_cpu* FUNC_3 (int ) ;

__attribute__((used)) static void *FUNC_4(struct kmem_cache *VAR_0, gfp_t VAR_1, int VAR_2,
     unsigned long VAR_3, struct kmem_cache_cpu *VAR_4)
{
 void *VAR_5;
 unsigned long VAR_6;

 FUNC_2(VAR_6);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_6);
 return VAR_5;
}
