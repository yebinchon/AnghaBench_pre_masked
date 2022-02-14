
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {scalar_t__ orig_value; scalar_t__ value; scalar_t__ name; } ;
typedef TYPE_1__ zend_ini_entry ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(zval *VAR_0)
{
 zend_ini_entry *VAR_1 = (zend_ini_entry*)FUNC_0(VAR_0);

 FUNC_3(VAR_1->name, 1);
 if (VAR_1->value) {
  FUNC_2(VAR_1->value);
 }
 if (VAR_1->orig_value) {
  FUNC_3(VAR_1->orig_value, 1);
 }
 FUNC_1(VAR_1);
}
