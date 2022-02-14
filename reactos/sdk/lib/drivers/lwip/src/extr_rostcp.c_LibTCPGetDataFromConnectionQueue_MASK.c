
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pbuf {scalar_t__ tot_len; } ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {int ReceiveShutdownStatus; scalar_t__ ReceiveShutdown; int PacketQueue; } ;
struct TYPE_9__ {scalar_t__ Offset; struct pbuf* p; int ListEntry; } ;
typedef int PUCHAR ;
typedef TYPE_1__* PQUEUE_ENTRY ;
typedef TYPE_2__* PCONNECTION_ENDPOINT ;
typedef int NTSTATUS ;
typedef int KIRQL ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_8 (struct pbuf*,int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct pbuf*) ;

NTSTATUS FUNC_10(PCONNECTION_ENDPOINT VAR_3, PUCHAR VAR_4, UINT VAR_5, UINT *VAR_6)
{
    PQUEUE_ENTRY VAR_7;
    struct pbuf* VAR_8;
    NTSTATUS VAR_9;
    UINT VAR_10, VAR_11, VAR_12, VAR_13;
    KIRQL VAR_14;

    (*VAR_6) = 0;

    FUNC_5(VAR_3, &VAR_14);

    if (!FUNC_3(&VAR_3->PacketQueue))
    {
        while ((VAR_7 = FUNC_4(VAR_3)) != ((void*)0))
        {
            VAR_8 = VAR_7->p;


            VAR_11 = VAR_8->tot_len;
            VAR_11 -= VAR_7->Offset;
            VAR_12 = VAR_7->Offset;


            VAR_10 = FUNC_6(VAR_11, VAR_5);
            FUNC_0(VAR_10 != 0);
            if (VAR_10 != VAR_11)
            {

                VAR_7->Offset += VAR_10;
                FUNC_2(&VAR_3->PacketQueue, &VAR_7->ListEntry);
                VAR_7 = ((void*)0);
            }

            FUNC_7(VAR_3, VAR_14);

            VAR_13 = FUNC_8(VAR_8, VAR_4, VAR_10, VAR_12);
            FUNC_0(VAR_13 == VAR_10);

            FUNC_5(VAR_3, &VAR_14);


            VAR_5 -= VAR_10;
            VAR_4 += VAR_10;
            (*VAR_6) += VAR_10;

            if (VAR_7 != ((void*)0))
            {

                FUNC_9(VAR_7->p);

                FUNC_1(&VAR_0, VAR_7);
            }
            else
            {

                FUNC_0(VAR_5 == 0);
            }

            FUNC_0((*VAR_6) != 0);
            VAR_9 = VAR_2;

            if (!VAR_5)
                break;
        }
    }
    else
    {
        if (VAR_3->ReceiveShutdown)
            VAR_9 = VAR_3->ReceiveShutdownStatus;
        else
            VAR_9 = VAR_1;
    }

    FUNC_7(VAR_3, VAR_14);

    return VAR_9;
}
