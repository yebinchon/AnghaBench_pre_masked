
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_10__ {TYPE_4__* EventListHead; } ;
struct TYPE_9__ {scalar_t__ NotifyCount; struct TYPE_9__* lpNext; TYPE_3__* Notify; } ;
struct TYPE_6__ {int Event; } ;
struct TYPE_7__ {TYPE_1__ EventHandle; } ;
struct TYPE_8__ {scalar_t__ Position; TYPE_2__ KsEventData; } ;
typedef TYPE_4__* LPNOTIFYEVENT ;
typedef int LPDIRECTSOUNDNOTIFY ;
typedef TYPE_5__* LPCDirectSoundNotifyImpl ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

VOID
FUNC_2(
    LPDIRECTSOUNDNOTIFY VAR_2,
    DWORD VAR_3,
    DWORD VAR_4)
{
    DWORD VAR_5;
    LPNOTIFYEVENT VAR_6;

    LPCDirectSoundNotifyImpl VAR_7 = (LPCDirectSoundNotifyImpl)FUNC_0(VAR_2, VAR_0, VAR_1);

    VAR_6 = VAR_7->EventListHead;

    while(VAR_6)
    {
        for(VAR_5 = 0; VAR_5 < VAR_6->NotifyCount; VAR_5++)
        {
            if (VAR_4 > VAR_3)
            {

                if (VAR_3 < VAR_6->Notify[VAR_5].Position && VAR_6->Notify[VAR_5].Position <= VAR_4)
                {

                    FUNC_1(VAR_6->Notify[VAR_5].KsEventData.EventHandle.Event);
                }
            }
            else
            {

                if (VAR_3 < VAR_6->Notify[VAR_5].Position || VAR_4 > VAR_6->Notify[VAR_5].Position)
                {

                    FUNC_1(VAR_6->Notify[VAR_5].KsEventData.EventHandle.Event);
                }
            }
        }


        VAR_6 = VAR_6->lpNext;
    }
}
