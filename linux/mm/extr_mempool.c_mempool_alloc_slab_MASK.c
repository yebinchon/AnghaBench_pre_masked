
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int ctor; } ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (struct kmem_cache*,int ) ;

void *FUNC_2(gfp_t VAR_0, void *VAR_1)
{
 struct kmem_cache *VAR_2 = VAR_1;
 FUNC_0(VAR_2->ctor);
 return FUNC_1(VAR_2, VAR_0);
}
