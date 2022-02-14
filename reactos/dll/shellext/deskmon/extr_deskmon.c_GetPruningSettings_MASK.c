
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {int bModesPruned; int bKeyIsReadOnly; int bPruningOn; TYPE_1__* DeskExtInterface; } ;
struct TYPE_5__ {int Context; int (* GetPruningMode ) (int ,scalar_t__*,scalar_t__*,scalar_t__*) ;} ;
typedef TYPE_2__* PDESKMONITOR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static VOID
FUNC_2(PDESKMONITOR VAR_1)
{
    BOOL VAR_2 = VAR_0, VAR_3 = VAR_0, VAR_4 = VAR_0;

    if (VAR_1->DeskExtInterface != ((void*)0))
    {
        VAR_1->DeskExtInterface->GetPruningMode(VAR_1->DeskExtInterface->Context,
                                               &VAR_2,
                                               &VAR_3,
                                               &VAR_4);
    }


    VAR_1->bModesPruned = (VAR_2 != VAR_0);
    VAR_1->bKeyIsReadOnly = (VAR_3 != VAR_0);
    VAR_1->bPruningOn = (VAR_4 != VAR_0);

    FUNC_0(VAR_1);
}
