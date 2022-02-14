
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* LabelMap; } ;
struct TYPE_10__ {struct TYPE_10__* Next; TYPE_2__* AppMap; } ;
typedef int TCHAR ;
typedef TYPE_1__* PLABEL_MAP ;
typedef int PGLOBAL_DATA ;
typedef TYPE_2__* PAPP_MAP ;
typedef int HWND ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (int ,TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *,int *,int *,TYPE_2__*,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int *,scalar_t__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int ,int *) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *) ;

DWORD
FUNC_8(PGLOBAL_DATA VAR_4, HWND VAR_5, HKEY VAR_6, TCHAR * VAR_7, TCHAR * VAR_8, PAPP_MAP VAR_9)
{
    HKEY VAR_10;
    DWORD VAR_11;
    DWORD VAR_12;
    DWORD VAR_13;
    DWORD VAR_14;
    TCHAR VAR_15[VAR_3];
    PLABEL_MAP VAR_16;

    if (FUNC_5(VAR_6,
                     VAR_7,
                     0,
                     VAR_2,
                     &VAR_10) != VAR_0)
    {
        return VAR_1;
    }
    VAR_16 = FUNC_1(VAR_4, VAR_9, VAR_7);

    FUNC_0(VAR_16);
    FUNC_6(VAR_4, VAR_16);

    VAR_16->AppMap = VAR_9;
    VAR_16->Next = VAR_9->LabelMap;
    VAR_9->LabelMap = VAR_16;

    VAR_11 = 0;
    VAR_12 = 0;
    do
    {
        VAR_14 = FUNC_7(VAR_15);
        VAR_13 = FUNC_4(VAR_10,
                                VAR_12,
                                VAR_15,
                                &VAR_14,
                                ((void*)0),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0));

        if (VAR_13 == VAR_0)
        {
            if (FUNC_2(VAR_4, VAR_5, VAR_10, VAR_15, VAR_7, VAR_8, VAR_9, VAR_16))
            {
                VAR_11++;
            }
        }

        VAR_12++;
    } while (VAR_13 == VAR_0);

    FUNC_3(VAR_10);

    return VAR_11;
}
