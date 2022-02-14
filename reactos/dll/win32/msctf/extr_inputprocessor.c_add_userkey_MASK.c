
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ULONG ;
typedef int REFGUID ;
typedef int REFCLSID ;
typedef int LPBYTE ;
typedef int LANGID ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int *,int ,int,int *,int *,scalar_t__*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,char*,int *,int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;

__attribute__((used)) static void FUNC_6( REFCLSID VAR_9, LANGID VAR_10,
                                REFGUID VAR_11)
{
    HKEY VAR_12;
    WCHAR VAR_13[39];
    WCHAR VAR_14[39];
    WCHAR VAR_15[168];
    DWORD VAR_16 = 0;
    ULONG VAR_17;

    FUNC_4("\n");

    FUNC_3(VAR_9, VAR_13, 39);
    FUNC_3(VAR_11, VAR_14, 39);
    FUNC_5(VAR_15,VAR_6,VAR_8,VAR_13,VAR_7,VAR_10,VAR_14);

    VAR_17 = FUNC_1(VAR_0,VAR_15, 0, ((void*)0), 0,
                   VAR_1 | VAR_2, ((void*)0), &VAR_12, &VAR_16);

    if (!VAR_17 && VAR_16 == VAR_3)
    {
        DWORD VAR_18 = 0x0;
        FUNC_2(VAR_12, VAR_5, 0, VAR_4, (LPBYTE)&VAR_18, sizeof(DWORD));
    }

    if (!VAR_17)
        FUNC_0(VAR_12);
}
