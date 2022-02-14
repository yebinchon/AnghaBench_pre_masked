
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int *,int *,int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static BIGNUM *FUNC_7(BIGNUM *VAR_1, BIGNUM *VAR_2, BIGNUM *VAR_3)
{
 BIGNUM *VAR_4, *VAR_5;
 BN_CTX *VAR_6;

 VAR_4 = FUNC_4();
 if (VAR_4 == ((void*)0)) {
  FUNC_6();
  return ((void*)0);
 }

 VAR_5 = FUNC_4();
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_4);
  FUNC_6();
  return ((void*)0);
 }
 VAR_6 = FUNC_1();
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_4);
  FUNC_2(VAR_5);
  FUNC_6();
  return ((void*)0);
 }

 FUNC_5(VAR_5, VAR_1, VAR_0);

 if (!FUNC_3(VAR_4, VAR_2, VAR_5, VAR_3, VAR_6, ((void*)0))) {
  FUNC_2(VAR_4);
  FUNC_6();
  VAR_4 = ((void*)0);
 }

 FUNC_2(VAR_5);
 FUNC_0(VAR_6);

 return VAR_4;
}
