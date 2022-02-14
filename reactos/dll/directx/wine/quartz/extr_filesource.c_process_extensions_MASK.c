
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int keying ;
typedef char WCHAR ;
typedef int LPCOLESTR ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int GUID ;
typedef int DWORD ;


 int FUNC_0 (char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int *,int ,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static HRESULT FUNC_5(HKEY VAR_7, LPCOLESTR VAR_8, GUID * VAR_9, GUID * VAR_10, GUID * VAR_11)
{
    WCHAR *VAR_12;
    LONG VAR_13;
    HKEY VAR_14;
    WCHAR VAR_15[39];
    DWORD VAR_16;

    if (!VAR_8)
        return VAR_1;


    VAR_12 = FUNC_1(VAR_8);
    if (*VAR_12 != '.')
        return VAR_0;

    VAR_13 = FUNC_3(VAR_7, VAR_12, 0, VAR_2, &VAR_14);
    if (VAR_13)
        return VAR_0;

    if (VAR_9)
    {
        VAR_16 = sizeof(VAR_15);
        VAR_13 = FUNC_4(VAR_14, VAR_4, ((void*)0), ((void*)0), (LPBYTE)VAR_15, &VAR_16);
        if (!VAR_13)
            FUNC_0(VAR_15, VAR_9);
    }

    if (VAR_10)
    {
        VAR_16 = sizeof(VAR_15);
        if (!VAR_13)
            VAR_13 = FUNC_4(VAR_14, VAR_6, ((void*)0), ((void*)0), (LPBYTE)VAR_15, &VAR_16);
        if (!VAR_13)
            FUNC_0(VAR_15, VAR_10);
    }

    if (VAR_11)
    {
        VAR_16 = sizeof(VAR_15);
        if (!VAR_13)
            VAR_13 = FUNC_4(VAR_14, VAR_5, ((void*)0), ((void*)0), (LPBYTE)VAR_15, &VAR_16);
        if (!VAR_13)
            FUNC_0(VAR_15, VAR_11);
    }

    FUNC_2(VAR_14);

    if (!VAR_13)
        return VAR_3;
    return VAR_0;
}
