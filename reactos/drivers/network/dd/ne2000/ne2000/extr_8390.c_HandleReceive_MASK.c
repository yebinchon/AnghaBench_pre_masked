
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_8__ {int InterruptStatus; scalar_t__ NextPacket; scalar_t__ CurrentPage; int TXCurrent; int MiniportAdapterHandle; void* DoneIndicating; void* TransmitPending; void* ReceiveError; void* BufferOverflow; scalar_t__ IOBase; } ;
typedef TYPE_1__* PNIC_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int*) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;

__attribute__((used)) static VOID FUNC_10(
    PNIC_ADAPTER VAR_18)







{
    UINT VAR_19;
    UCHAR VAR_20;
    UINT VAR_21;

    FUNC_0(VAR_8, ("Called.\n"));

    VAR_18->DoneIndicating = VAR_4;
    VAR_21 = 0;

    FUNC_1(VAR_18);

    if (VAR_18->BufferOverflow) {

        FUNC_0(VAR_9, ("Receive ring overflow.\n"));


        FUNC_8(VAR_18->IOBase + VAR_11, VAR_3 | VAR_1 | VAR_0);


        FUNC_8(VAR_18->IOBase + VAR_13, 0x00);
        FUNC_8(VAR_18->IOBase + VAR_14, 0x00);


        for (VAR_19 = 0; VAR_19 < 4; VAR_19++) {
            FUNC_7(VAR_18->IOBase + VAR_12, &VAR_20);
            if (VAR_20 & VAR_6)
                break;

            FUNC_9(500);
        }






        if ((VAR_18->InterruptStatus & (VAR_5 | VAR_7)) == 0) {

            VAR_18->TransmitPending = VAR_17;
        }


        FUNC_8(VAR_18->IOBase + VAR_15, VAR_16);


        FUNC_8(VAR_18->IOBase + VAR_11, VAR_2 | VAR_1);

        FUNC_4(VAR_18);

        VAR_18->BufferOverflow = VAR_4;
    }

    if (VAR_18->ReceiveError) {
        FUNC_0(VAR_9, ("Receive error.\n"));


        VAR_18->NextPacket = VAR_18->CurrentPage;
        FUNC_3(VAR_18);

        VAR_18->ReceiveError = VAR_4;
    }

    for (;;) {
        FUNC_1(VAR_18);

        FUNC_0(VAR_9, ("Current page (0x%X)  NextPacket (0x%X).\n",
            VAR_18->CurrentPage,
            VAR_18->NextPacket));

        if (VAR_18->CurrentPage == VAR_18->NextPacket) {
            FUNC_0(VAR_9, ("No more packets.\n"));
            break;
        } else {
            FUNC_0(VAR_9, ("Got a packet in the receive ring.\n"));

     FUNC_0(VAR_8,("Adapter->MiniportAdapterHandle: %x\n",
         VAR_18->MiniportAdapterHandle));

            FUNC_2(VAR_18);

            VAR_18->DoneIndicating = VAR_17;

            VAR_21++;
            if (VAR_21 == 10) {

                break;
            }
        }
    }

    if ((VAR_18->TransmitPending) && (VAR_18->TXCurrent != -1)) {
        FUNC_0(VAR_9, ("Retransmitting current packet at (%d).\n", VAR_18->TXCurrent));

        FUNC_5(VAR_18);
        VAR_18->TransmitPending = VAR_4;
    }

    if (VAR_18->DoneIndicating)
        FUNC_6(VAR_18->MiniportAdapterHandle);
}
