
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int NextPacket; int PageStart; int PageStop; int InterruptMask; int CurrentPage; void* TransmitError; void* ReceiveError; void* BufferOverflow; scalar_t__ IOBase; scalar_t__ WordMode; } ;
typedef TYPE_1__* PNIC_ADAPTER ;
typedef int NDIS_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int VAR_10 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

NDIS_STATUS FUNC_4(
    PNIC_ADAPTER VAR_25)
{
    FUNC_0(VAR_9, ("Called.\n"));

    if (VAR_25->WordMode ) {

        FUNC_3(VAR_25->IOBase + VAR_13, VAR_7 | VAR_6 | VAR_5);
    } else {

        FUNC_3(VAR_25->IOBase + VAR_13, VAR_6 | VAR_5);
    }


    FUNC_3(VAR_25->IOBase + VAR_18, 0x00);
    FUNC_3(VAR_25->IOBase + VAR_19, 0x00);


    FUNC_3(VAR_25->IOBase + VAR_20, VAR_23);


    FUNC_3(VAR_25->IOBase + VAR_21, VAR_24);


    FUNC_3(VAR_25->IOBase + VAR_11, VAR_25->NextPacket);


    FUNC_3(VAR_25->IOBase + VAR_16, VAR_25->PageStart);


    FUNC_3(VAR_25->IOBase + VAR_17, VAR_25->PageStop);


    FUNC_2(VAR_25);


    FUNC_1(VAR_25);


    FUNC_3(VAR_25->IOBase + VAR_12, VAR_4 | VAR_2 | VAR_1);


    FUNC_3(VAR_25->IOBase + VAR_22, VAR_25->PageStart + 1);


    FUNC_3(VAR_25->IOBase + VAR_12, VAR_4 | VAR_2 | VAR_0);


    FUNC_3(VAR_25->IOBase + VAR_15, 0xFF);


    FUNC_3(VAR_25->IOBase + VAR_14, VAR_25->InterruptMask);


    FUNC_3(VAR_25->IOBase + VAR_12, VAR_3 | VAR_2 | VAR_0);

    VAR_25->CurrentPage = VAR_25->PageStart + 1;
    VAR_25->NextPacket = VAR_25->PageStart + 1;
    VAR_25->BufferOverflow = VAR_8;
    VAR_25->ReceiveError = VAR_8;
    VAR_25->TransmitError = VAR_8;

    FUNC_0(VAR_9, ("Leaving.\n"));

    return VAR_10;
}
