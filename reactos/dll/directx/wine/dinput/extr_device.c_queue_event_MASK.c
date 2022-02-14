
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int queue_len; int queue_head; int queue_tail; scalar_t__ num_actions; TYPE_2__* action_map; TYPE_1__* data_queue; scalar_t__ overflow; scalar_t__ hEvent; int data_format; } ;
struct TYPE_6__ {int offset; int uAppData; } ;
struct TYPE_5__ {int dwOfs; int uAppData; void* dwSequence; void* dwTimeStamp; void* dwData; } ;
typedef int LPDIRECTINPUTDEVICE8A ;
typedef TYPE_3__ IDirectInputDeviceImpl ;
typedef void* DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,int) ;
 TYPE_3__* FUNC_5 (int ) ;

void FUNC_6(LPDIRECTINPUTDEVICE8A VAR_2, int VAR_3, DWORD VAR_4, DWORD VAR_5, DWORD VAR_6)
{
    IDirectInputDeviceImpl *VAR_7 = FUNC_5(VAR_2);
    int VAR_8, VAR_9 = FUNC_4(&VAR_7->data_format, VAR_3);


    if (VAR_7->hEvent) FUNC_2(VAR_7->hEvent);

    FUNC_1(FUNC_0(), VAR_1, 0, 0);

    if (!VAR_7->queue_len || VAR_7->overflow || VAR_9 < 0) return;

    VAR_8 = (VAR_7->queue_head + 1) % VAR_7->queue_len;
    if (VAR_8 == VAR_7->queue_tail)
    {
        FUNC_3(" queue overflowed\n");
        VAR_7->overflow = VAR_0;
        return;
    }

    FUNC_3(" queueing %d at offset %d (queue head %d / size %d)\n",
          VAR_4, VAR_9, VAR_7->queue_head, VAR_7->queue_len);

    VAR_7->data_queue[VAR_7->queue_head].dwOfs = VAR_9;
    VAR_7->data_queue[VAR_7->queue_head].dwData = VAR_4;
    VAR_7->data_queue[VAR_7->queue_head].dwTimeStamp = VAR_5;
    VAR_7->data_queue[VAR_7->queue_head].dwSequence = VAR_6;


    if (VAR_7->num_actions > 0)
    {
        int VAR_10;
        for (VAR_10=0; VAR_10 < VAR_7->num_actions; VAR_10++)
        {
            if (VAR_7->action_map[VAR_10].offset == VAR_9)
            {
                FUNC_3("Offset %d mapped to uAppData %lu\n", VAR_9, VAR_7->action_map[VAR_10].uAppData);
                VAR_7->data_queue[VAR_7->queue_head].uAppData = VAR_7->action_map[VAR_10].uAppData;
                break;
            }
        }
    }

    VAR_7->queue_head = VAR_8;

}
