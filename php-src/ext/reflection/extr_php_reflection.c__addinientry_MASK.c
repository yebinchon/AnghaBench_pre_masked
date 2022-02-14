
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {int module_number; int name; int value; } ;
typedef TYPE_1__ zend_ini_entry ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_4(zend_ini_entry *VAR_0, zval *VAR_1, int VAR_2)
{
 if (VAR_2 == VAR_0->module_number) {
  zval VAR_3;
  if (VAR_0->value) {
   FUNC_1(&VAR_3, VAR_0->value);
  } else {
   FUNC_0(&VAR_3);
  }
  FUNC_3(FUNC_2(VAR_1), VAR_0->name, &VAR_3);
 }
}
