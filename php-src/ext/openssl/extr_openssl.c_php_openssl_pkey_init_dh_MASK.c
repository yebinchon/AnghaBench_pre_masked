
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_bool ;
typedef int DH ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int * FUNC_5 (int *,int *,int *) ;
 int FUNC_6 () ;

__attribute__((used)) static zend_bool FUNC_7(DH *VAR_0, zval *VAR_1)
{
 BIGNUM *VAR_2, *VAR_3, *VAR_4, *VAR_5, *VAR_6;

 FUNC_3(VAR_1, VAR_2);
 FUNC_3(VAR_1, VAR_3);
 FUNC_3(VAR_1, VAR_4);
 if (!VAR_2 || !VAR_4 || !FUNC_2(VAR_0, VAR_2, VAR_3, VAR_4)) {
  return 0;
 }

 FUNC_3(VAR_1, VAR_5);
 FUNC_3(VAR_1, VAR_6);
 if (VAR_6) {
  return FUNC_1(VAR_0, VAR_6, VAR_5);
 }
 if (VAR_5) {
  VAR_6 = FUNC_5(VAR_5, VAR_4, VAR_2);
  if (VAR_6 == ((void*)0)) {
   return 0;
  }
  return FUNC_1(VAR_0, VAR_6, VAR_5);
 }


 FUNC_4();
 if (!FUNC_0(VAR_0)) {
  FUNC_6();
  return 0;
 }

 return 1;
}
