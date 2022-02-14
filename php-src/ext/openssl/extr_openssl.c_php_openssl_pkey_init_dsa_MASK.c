
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_bool ;
typedef int DSA ;
typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const**,int const**) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static zend_bool FUNC_8(DSA *VAR_0, zval *VAR_1)
{
 BIGNUM *VAR_2, *VAR_3, *VAR_4, *VAR_5, *VAR_6;
 const BIGNUM *VAR_7, *VAR_8;

 FUNC_5(VAR_1, VAR_2);
 FUNC_5(VAR_1, VAR_3);
 FUNC_5(VAR_1, VAR_4);
 if (!VAR_2 || !VAR_3 || !VAR_4 || !FUNC_4(VAR_0, VAR_2, VAR_3, VAR_4)) {
  return 0;
 }

 FUNC_5(VAR_1, VAR_6);
 FUNC_5(VAR_1, VAR_5);
 if (VAR_6) {
  return FUNC_3(VAR_0, VAR_6, VAR_5);
 }


 FUNC_6();
 if (!FUNC_1(VAR_0)) {
  FUNC_7();
  return 0;
 }



 FUNC_2(VAR_0, &VAR_8, &VAR_7);
 if (!VAR_8 || FUNC_0(VAR_8)) {
  return 0;
 }

 return 1;
}
