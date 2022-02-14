
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_8__ {struct TYPE_8__* Next; scalar_t__ szValue; TYPE_2__* LabelMap; TYPE_1__* AppMap; } ;
struct TYPE_7__ {TYPE_4__* LabelContext; scalar_t__ szName; } ;
struct TYPE_6__ {int szName; } ;
struct TYPE_5__ {int szName; } ;
typedef int TCHAR ;
typedef TYPE_3__* PSOUND_SCHEME_CONTEXT ;
typedef TYPE_4__* PLABEL_CONTEXT ;
typedef scalar_t__ LRESULT ;
typedef int LPBYTE ;
typedef int LPARAM ;
typedef int LONG_PTR ;
typedef int HWND ;
typedef int HKEY ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,int *) ;
 int FUNC_3 (int ,int *,int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_12 ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int *,int *,int ,int ) ;
 int FUNC_8 (scalar_t__) ;

BOOL
FUNC_9(HWND VAR_13)
{
    HKEY VAR_14, VAR_15;
    LRESULT VAR_16;
    PSOUND_SCHEME_CONTEXT VAR_17;
    HWND VAR_18;
    PLABEL_CONTEXT VAR_19;
    TCHAR VAR_20[100];

    VAR_18 = FUNC_0(VAR_13, VAR_7);

    VAR_16 = FUNC_4(VAR_18, VAR_1, (WPARAM)0, (LPARAM)0);
    if (VAR_16 == VAR_0)
    {
        return VAR_5;
    }

    VAR_16 = FUNC_4(VAR_18, VAR_2, (WPARAM)VAR_16, (LPARAM)0);
    if (VAR_16 == VAR_0)
    {
        return VAR_5;
    }
    VAR_17 = (PSOUND_SCHEME_CONTEXT)VAR_16;

    if (FUNC_2(VAR_6,
                     FUNC_6("AppEvents\\Schemes"),
                     0,
                     VAR_8,
                     &VAR_14) != VAR_4)
    {
        return VAR_5;
    }

    FUNC_3(VAR_14, ((void*)0), 0, VAR_11, (LPBYTE)VAR_17->szName, (FUNC_8(VAR_17->szName) +1) * sizeof(TCHAR));
    FUNC_1(VAR_14);

    if (FUNC_2(VAR_6,
                     FUNC_6("AppEvents\\Schemes\\Apps"),
                     0,
                     VAR_8,
                     &VAR_14) != VAR_4)
    {
        return VAR_5;
    }

    VAR_19 = VAR_17->LabelContext;

    while (VAR_19)
    {
        FUNC_7(VAR_20, FUNC_6("%s\\%s\\.Current"), VAR_19->AppMap->szName, VAR_19->LabelMap->szName);

        if (FUNC_2(VAR_14, VAR_20, 0, VAR_8, &VAR_15) == VAR_4)
        {
            FUNC_3(VAR_15, ((void*)0), 0, VAR_10, (LPBYTE)VAR_19->szValue, (FUNC_8(VAR_19->szValue) +1) * sizeof(TCHAR));
            FUNC_1(VAR_15);
        }

        VAR_19 = VAR_19->Next;
    }
    FUNC_1(VAR_14);

    FUNC_5(VAR_13, VAR_3, (LONG_PTR)VAR_9);
    return VAR_12;
}
