
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {char* szBindName; int * pszBinding; } ;
typedef TYPE_1__ NetCfgComponentItem ;
typedef int * LPBYTE ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int DWORD ;


 int * FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,int *) ;
 int FUNC_3 (int ,char*,int *,int *,int *,int *) ;
 int VAR_4 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;

HRESULT
FUNC_6(
    NetCfgComponentItem *VAR_5)
{
    WCHAR VAR_6[200];
    HKEY VAR_7;
    DWORD VAR_8, VAR_9;

    if (VAR_5 == ((void*)0) || VAR_5->szBindName == ((void*)0))
        return VAR_4;

    FUNC_5(VAR_6, L"SYSTEM\\CurrentControlSet\\Services\\");
    FUNC_4(VAR_6, VAR_5->szBindName);
    FUNC_4(VAR_6, L"\\Linkage");

    if (FUNC_2(VAR_2, VAR_6, 0, VAR_3, &VAR_7) == VAR_0)
    {
        VAR_9 = 0;
        FUNC_3(VAR_7, L"Bind", ((void*)0), &VAR_8, ((void*)0), &VAR_9);

        if (VAR_9 != 0)
        {
            VAR_5->pszBinding = FUNC_0(VAR_9);
            if (VAR_5->pszBinding == ((void*)0))
                return VAR_1;

            FUNC_3(VAR_7, L"Bind", ((void*)0), &VAR_8, (LPBYTE)VAR_5->pszBinding, &VAR_9);
        }

        FUNC_1(VAR_7);
    }

    return VAR_4;
}
