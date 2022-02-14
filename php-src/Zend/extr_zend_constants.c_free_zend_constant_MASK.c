
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {scalar_t__ name; int value; } ;
typedef TYPE_1__ zend_constant ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(zval *VAR_1)
{
 zend_constant *VAR_2 = FUNC_1(VAR_1);

 if (!(FUNC_0(VAR_2) & VAR_0)) {
  FUNC_6(&VAR_2->value);
  if (VAR_2->name) {
   FUNC_4(VAR_2->name, 0);
  }
  FUNC_2(VAR_2);
 } else {
  FUNC_5(&VAR_2->value);
  if (VAR_2->name) {
   FUNC_4(VAR_2->name, 1);
  }
  FUNC_3(VAR_2);
 }
}
