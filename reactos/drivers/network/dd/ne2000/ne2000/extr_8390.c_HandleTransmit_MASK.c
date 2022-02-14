
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_5__ {int* TXSize; size_t TXCurrent; int TXFree; int TXCount; scalar_t__ TXQueueTail; scalar_t__ TransmitError; } ;
typedef TYPE_1__* PNIC_ADAPTER ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static VOID FUNC_3(
    PNIC_ADAPTER VAR_3)





{
    UINT VAR_4;
    UINT VAR_5;





    if (VAR_3->TransmitError) {

        VAR_3->TransmitError = VAR_1;
    }


    VAR_4 = VAR_3->TXSize[VAR_3->TXCurrent];
    VAR_5 = (VAR_4 + VAR_0 - 1) / VAR_0;

    FUNC_0(VAR_2, ("Freeing (%d) buffers at (%d).\n",
        VAR_5,
        VAR_3->TXCurrent));

    VAR_3->TXFree += VAR_5;
    VAR_3->TXSize[VAR_3->TXCurrent] = 0;
    VAR_3->TXCurrent = (VAR_3->TXCurrent + VAR_5) % VAR_3->TXCount;

    if (VAR_3->TXSize[VAR_3->TXCurrent] == 0) {
        FUNC_0(VAR_2, ("No more packets in transmit buffer.\n"));

        VAR_3->TXCurrent = -1;
    }

    if (VAR_3->TXQueueTail) {
        if (FUNC_1(VAR_3))
            FUNC_2(VAR_3);
    }
}
