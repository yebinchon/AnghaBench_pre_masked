
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int function_name; } ;
struct TYPE_7__ {TYPE_1__ common; } ;
typedef TYPE_2__ zend_function ;
struct TYPE_8__ {int obj; int * ce; int ref_type; TYPE_2__* ptr; } ;
typedef TYPE_3__ reflection_object ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(zend_function *VAR_2, zval *VAR_3, zval *VAR_4)
{
 reflection_object *VAR_5;
 FUNC_5(VAR_1, VAR_4);
 VAR_5 = FUNC_4(VAR_4);
 VAR_5->ptr = VAR_2;
 VAR_5->ref_type = VAR_0;
 VAR_5->ce = ((void*)0);
 if (VAR_3) {
  FUNC_2(VAR_3);
  FUNC_0(&VAR_5->obj, FUNC_3(VAR_3));
 }
 FUNC_1(FUNC_6(VAR_4), VAR_2->common.function_name);
}
