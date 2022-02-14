
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zend_long ;
typedef int zend_bool ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline zend_bool FUNC_0(zend_long VAR_2, zend_long VAR_3) {
 return (VAR_3 > 0 && VAR_2 > VAR_0 - VAR_3)
  || (VAR_3 < 0 && VAR_2 < VAR_1 - VAR_3);
}
