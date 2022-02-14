
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int NetCfgComponentItem ;
typedef char* LPOLESTR ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int GUID ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int const*,int **) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int const*,char**) ;
 int FUNC_6 (int *,char*,char*) ;

HRESULT
FUNC_7(
    const GUID *VAR_3, NetCfgComponentItem ** VAR_4)
{
    HKEY VAR_5;
    LPOLESTR VAR_6;
    HRESULT VAR_7;
    WCHAR VAR_8[150];

    VAR_7 = FUNC_5(VAR_3, &VAR_6);
    if (FUNC_4(VAR_7))
    {
        FUNC_6(VAR_8, L"SYSTEM\\CurrentControlSet\\Control\\Network\\%s", VAR_6);
        if (FUNC_3(VAR_1, VAR_8, 0, VAR_2, &VAR_5) == VAR_0)
        {
            VAR_7 = FUNC_1(VAR_5, VAR_3, VAR_4);
            FUNC_2(VAR_5);
        }
        FUNC_0(VAR_6);
    }
    return VAR_7;
}
