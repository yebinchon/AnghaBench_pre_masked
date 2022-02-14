
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int guid_string ;
typedef int WCHAR ;
typedef int LPCWSTR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int GUID ;
typedef int DWORD ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,int *,int ,int,int *,int *,int*) ;

__attribute__((used)) static HRESULT FUNC_4(HKEY VAR_5, LPCWSTR VAR_6,
    GUID *VAR_7)
{
    LONG VAR_8;
    WCHAR VAR_9[39];
    DWORD VAR_10 = sizeof(VAR_9);
    HRESULT VAR_11;

    if (!VAR_7)
        return VAR_2;

    VAR_8 = FUNC_3(VAR_5, ((void*)0), VAR_6, VAR_4|VAR_3, ((void*)0),
        VAR_9, &VAR_10);

    if (VAR_8 != VAR_0)
        return FUNC_2(VAR_8);

    if (VAR_10 < sizeof(VAR_9))
    {
        FUNC_1("incomplete GUID value\n");
        return VAR_1;
    }

    VAR_11 = FUNC_0(VAR_9, VAR_7);

    return VAR_11;
}
