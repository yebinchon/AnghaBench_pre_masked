
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef scalar_t__ LSTATUS ;
typedef int LPBYTE ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int *,int ,int,int *,int **,int *) ;
 scalar_t__ FUNC_3 (int *,char const*,int *,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(BOOL VAR_6, const char* VAR_7, const char* VAR_8)
{
    HKEY VAR_9 = ((void*)0);
    LSTATUS VAR_10 = FUNC_2(VAR_6 ? VAR_3 : VAR_2,
        "Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Layers", 0, ((void*)0), 0, FUNC_0() | VAR_4, ((void*)0), &VAR_9, ((void*)0));
    FUNC_5(VAR_10 == VAR_1, "Expected to be able to open a registry key\n");
    if (VAR_10 == VAR_1)
    {
        char VAR_11[512] = { 0 };
        DWORD VAR_12 = 0;
        DWORD VAR_13 = sizeof(VAR_11);
        VAR_10 = FUNC_3(VAR_9, VAR_7, ((void*)0), &VAR_12, (LPBYTE)VAR_11, &VAR_13);
        if (VAR_8)
        {
            FUNC_5(VAR_10 == VAR_1, "Expected to get a valid value, err: %u\n", VAR_10);
            if (VAR_10 == VAR_1)
            {
                FUNC_5(VAR_12 == VAR_5, "Expected the type to be REG_SZ, was: %u\n", VAR_12);
                FUNC_5(!FUNC_4(VAR_11, VAR_8), "Expected the data to be: '%s', was: '%s'\n", VAR_8, VAR_11);
            }
        }
        else
        {
            FUNC_5(VAR_10 == VAR_0, "Expected not to find the value %s\n", VAR_7);
        }
        FUNC_1(VAR_9);
    }
}
