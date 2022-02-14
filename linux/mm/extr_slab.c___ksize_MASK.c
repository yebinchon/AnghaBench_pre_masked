
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {size_t object_size; } ;


 int FUNC_0 (int) ;
 void const* VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 struct kmem_cache* FUNC_2 (void const*) ;

size_t FUNC_3(const void *VAR_1)
{
 struct kmem_cache *VAR_2;
 size_t VAR_3;

 FUNC_0(!VAR_1);
 if (FUNC_1(VAR_1 == VAR_0))
  return 0;

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = VAR_2 ? VAR_2->object_size : 0;

 return VAR_3;
}
