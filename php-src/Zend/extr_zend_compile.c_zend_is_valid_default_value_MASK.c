
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_type ;
typedef int zend_bool ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static zend_bool FUNC_6(zend_type VAR_4, zval *VAR_5)
{
 FUNC_0(FUNC_3(VAR_4));
 if (FUNC_1(VAR_4, FUNC_4(VAR_5))) {
  return 1;
 }
 if ((FUNC_2(VAR_4) & VAR_2) && FUNC_4(VAR_5) == VAR_1) {

  FUNC_5(VAR_5);
  return 1;
 }
 if ((FUNC_2(VAR_4) & VAR_3) && FUNC_4(VAR_5) == VAR_0) {
  return 1;
 }
 return 0;
}
