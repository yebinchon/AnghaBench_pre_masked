
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {scalar_t__ bPruningOn; scalar_t__ bModesPruned; int hwndDlg; int bKeyIsReadOnly; } ;
typedef TYPE_1__* PDESKMONITOR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static VOID
FUNC_3(PDESKMONITOR VAR_3)
{
    FUNC_1(FUNC_2(VAR_3->hwndDlg,
                            VAR_2),
                 VAR_3->bModesPruned && !VAR_3->bKeyIsReadOnly);
    FUNC_0(VAR_3->hwndDlg,
                   VAR_2,
                   (VAR_3->bModesPruned && VAR_3->bPruningOn) ? VAR_0 : VAR_1);
}
