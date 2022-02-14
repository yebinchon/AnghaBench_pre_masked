
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_7__ {int wFlags; int hkl; TYPE_2__* pLayout; TYPE_1__* pLocale; } ;
struct TYPE_6__ {int dwId; } ;
struct TYPE_5__ {int dwId; } ;
typedef int LPBYTE ;
typedef TYPE_3__ INPUT_LIST_NODE ;
typedef int HKEY ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int ,int ,int *) ;
 int FUNC_5 (int ,int *,int ,int ,int ,int) ;
 int FUNC_6 (int *,int ,char*,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static VOID
FUNC_8(DWORD VAR_11, INPUT_LIST_NODE *VAR_12)
{
    WCHAR VAR_13[VAR_8];
    WCHAR VAR_14[VAR_8];
    BOOL VAR_15 = VAR_1;
    HKEY VAR_16;

    FUNC_6(VAR_13, FUNC_0(VAR_13), L"%lu", VAR_11);


    if ((FUNC_1(VAR_12->pLayout->dwId) & 0xF000) == 0xE000)
    {
        FUNC_6(VAR_14, FUNC_0(VAR_14), L"%08X", VAR_12->pLayout->dwId);
        VAR_15 = VAR_10;
    }
    else
    {
        FUNC_6(VAR_14, FUNC_0(VAR_14), L"%08X", VAR_12->pLocale->dwId);
    }

    if (FUNC_4(VAR_2,
                      L"Keyboard Layout\\Preload",
                      0,
                      VAR_5,
                      &VAR_16) == VAR_0)
    {
        FUNC_5(VAR_16,
                       VAR_13,
                       0,
                       VAR_9,
                       (LPBYTE)VAR_14,
                       (FUNC_7(VAR_14) + 1) * sizeof(WCHAR));

        FUNC_3(VAR_16);
    }

    if (VAR_12->pLocale->dwId != VAR_12->pLayout->dwId && VAR_15 == VAR_1)
    {
        if (FUNC_4(VAR_2,
                          L"Keyboard Layout\\Substitutes",
                          0,
                          VAR_5,
                          &VAR_16) == VAR_0)
        {
            WCHAR VAR_17[VAR_8];

            FUNC_6(VAR_17, FUNC_0(VAR_17), L"%08X", VAR_12->pLayout->dwId);

            FUNC_5(VAR_16,
                           VAR_14,
                           0,
                           VAR_9,
                           (LPBYTE)VAR_17,
                           (FUNC_7(VAR_17) + 1) * sizeof(WCHAR));

            FUNC_3(VAR_16);
        }
    }

    if ((VAR_12->wFlags & VAR_3) ||
        (VAR_12->wFlags & VAR_4))
    {
        VAR_12->hkl = FUNC_2(VAR_14, VAR_7 | VAR_6);
    }
}
