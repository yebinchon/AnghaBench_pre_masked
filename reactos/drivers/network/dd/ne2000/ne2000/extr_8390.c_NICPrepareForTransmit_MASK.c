
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int * Next; } ;
struct TYPE_5__ {int TXFree; int TXCurrent; int TXNext; int TXCount; int MiniportAdapterHandle; int * TXQueueTail; int * TXQueueHead; } ;
typedef TYPE_1__* PNIC_ADAPTER ;
typedef int * PNDIS_PACKET ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,int *,int *,int *,int*) ;
 TYPE_2__* FUNC_4 (int *) ;
 int VAR_5 ;

__attribute__((used)) static BOOLEAN FUNC_5(
    PNIC_ADAPTER VAR_6)
{
    UINT VAR_7;
    UINT VAR_8;
    PNDIS_PACKET VAR_9;

    FUNC_0(VAR_2, ("Called.\n"));


    FUNC_3(VAR_6->TXQueueHead,
                    ((void*)0),
                    ((void*)0),
                    ((void*)0),
                    &VAR_7);

    VAR_8 = (VAR_7 + VAR_0 - 1) / VAR_0;

    if (VAR_8 > VAR_6->TXFree) {
        FUNC_0(VAR_3, ("No transmit resources. Have (%d) buffers, need (%d).\n",
            VAR_6->TXFree, VAR_8));

        return VAR_1;
    }


    FUNC_1(VAR_6);


    if (VAR_6->TXCurrent == -1)
        VAR_6->TXCurrent = VAR_6->TXNext;

    VAR_6->TXNext = (VAR_6->TXNext + VAR_8) % VAR_6->TXCount;
    VAR_6->TXFree -= VAR_8;


    VAR_9 = VAR_6->TXQueueHead;
    VAR_6->TXQueueHead = FUNC_4(VAR_9)->Next;

    if (VAR_9 == VAR_6->TXQueueTail)
        VAR_6->TXQueueTail = ((void*)0);


    FUNC_2(VAR_6->MiniportAdapterHandle,
                      VAR_9,
                      VAR_4);

    return VAR_5;
}
