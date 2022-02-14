
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_3__ {scalar_t__ IOBase; } ;
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
 int FUNC_1 (scalar_t__,int*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

NDIS_STATUS FUNC_4(
    PNIC_ADAPTER VAR_15)







{
    UCHAR VAR_16;
    UINT VAR_17;

    FUNC_0(VAR_5, ("Called.\n"));


    FUNC_2(VAR_15->IOBase + VAR_8, VAR_3 | VAR_1 | VAR_0);


    FUNC_2( VAR_15->IOBase + VAR_10, 0x00);
    FUNC_2( VAR_15->IOBase + VAR_10, 0x00);


    for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
        FUNC_1(VAR_15->IOBase + VAR_9, &VAR_16);
        if (VAR_16 & VAR_4)
            break;

        FUNC_3(500);
    }







    FUNC_2(VAR_15->IOBase + VAR_11, VAR_13);


    FUNC_2(VAR_15->IOBase + VAR_12, VAR_14);


    FUNC_2(VAR_15->IOBase + VAR_8, VAR_2 | VAR_1);

    return VAR_7;
}
