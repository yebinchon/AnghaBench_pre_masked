
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FuncAddr {int * currentDll; int dllList; scalar_t__ lib; } ;
typedef scalar_t__ LSTATUS ;
typedef char* LPWSTR ;
typedef int LPVOID ;
typedef char const* LPCSTR ;
typedef int * LPBYTE ;
typedef scalar_t__ HMODULE ;
typedef int HKEY ;
typedef struct FuncAddr* HCRYPTOIDFUNCADDR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 char* FUNC_0 (scalar_t__,char const*,char const*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_8 (int ,char*,int *,scalar_t__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_9 (int ,int ,int *,scalar_t__*,int *,scalar_t__*) ;
 int FUNC_10 (scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static BOOL FUNC_11(DWORD VAR_7, LPCSTR VAR_8,
 LPCSTR VAR_9, LPVOID *VAR_10, HCRYPTOIDFUNCADDR *VAR_11)
{
    BOOL VAR_12 = VAR_2;
    char *VAR_13;
    const char *VAR_14;
    HKEY VAR_15;
    LSTATUS VAR_16;

    VAR_13 = FUNC_0(VAR_7, VAR_9, VAR_8);
    VAR_16 = FUNC_7(VAR_3, VAR_13, 0, VAR_4, &VAR_15);
    if (!VAR_16)
    {
        DWORD VAR_17, VAR_18 = 0;

        VAR_16 = FUNC_8(VAR_15, "FuncName", ((void*)0), &VAR_17, ((void*)0), &VAR_18);
        if ((!VAR_16 || VAR_16 == VAR_1) && VAR_17 == VAR_5)
        {
            VAR_14 = FUNC_1(VAR_18);
            VAR_16 = FUNC_8(VAR_15, "FuncName", ((void*)0), &VAR_17,
             (LPBYTE)VAR_14, &VAR_18);
        }
        else
            VAR_14 = VAR_9;
        VAR_16 = FUNC_9(VAR_15, VAR_0, ((void*)0), &VAR_17, ((void*)0), &VAR_18);
        if ((!VAR_16 || VAR_16 == VAR_1) && VAR_17 == VAR_5)
        {
            LPWSTR VAR_19 = FUNC_1(VAR_18);

            if (VAR_19)
            {
                VAR_16 = FUNC_9(VAR_15, VAR_0, ((void*)0), ((void*)0),
                 (LPBYTE)VAR_19, &VAR_18);
                if (!VAR_16)
                {
                    HMODULE VAR_20;





                    VAR_20 = FUNC_5(VAR_19);
                    if (VAR_20)
                    {
                        *VAR_10 = FUNC_4(VAR_20, VAR_14);
                        if (*VAR_10)
                        {
                            struct FuncAddr *VAR_21 =
                             FUNC_1(sizeof(struct FuncAddr));

                            if (VAR_21)
                            {
                                VAR_21->lib = VAR_20;
                                VAR_21->dllList = *(VAR_21->currentDll = ((void*)0));
                                *VAR_11 = VAR_21;
                                VAR_12 = VAR_6;
                            }
                            else
                            {
                                *VAR_11 = ((void*)0);
                                FUNC_3(VAR_20);
                            }
                        }
                        else
                        {



                            FUNC_3(VAR_20);
                        }
                    }
                }
                else
                    FUNC_10(VAR_16);
                FUNC_2(VAR_19);
            }
        }
        else
            FUNC_10(VAR_16);
        if (VAR_14 != VAR_9)
            FUNC_2((char *)VAR_14);
        FUNC_6(VAR_15);
    }
    else
        FUNC_10(VAR_16);
    FUNC_2(VAR_13);
    return VAR_12;
}
