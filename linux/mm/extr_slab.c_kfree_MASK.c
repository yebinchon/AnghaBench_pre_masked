
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int object_size; } ;


 int FUNC_0 (void const*) ;
 int VAR_0 ;
 int FUNC_1 (struct kmem_cache*,void*,int ) ;
 int FUNC_2 (void const*,int ) ;
 int FUNC_3 (void const*,int ) ;
 int FUNC_4 (void const*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ,void const*) ;
 scalar_t__ FUNC_8 (int ) ;
 struct kmem_cache* FUNC_9 (void const*) ;

void FUNC_10(const void *VAR_1)
{
 struct kmem_cache *VAR_2;
 unsigned long VAR_3;

 FUNC_7(VAR_0, VAR_1);

 if (FUNC_8(FUNC_0(VAR_1)))
  return;
 FUNC_6(VAR_3);
 FUNC_4(VAR_1);
 VAR_2 = FUNC_9(VAR_1);
 if (!VAR_2) {
  FUNC_5(VAR_3);
  return;
 }
 FUNC_2(VAR_1, VAR_2->object_size);

 FUNC_3(VAR_1, VAR_2->object_size);
 FUNC_1(VAR_2, (void *)VAR_1, VAR_0);
 FUNC_5(VAR_3);
}
