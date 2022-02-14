
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_bool ;
typedef int RSA ;
typedef int EVP_PKEY ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 () ;

__attribute__((used)) static zend_bool FUNC_6(EVP_PKEY *VAR_0, RSA *VAR_1, zval *VAR_2)
{
 BIGNUM *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10;

 FUNC_1(VAR_2, VAR_3);
 FUNC_1(VAR_2, VAR_4);
 FUNC_1(VAR_2, VAR_5);
 if (!VAR_3 || !VAR_5 || !FUNC_4(VAR_1, VAR_3, VAR_4, VAR_5)) {
  return 0;
 }

 FUNC_1(VAR_2, VAR_6);
 FUNC_1(VAR_2, VAR_7);
 if ((VAR_6 || VAR_7) && !FUNC_3(VAR_1, VAR_6, VAR_7)) {
  return 0;
 }

 FUNC_1(VAR_2, VAR_8);
 FUNC_1(VAR_2, VAR_9);
 FUNC_1(VAR_2, VAR_10);
 if ((VAR_8 || VAR_9 || VAR_10) && !FUNC_2(VAR_1, VAR_8, VAR_9, VAR_10)) {
  return 0;
 }

 if (!FUNC_0(VAR_0, VAR_1)) {
  FUNC_5();
  return 0;
 }

 return 1;
}
