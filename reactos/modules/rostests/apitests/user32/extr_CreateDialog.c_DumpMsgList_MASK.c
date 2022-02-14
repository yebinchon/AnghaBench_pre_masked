
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int msgCount; TYPE_1__* msgList; } ;
typedef TYPE_2__ tagMsgList ;
struct TYPE_4__ {int msg; int result; int lParam; int wParam; scalar_t__ DlgProc; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(const char* VAR_0, const tagMsgList *VAR_1)
{
    const char *VAR_2;
    int VAR_3;

    FUNC_0("%s\n", VAR_0);
    for (VAR_3 = 0; VAR_3 < VAR_1->msgCount; VAR_3++)
    {
        VAR_2 = (VAR_1->msgList[VAR_3].DlgProc) ? "DlgProc" : "WndProc";
        FUNC_0("#%.3d %s, msg 0x%x, wParam 0x%Ix, lParam 0x%Ix, result %d\n",
               VAR_3,
               VAR_2,
               VAR_1->msgList[VAR_3].msg,
               VAR_1->msgList[VAR_3].wParam,
               VAR_1->msgList[VAR_3].lParam,
               VAR_1->msgList[VAR_3].result);
    }
}
