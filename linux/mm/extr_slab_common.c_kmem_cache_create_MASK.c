
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int dummy; } ;
typedef int slab_flags_t ;


 struct kmem_cache* FUNC_0 (char const*,unsigned int,unsigned int,int ,int ,int ,void (*) (void*)) ;

struct kmem_cache *
FUNC_1(const char *VAR_0, unsigned int VAR_1, unsigned int VAR_2,
  slab_flags_t VAR_3, void (*VAR_4)(void *))
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 0, 0,
       VAR_4);
}
