
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int php_password_algo ;


 scalar_t__ VAR_0 ;
 int const* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int * FUNC_2 (int *,int *) ;

const php_password_algo* FUNC_3(const zend_string *VAR_2) {
 zval *VAR_3;

 if (!VAR_2) {
  return ((void*)0);
 }

 VAR_3 = FUNC_2(&VAR_1, (zend_string*)VAR_2);
 if (!VAR_3 || (FUNC_1(VAR_3) != VAR_0)) {
  return ((void*)0);
 }

 return FUNC_0(VAR_3);
}
