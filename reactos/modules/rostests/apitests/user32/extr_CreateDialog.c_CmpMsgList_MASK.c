
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int msgCount; TYPE_1__* msgList; } ;
typedef TYPE_2__ tagMsgList ;
struct TYPE_6__ {scalar_t__ DlgProc; scalar_t__ msg; int cmpflag; scalar_t__ wParam; scalar_t__ lParam; scalar_t__ result; } ;
typedef int BOOL ;


 int FUNC_0 (char*,TYPE_2__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;

BOOL FUNC_2(const tagMsgList *VAR_5,
                const tagMsgList *VAR_6)
{
    int VAR_7;
    BOOL VAR_8;

    VAR_8 = VAR_4;
    if (VAR_5->msgCount != VAR_6->msgCount)
    {
        FUNC_1(VAR_0, "%d messages expected, %d messages received!\n",
           VAR_6->msgCount, VAR_5->msgCount);
        VAR_8 = VAR_0;
    }
    else
    {
        for (VAR_7 = 0; VAR_7 < VAR_5->msgCount; VAR_7++)
        {
            if (VAR_6->msgList[VAR_7].DlgProc != VAR_5->msgList[VAR_7].DlgProc)
                VAR_8 = VAR_0;
            if (VAR_6->msgList[VAR_7].msg != VAR_5->msgList[VAR_7].msg)
                VAR_8 = VAR_0;
            if ((VAR_6->msgList[VAR_7].cmpflag & VAR_3) &&
                (VAR_6->msgList[VAR_7].wParam != VAR_5->msgList[VAR_7].wParam))
                VAR_8 = VAR_0;
            if ((VAR_6->msgList[VAR_7].cmpflag & VAR_1) &&
                (VAR_6->msgList[VAR_7].lParam != VAR_5->msgList[VAR_7].lParam))
                VAR_8 = VAR_0;
            if ((VAR_6->msgList[VAR_7].cmpflag & VAR_2) &&
                (VAR_6->msgList[VAR_7].result != VAR_5->msgList[VAR_7].result))
                VAR_8 = VAR_0;
            if (!VAR_8)
            {
                FUNC_1(VAR_0, "Message #%.3d not equal\n", VAR_7);
                break;
            }
        }
    }

    if (!VAR_8)
    {
        FUNC_0("RECEIVED", VAR_5);
        FUNC_0("EXPECTED", VAR_6);
        return VAR_0;
    }

    FUNC_1(VAR_4, "\n");
    return VAR_4;
}
