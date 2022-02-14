
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_4__ {int value; } ;
typedef TYPE_1__ zend_constant ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_7 (int ,int ) ;
 TYPE_1__* FUNC_8 (int ,int *) ;

int FUNC_9(zend_string *VAR_5, zval *VAR_6, int VAR_7)
{
 zval *VAR_8;
 zend_constant *VAR_9 = FUNC_8(FUNC_1(VAR_4), VAR_5);
 if (VAR_9) {
  if ((FUNC_2(VAR_9) & VAR_1)
   && (!(FUNC_2(VAR_9) & VAR_0)
    || !(FUNC_0(VAR_3) & VAR_2))) {
   FUNC_5(VAR_6, &VAR_9->value);
   if (VAR_7) {
    FUNC_6(VAR_6);
   }
   return 1;
  } else {
   return 0;
  }
 }


 VAR_8 = FUNC_7(FUNC_4(VAR_5), FUNC_3(VAR_5));
 if (VAR_8) {
  FUNC_5(VAR_6, VAR_8);
  return 1;
 }
 return 0;
}
