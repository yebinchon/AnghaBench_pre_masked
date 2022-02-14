
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msiexec_version ;
typedef int filename ;
typedef scalar_t__ WCHAR ;
typedef scalar_t__* LPWSTR ;
typedef int HMODULE ;
typedef int DWORD ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,scalar_t__*) ;
 int FUNC_8 (int ,int,scalar_t__*,int) ;
 int VAR_0 ;
 int FUNC_9 (scalar_t__*,scalar_t__*,int*,int *,int *) ;
 int FUNC_10 (int ,scalar_t__*,int *,int ,int ,int ) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_13(int VAR_1)
{
    WCHAR VAR_2[40];
    WCHAR VAR_3[VAR_0];
    LPWSTR VAR_4;
    LPWSTR VAR_5;
    HMODULE VAR_6 = FUNC_3("msi.dll");
    DWORD VAR_7;
    DWORD VAR_8;


    *VAR_3 = 0;
    VAR_8 = FUNC_2(VAR_6, VAR_3, sizeof(VAR_3) / sizeof(VAR_3[0]));
    if (!VAR_8)
        FUNC_11("GetModuleFileName failed: %d\n", FUNC_1());

    VAR_7 = sizeof(VAR_2) / sizeof(VAR_2[0]);
    *VAR_2 = 0;
    VAR_8 = FUNC_9(VAR_3, VAR_2, &VAR_7, ((void*)0), ((void*)0));
    if (VAR_8)
        FUNC_11("MsiGetFileVersion failed with %d\n", VAR_8);



    VAR_7 = FUNC_8(VAR_6, 10, (LPWSTR) &VAR_4, 0);

    VAR_4 = FUNC_6(FUNC_4(), 0, (VAR_7 + 1) * sizeof(WCHAR));
    VAR_5 = FUNC_6(FUNC_4(), 0, (VAR_7 + 1) * sizeof(WCHAR) + sizeof(VAR_2));
    if (VAR_4 && VAR_5) {
        *VAR_4 = 0;
        FUNC_8(VAR_6, 10, VAR_4, VAR_7 + 1);

        FUNC_12(VAR_5, VAR_4, VAR_2);
        FUNC_10(0, VAR_5, ((void*)0), 0, FUNC_5(), 0);
    }
    FUNC_7(FUNC_4(), 0, VAR_4);
    FUNC_7(FUNC_4(), 0, VAR_5);
    FUNC_0(VAR_1);
}
