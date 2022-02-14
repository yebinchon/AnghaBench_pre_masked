
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zend_long ;
typedef int zend_bool ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline zend_bool FUNC_1(zend_long VAR_1, zend_long VAR_2) {

 if (VAR_1 >= 0) {
  return VAR_2 >= VAR_0 * 8 - 1 || FUNC_0(VAR_1, VAR_2) < VAR_1;
 } else {
  return VAR_2 >= VAR_0 * 8 || FUNC_0(VAR_1, VAR_2) > VAR_1;
 }
}
