
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {struct TYPE_3__* arg_info; int function_name; } ;
typedef TYPE_1__ zend_internal_function ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(zval *VAR_0)
{
 zend_internal_function *VAR_1 = (zend_internal_function*)FUNC_0(VAR_0);

 FUNC_2(VAR_1->function_name, 0);
 if (VAR_1->arg_info) {
  FUNC_1(VAR_1->arg_info);
 }
 FUNC_1(VAR_1);
}
