
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int RSA ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int *,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int ,char*) ;

__attribute__((used)) static RSA *FUNC_7(SSL *VAR_2, int VAR_3, int VAR_4)
{
 BIGNUM *VAR_5 = ((void*)0);
 static RSA *VAR_6 = ((void*)0);

 if (!VAR_6 && ((VAR_5 = FUNC_1()) == ((void*)0))) {
  FUNC_6(((void*)0), VAR_0, "allocation error generating RSA key");
 }
 if (!VAR_6 && VAR_5) {
  if (!FUNC_2(VAR_5, VAR_1) || ((VAR_6 = FUNC_5()) == ((void*)0)) ||
   !FUNC_4(VAR_6, VAR_4, VAR_5, ((void*)0))) {
   if (VAR_6) {
    FUNC_3(VAR_6);
   }
   VAR_6 = ((void*)0);
  }
  FUNC_0(VAR_5);
 }

 return (VAR_6);
}
