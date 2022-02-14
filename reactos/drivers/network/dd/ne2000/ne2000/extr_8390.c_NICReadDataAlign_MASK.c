
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int USHORT ;
typedef int ULONG_PTR ;
typedef int UCHAR ;
struct TYPE_3__ {scalar_t__ IOBase; scalar_t__ WordMode; } ;
typedef int PUSHORT ;
typedef TYPE_1__* PNIC_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (scalar_t__,int*) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

VOID FUNC_6(
    PNIC_ADAPTER VAR_13,
    PUSHORT VAR_14,
    ULONG_PTR VAR_15,
    USHORT VAR_16)
{
    UCHAR VAR_17;
    USHORT VAR_18;

    VAR_18 = VAR_16;


    FUNC_4(VAR_13->IOBase + VAR_7, VAR_3 | VAR_2 | VAR_0);


    FUNC_4(VAR_13->IOBase + VAR_11, (UCHAR)(VAR_15 & 0xFF));
    FUNC_4(VAR_13->IOBase + VAR_12, (UCHAR)(VAR_15 >> 8));


    FUNC_4(VAR_13->IOBase + VAR_9, (UCHAR)(VAR_18 & 0xFF));
    FUNC_4(VAR_13->IOBase + VAR_10, (UCHAR)(VAR_18 >> 8));


    FUNC_4(VAR_13->IOBase + VAR_7, VAR_3 | VAR_1 | VAR_0);

    if (VAR_13->WordMode)
        FUNC_2(VAR_13->IOBase + VAR_6, VAR_14, VAR_18 >> 1);
    else
        FUNC_1(VAR_13->IOBase + VAR_6, VAR_14, VAR_18);


    for (VAR_18 = 0; VAR_18 < 0xFFFF; VAR_18++) {
        FUNC_3(VAR_13->IOBase + VAR_8, &VAR_17);
        if (VAR_17 & VAR_4)
            break;

        FUNC_5(4);
    }







    FUNC_4(VAR_13->IOBase + VAR_8, VAR_4);
}
