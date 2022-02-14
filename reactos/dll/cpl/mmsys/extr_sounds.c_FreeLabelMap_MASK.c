
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {TYPE_1__* pLabelMap; } ;
struct TYPE_5__ {struct TYPE_5__* Next; } ;
typedef TYPE_1__* PLABEL_MAP ;
typedef TYPE_2__* PGLOBAL_DATA ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static
VOID
FUNC_2(PGLOBAL_DATA VAR_0)
{
    PLABEL_MAP VAR_1;

    while (VAR_0->pLabelMap)
    {
        VAR_1 = VAR_0->pLabelMap->Next;
        FUNC_1(FUNC_0(), 0, VAR_0->pLabelMap);
        VAR_0->pLabelMap = VAR_1;
    }
}
