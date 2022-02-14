
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef scalar_t__ HCRYPTOIDFUNCSET ;
typedef int HCRYPTOIDFUNCADDR ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__,int ,int *,int*) ;
 int FUNC_1 (scalar_t__,int ,int ,int ,void**,int *) ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int * FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,char*,...) ;

__attribute__((used)) static void FUNC_9(void)
{
    HCRYPTOIDFUNCSET VAR_3, VAR_4;
    BOOL VAR_5;
    LPWSTR VAR_6 = ((void*)0);
    DWORD VAR_7;






    VAR_3 = FUNC_2("funky", 0);
    FUNC_8(VAR_3 != 0, "CryptInitOIDFunctionSet failed: %08x\n", FUNC_3());
    if (VAR_3)
    {




        VAR_7 = 0;
        VAR_5 = FUNC_0(VAR_3, 0, ((void*)0), &VAR_7);
        FUNC_8(VAR_5, "CryptGetDefaultOIDDllList failed: %08x\n", FUNC_3());
        if (VAR_5)
        {
            VAR_6 = FUNC_5(FUNC_4(), 0, VAR_7 * sizeof(WCHAR));
            if (VAR_6)
            {
                VAR_5 = FUNC_0(VAR_3, 0, VAR_6, &VAR_7);
                FUNC_8(VAR_5, "CryptGetDefaultOIDDllList failed: %08x\n",
                 FUNC_3());
                FUNC_8(!*VAR_6, "Expected empty DLL list\n");
                FUNC_6(FUNC_4(), 0, VAR_6);
            }
        }
    }


    VAR_3 = FUNC_2("", 1);
    FUNC_8(VAR_3 != 0, "CryptInitOIDFunctionSet failed: %08x\n", FUNC_3());
    VAR_4 = FUNC_2("", 0);
    FUNC_8(VAR_4 != 0, "CryptInitOIDFunctionSet failed: %08x\n", FUNC_3());



    FUNC_8(VAR_3 == VAR_4, "Expected identical sets\n");
    if (VAR_3)
    {



    }


    VAR_3 = FUNC_2("CryptDllEncodeObject", 0);
    FUNC_8(VAR_3 != 0, "CryptInitOIDFunctionSet failed: %08x\n", FUNC_3());
    if (VAR_3)
    {
        void *VAR_8;
        HCRYPTOIDFUNCADDR VAR_9;

        VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_2, 0,
         &VAR_8, &VAR_9);
        FUNC_8((!VAR_5 && FUNC_3() == VAR_0) ||
         FUNC_7(VAR_5) ,
         "Expected ERROR_FILE_NOT_FOUND, got %08x\n", FUNC_3());
    }
}
