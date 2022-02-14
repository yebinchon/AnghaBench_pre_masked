
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {int bPruningOn; int hwndDlg; TYPE_1__* DeskExtInterface; int bKeyIsReadOnly; scalar_t__ bModesPruned; } ;
struct TYPE_5__ {int Context; int (* SetPruningMode ) (int ,int) ;} ;
typedef TYPE_2__* PDESKMONITOR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static VOID
FUNC_5(PDESKMONITOR VAR_2)
{
    BOOL VAR_3;

    if (VAR_2->DeskExtInterface != ((void*)0) && VAR_2->bModesPruned && !VAR_2->bKeyIsReadOnly)
    {
        VAR_3 = FUNC_1(VAR_2->hwndDlg,
                                        VAR_1) != VAR_0;

        if (VAR_3 != VAR_2->bPruningOn)
        {

            VAR_2->bPruningOn = VAR_3;
            VAR_2->DeskExtInterface->SetPruningMode(VAR_2->DeskExtInterface->Context,
                                                   VAR_3);




            FUNC_3(VAR_2);

            (void)FUNC_2(FUNC_0(VAR_2->hwndDlg),
                                    VAR_2->hwndDlg);
        }
    }
}
