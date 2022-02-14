
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_4__ {scalar_t__ function_name; } ;
struct TYPE_5__ {TYPE_1__ common; } ;
typedef TYPE_2__ zend_function ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(zval *VAR_0) {
 zend_function *VAR_1 = (zend_function*)FUNC_0(VAR_0);
 if (VAR_1->common.function_name) {
  FUNC_2(VAR_1->common.function_name, 0);
 }
 FUNC_1(VAR_1);
}
