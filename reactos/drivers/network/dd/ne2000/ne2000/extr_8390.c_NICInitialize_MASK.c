
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_5__ {scalar_t__ IOBase; int * StationAddress; } ;
typedef TYPE_1__* PNIC_ADAPTER ;
typedef int NDIS_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (scalar_t__,int*) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

NDIS_STATUS FUNC_6(
    PNIC_ADAPTER VAR_19)
{
    UCHAR VAR_20;

    FUNC_0(VAR_6, ("Called.\n"));


    FUNC_3(VAR_19->IOBase + VAR_9, &VAR_20);


    FUNC_5(1600);


    FUNC_4(VAR_19->IOBase + VAR_9, VAR_20);


    FUNC_4(VAR_19->IOBase + VAR_10, VAR_3 | VAR_1 | VAR_0);


    FUNC_4(VAR_19->IOBase + VAR_11, VAR_5 | VAR_4);


    FUNC_4(VAR_19->IOBase + VAR_13, 0x00);
    FUNC_4(VAR_19->IOBase + VAR_14, 0x00);


    FUNC_4(VAR_19->IOBase + VAR_15, VAR_17);


    FUNC_4(VAR_19->IOBase + VAR_16, VAR_18);


    if (!FUNC_1(VAR_19))
        return VAR_7;

    FUNC_0(VAR_6, ("Station address is (%02X %02X %02X %02X %02X %02X).\n",
        VAR_19->StationAddress[0], VAR_19->StationAddress[1],
        VAR_19->StationAddress[2], VAR_19->StationAddress[3],
        VAR_19->StationAddress[4], VAR_19->StationAddress[5]));


    FUNC_4(VAR_19->IOBase + VAR_10, VAR_2 | VAR_1 | VAR_0);


    FUNC_4(VAR_19->IOBase + VAR_12, 0xFF);


    FUNC_2(VAR_19);

    return VAR_8;
}
