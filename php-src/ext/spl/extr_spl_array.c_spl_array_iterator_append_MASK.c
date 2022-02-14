
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int spl_array_object ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int *,char*,int ) ;

void FUNC_7(zval *VAR_0, zval *VAR_1)
{
 spl_array_object *VAR_2 = FUNC_3(VAR_0);

 if (FUNC_4(VAR_2)) {
  FUNC_6(((void*)0), "Cannot append properties to objects, use %s::offsetSet() instead", FUNC_0(FUNC_1(VAR_0)->name));
  return;
 }

 FUNC_5(FUNC_2(VAR_0), ((void*)0), VAR_1);
}
