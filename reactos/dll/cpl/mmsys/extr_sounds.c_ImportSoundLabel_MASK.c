
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int szValue ;
struct TYPE_13__ {int szName; } ;
struct TYPE_12__ {int * szDefault; } ;
struct TYPE_11__ {int szValue; } ;
struct TYPE_10__ {int szName; } ;
typedef int TCHAR ;
typedef int PSOUND_SCHEME_CONTEXT ;
typedef TYPE_1__* PLABEL_MAP ;
typedef TYPE_2__* PLABEL_CONTEXT ;
typedef TYPE_3__* PGLOBAL_DATA ;
typedef TYPE_4__* PAPP_MAP ;
typedef int LPBYTE ;
typedef int HWND ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,scalar_t__) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int *,int ,scalar_t__*) ;
 int VAR_4 ;
 int * FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int *) ;

BOOL
FUNC_9(PGLOBAL_DATA VAR_5, HWND VAR_6, HKEY VAR_7, TCHAR * VAR_8, TCHAR * VAR_9, TCHAR * VAR_10, PAPP_MAP VAR_11, PLABEL_MAP VAR_12)
{
    HKEY VAR_13;
    TCHAR VAR_14[VAR_3];
    TCHAR VAR_15[VAR_3];
    DWORD VAR_16, VAR_17;
    PSOUND_SCHEME_CONTEXT VAR_18;
    PLABEL_CONTEXT VAR_19;
    BOOL VAR_20, VAR_21;



    VAR_20 = !FUNC_8(VAR_8, FUNC_5(".Current"));
    VAR_21 = !FUNC_8(VAR_8, VAR_5->szDefault);

    if (FUNC_3(VAR_7,
                     VAR_8,
                     0,
                     VAR_2,
                     &VAR_13) != VAR_0)
    {
        return VAR_1;
    }

    VAR_16 = sizeof(VAR_14);
    if (FUNC_4(VAR_13,
                        ((void*)0),
                        ((void*)0),
                        ((void*)0),
                        (LPBYTE)VAR_14,
                        &VAR_16) != VAR_0)
    {
        return VAR_1;
    }

    if (VAR_20)
        VAR_18 = FUNC_2(VAR_6, VAR_5->szDefault);
    else
        VAR_18 = FUNC_2(VAR_6, VAR_8);

    if (!VAR_18)
    {

        return VAR_1;
    }
    VAR_19 = FUNC_1(VAR_5, VAR_18, VAR_11->szName, VAR_12->szName);

    VAR_17 = FUNC_0(VAR_14, VAR_15, FUNC_6(VAR_15));
    if (VAR_17 == 0 || VAR_17 > FUNC_6(VAR_15))
    {

        return VAR_1;
    }

    if (VAR_20)
        FUNC_7(VAR_19->szValue, VAR_15);
    else if (!VAR_21)
        FUNC_7(VAR_19->szValue, VAR_15);

    return VAR_4;
}
