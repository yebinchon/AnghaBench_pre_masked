
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* Next; int szName; } ;
struct TYPE_5__ {TYPE_2__* pAppMap; } ;
typedef int TCHAR ;
typedef TYPE_1__* PGLOBAL_DATA ;
typedef TYPE_2__* PAPP_MAP ;


 int FUNC_0 (int ,int *) ;

PAPP_MAP FUNC_1(PGLOBAL_DATA VAR_0, TCHAR *VAR_1)
{
    PAPP_MAP VAR_2 = VAR_0->pAppMap;

    while (VAR_2)
    {
        if (!FUNC_0(VAR_2->szName, VAR_1))
            return VAR_2;

        VAR_2 = VAR_2->Next;

    }
    return ((void*)0);
}
