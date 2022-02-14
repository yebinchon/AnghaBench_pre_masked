
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* LabelMap; } ;
struct TYPE_13__ {TYPE_1__* pLabelMap; } ;
struct TYPE_12__ {struct TYPE_12__* Next; TYPE_3__* AppMap; struct TYPE_12__* szName; struct TYPE_12__* szDesc; } ;
typedef int TCHAR ;
typedef TYPE_1__* PLABEL_MAP ;
typedef TYPE_2__* PGLOBAL_DATA ;
typedef TYPE_3__* PAPP_MAP ;
typedef int LABEL_MAP ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_5 (int *) ;

PLABEL_MAP FUNC_6(PGLOBAL_DATA VAR_1, PAPP_MAP VAR_2, TCHAR * VAR_3)
{
    PLABEL_MAP VAR_4 = VAR_1->pLabelMap;

    while (VAR_4)
    {
        FUNC_0(VAR_4);
        FUNC_0(VAR_4->szName);
        if (!FUNC_4(VAR_4->szName, VAR_3))
            return VAR_4;

        VAR_4 = VAR_4->Next;
    }

    VAR_4 = VAR_2->LabelMap;

    while (VAR_4)
    {
        FUNC_0(VAR_4);
        FUNC_0(VAR_4->szName);
        if (!FUNC_4(VAR_4->szName, VAR_3))
            return VAR_4;

        VAR_4 = VAR_4->Next;
    }

    VAR_4 = FUNC_2(FUNC_1(), VAR_0, sizeof(LABEL_MAP));
    if (!VAR_4)
        return ((void*)0);

    VAR_4->szName = VAR_4->szDesc = FUNC_5(VAR_3);
    if (!VAR_4->szName)
    {
        FUNC_3(FUNC_1(), 0, VAR_4);
        return ((void*)0);
    }

    VAR_4->AppMap = VAR_2;
    VAR_4->Next = VAR_1->pLabelMap;
    VAR_1->pLabelMap = VAR_4;

    return VAR_4;
}
