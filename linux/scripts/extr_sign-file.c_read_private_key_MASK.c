
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int ENGINE ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 () ;
 int * FUNC_6 (int *,char const*,int *,int *) ;
 int FUNC_7 (int,char*,...) ;
 int * FUNC_8 (int *,int *,int ,int *) ;
 int FUNC_9 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_10 (char const*,char*,int) ;

__attribute__((used)) static EVP_PKEY *FUNC_11(const char *VAR_2)
{
 EVP_PKEY *VAR_3;

 if (!FUNC_10(VAR_2, "pkcs11:", 7)) {
  ENGINE *VAR_4;

  FUNC_5();
  FUNC_9();
  VAR_4 = FUNC_2("pkcs11");
  FUNC_7(!VAR_4, "Load PKCS#11 ENGINE");
  if (FUNC_4(VAR_4))
   FUNC_9();
  else
   FUNC_7(1, "ENGINE_init");
  if (VAR_0)
   FUNC_7(!FUNC_3(VAR_4, "PIN", VAR_0, 0),
       "Set PKCS#11 PIN");
  VAR_3 = FUNC_6(VAR_4, VAR_2,
            ((void*)0), ((void*)0));
  FUNC_7(!VAR_3, "%s", VAR_2);
 } else {
  BIO *VAR_5;

  VAR_5 = FUNC_1(VAR_2, "rb");
  FUNC_7(!VAR_5, "%s", VAR_2);
  VAR_3 = FUNC_8(VAR_5, ((void*)0), VAR_1,
            ((void*)0));
  FUNC_7(!VAR_3, "%s", VAR_2);
  FUNC_0(VAR_5);
 }

 return VAR_3;
}
