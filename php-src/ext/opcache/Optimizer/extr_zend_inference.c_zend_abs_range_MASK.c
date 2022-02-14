
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;
typedef int zend_bool ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline zend_bool FUNC_1(
  zend_long VAR_1, zend_long VAR_2, zend_long *VAR_3, zend_long *VAR_4) {
 if (VAR_1 == VAR_0) {

  return 0;
 }

 if (VAR_1 >= 0) {
  *VAR_3 = VAR_1;
  *VAR_4 = VAR_2;
 } else if (VAR_2 <= 0) {
  *VAR_3 = -VAR_2;
  *VAR_4 = -VAR_1;
 } else {

  *VAR_3 = 0;
  *VAR_4 = FUNC_0(VAR_2, -VAR_1);
 }

 return 1;
}
