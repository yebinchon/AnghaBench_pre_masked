
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {struct TYPE_6__* Next; } ;
struct TYPE_5__ {TYPE_2__* pAppMap; } ;
typedef TYPE_1__* PGLOBAL_DATA ;
typedef TYPE_2__* PAPP_MAP ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static
VOID
FUNC_2(PGLOBAL_DATA VAR_0)
{
    PAPP_MAP VAR_1;

    while (VAR_0->pAppMap)
    {
        VAR_1 = VAR_0->pAppMap->Next;
        FUNC_1(FUNC_0(), 0, VAR_0->pAppMap);
        VAR_0->pAppMap = VAR_1;
    }
}
