
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,char*,char*) ;

__attribute__((used)) static SSL_CTX *FUNC_6(char *VAR_2, char *VAR_3)
{


 SSL_CTX *VAR_4 = FUNC_1(FUNC_4());

 if (FUNC_3(VAR_4, VAR_2) != 1) {
  FUNC_5(((void*)0), VAR_0,
   "failed setting local cert chain file `%s'; " "check that your cafile/capath settings include " "details of your certificate and its issuer",


   VAR_2
  );
  FUNC_0(VAR_4);
  return ((void*)0);
 } else if (FUNC_2(VAR_4, VAR_3, VAR_1) != 1) {
  FUNC_5(((void*)0), VAR_0,
   "failed setting private key from file `%s'",
   VAR_3
  );
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
