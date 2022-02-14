
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HCRYPTOIDFUNCSET ;
typedef scalar_t__ HCRYPTOIDFUNCADDR ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__,int ,int *,int ,void**,scalar_t__*) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    BOOL VAR_4;
    HCRYPTOIDFUNCSET VAR_5;
    void *VAR_6;
    HCRYPTOIDFUNCADDR VAR_7;
    VAR_5 = FUNC_1("CertDllOpenStoreProv", 0);
    FUNC_6(VAR_5 != 0, "CryptInitOIDFunctionSet failed: %d\n", FUNC_4());

    VAR_7 = 0;
    VAR_4 = FUNC_0(VAR_5, 0, ((void*)0), 0, &VAR_6,
     &VAR_7);
    FUNC_6(!VAR_4 && FUNC_4() == VAR_1,
     "Expected ERROR_FILE_NOT_FOUND, got %d\n", FUNC_4());



    VAR_4 = FUNC_0(VAR_5, VAR_2, ((void*)0), 0,
     &VAR_6, &VAR_7);
    FUNC_6(!VAR_4 && FUNC_4() == VAR_1,
     "Expected ERROR_FILE_NOT_FOUND, got %d\n", FUNC_4());


    FUNC_5(0xdeadbeef);
    VAR_4 = FUNC_2(0, "CertDllOpenStoreProv", 0,
     VAR_3);
    if (!VAR_4 && FUNC_4() == VAR_0)
        FUNC_7("Need admin rights\n");
    else
        FUNC_6(VAR_4, "CryptRegisterDefaultOIDFunction failed: %08x\n", FUNC_4());
    VAR_4 = FUNC_0(VAR_5, 0, ((void*)0), 0, &VAR_6,
     &VAR_7);
    FUNC_6(!VAR_4 && FUNC_4() == VAR_1,
     "Expected ERROR_FILE_NOT_FOUND, got %d\n", FUNC_4());
    FUNC_3(0, "CertDllOpenStoreProv", VAR_3);
}
