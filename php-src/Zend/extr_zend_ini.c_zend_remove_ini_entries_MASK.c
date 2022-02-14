
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct TYPE_2__ {int module_number; } ;
typedef TYPE_1__ zend_ini_entry ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(zval *VAR_0, void *VAR_1)
{
 zend_ini_entry *VAR_2 = (zend_ini_entry *)FUNC_0(VAR_0);
 int VAR_3 = *(int *)VAR_1;

 return VAR_2->module_number == VAR_3;
}
