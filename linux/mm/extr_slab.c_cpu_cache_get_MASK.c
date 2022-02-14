
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int cpu_cache; } ;
struct array_cache {int dummy; } ;


 struct array_cache* FUNC_0 (int ) ;

__attribute__((used)) static inline struct array_cache *FUNC_1(struct kmem_cache *VAR_0)
{
 return FUNC_0(VAR_0->cpu_cache);
}
