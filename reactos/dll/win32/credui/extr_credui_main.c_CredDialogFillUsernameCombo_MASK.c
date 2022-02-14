
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cred_dialog_params {int dwFlags; } ;
struct TYPE_6__ {int iItem; int * pszText; int mask; } ;
struct TYPE_5__ {scalar_t__ Type; int * UserName; } ;
typedef TYPE_1__* PCREDENTIALW ;
typedef int LPARAM ;
typedef int HWND ;
typedef size_t DWORD ;
typedef TYPE_2__ COMBOBOXEXITEMW ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,size_t*,TYPE_1__***) ;
 int FUNC_1 (TYPE_1__**) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(HWND VAR_6, const struct cred_dialog_params *VAR_7)
{
    DWORD VAR_8;
    DWORD VAR_9;
    PCREDENTIALW *VAR_10;

    if (!FUNC_0(((void*)0), 0, &VAR_8, &VAR_10))
        return;

    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
    {
        COMBOBOXEXITEMW VAR_11;
        DWORD VAR_12;
        BOOL VAR_13 = VAR_4;

        if (!VAR_10[VAR_9]->UserName)
            continue;

        if (VAR_7->dwFlags & VAR_2)
        {
            if (VAR_10[VAR_9]->Type != VAR_3)
            {
                VAR_10[VAR_9]->UserName = ((void*)0);
                continue;
            }
        }
        else if (VAR_10[VAR_9]->Type == VAR_3)
        {
            VAR_10[VAR_9]->UserName = ((void*)0);
            continue;
        }


        for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
            if (VAR_10[VAR_12]->UserName
                && !FUNC_3(VAR_10[VAR_9]->UserName, VAR_10[VAR_12]->UserName))
            {
                VAR_13 = VAR_5;
                break;
            }

        if (VAR_13)
            continue;

        VAR_11.mask = VAR_0;
        VAR_11.iItem = -1;
        VAR_11.pszText = VAR_10[VAR_9]->UserName;
        FUNC_2(VAR_6, VAR_1, 0, (LPARAM)&VAR_11);
    }

    FUNC_1(VAR_10);
}
