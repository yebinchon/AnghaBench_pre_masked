
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int php_password_algo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const* FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static const php_password_algo* FUNC_6(zval *VAR_6, const php_password_algo* VAR_7) {
 if (!VAR_6 || (FUNC_2(VAR_6) == VAR_1)) {
  return VAR_7;
 }

 if (FUNC_2(VAR_6) == VAR_0) {
  switch (FUNC_0(VAR_6)) {
   case 0: return VAR_7;
   case 1: return &VAR_5;




   case 2:
    {
    zend_string *VAR_8 = FUNC_4("argon2i", sizeof("argon2i")-1, 0);
    const php_password_algo* VAR_9 = FUNC_3(VAR_8);
    FUNC_5(VAR_8);
    return VAR_9;
    }
   case 3:
    {
    zend_string *VAR_10 = FUNC_4("argon2id", sizeof("argon2id")-1, 0);
    const php_password_algo* VAR_11 = FUNC_3(VAR_10);
    FUNC_5(VAR_10);
    return VAR_11;
    }

  }
  return ((void*)0);
 }

 if (FUNC_2(VAR_6) != VAR_2) {
  return ((void*)0);
 }

 return FUNC_3(FUNC_1(VAR_6));
}
