
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int szName; } ;
struct TYPE_11__ {struct TYPE_11__* Next; int * szValue; TYPE_6__* LabelMap; TYPE_6__* AppMap; } ;
struct TYPE_10__ {TYPE_2__* LabelContext; } ;
typedef int TCHAR ;
typedef TYPE_1__* PSOUND_SCHEME_CONTEXT ;
typedef TYPE_2__* PLABEL_CONTEXT ;
typedef int PGLOBAL_DATA ;
typedef int LABEL_CONTEXT ;


 int FUNC_0 (TYPE_6__*) ;
 TYPE_6__* FUNC_1 (int ,int *) ;
 TYPE_6__* FUNC_2 (int ,TYPE_6__*,int *) ;
 int FUNC_3 () ;
 int VAR_0 ;
 TYPE_2__* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (char) ;
 int FUNC_6 (int ,int *) ;

PLABEL_CONTEXT FUNC_7(PGLOBAL_DATA VAR_1, PSOUND_SCHEME_CONTEXT VAR_2, TCHAR * VAR_3, TCHAR * VAR_4)
{
    PLABEL_CONTEXT VAR_5;

    VAR_5 = VAR_2->LabelContext;

    while (VAR_5)
    {
        FUNC_0(VAR_5->AppMap);
        FUNC_0(VAR_5->LabelMap);

        if (!FUNC_6(VAR_5->AppMap->szName, VAR_3) && !FUNC_6(VAR_5->LabelMap->szName, VAR_4))
        {
            return VAR_5;
        }
        VAR_5 = VAR_5->Next;
    }

    VAR_5 = FUNC_4(FUNC_3(), VAR_0, sizeof(LABEL_CONTEXT));
    if (!VAR_5)
        return ((void*)0);

    VAR_5->AppMap = FUNC_1(VAR_1, VAR_3);
    VAR_5->LabelMap = FUNC_2(VAR_1, VAR_5->AppMap, VAR_4);
    FUNC_0(VAR_5->AppMap);
    FUNC_0(VAR_5->LabelMap);
    VAR_5->szValue[0] = FUNC_5('\0');
    VAR_5->Next = VAR_2->LabelContext;
    VAR_2->LabelContext = VAR_5;

    return VAR_5;
}
