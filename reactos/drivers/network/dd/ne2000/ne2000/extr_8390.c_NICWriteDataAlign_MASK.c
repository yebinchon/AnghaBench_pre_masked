
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
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__,int*) ;
 int FUNC_2 (scalar_t__,int*) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

VOID FUNC_7(
    PNIC_ADAPTER VAR_14,
    ULONG_PTR VAR_15,
    PUSHORT VAR_16,
    USHORT VAR_17)
{
    UCHAR VAR_18;
    USHORT VAR_19;


    FUNC_5(VAR_14->IOBase + VAR_8, VAR_4 | VAR_3 | VAR_0);




    FUNC_5(VAR_14->IOBase + VAR_12, (UCHAR)(VAR_15 & 0xFF));
    FUNC_5(VAR_14->IOBase + VAR_13, (UCHAR)(VAR_15 >> 8));


    FUNC_5(VAR_14->IOBase + VAR_10, 0x02);
    FUNC_5(VAR_14->IOBase + VAR_11, 0x00);


    FUNC_5(VAR_14->IOBase + VAR_8, VAR_4 | VAR_1 | VAR_0);


    FUNC_2(VAR_14->IOBase + VAR_7, &VAR_19);


    for (VAR_19 = 0; VAR_19 < 0xFFFF; VAR_19++) {
        FUNC_1(VAR_14->IOBase + VAR_9, &VAR_18);
        if (VAR_18 & VAR_5)
            break;

        FUNC_6(4);
    }







    FUNC_5(VAR_14->IOBase + VAR_9, VAR_5);



    VAR_19 = VAR_17;


    FUNC_5(VAR_14->IOBase + VAR_12, (UCHAR)(VAR_15 & 0xFF));
    FUNC_5(VAR_14->IOBase + VAR_13, (UCHAR)(VAR_15 >> 8));


    FUNC_5(VAR_14->IOBase + VAR_10, (UCHAR)(VAR_19 & 0xFF));
    FUNC_5(VAR_14->IOBase + VAR_11, (UCHAR)(VAR_19 >> 8));


    FUNC_5(VAR_14->IOBase + VAR_8, VAR_4 | VAR_2 | VAR_0);

    if (VAR_14->WordMode)
        FUNC_4(VAR_14->IOBase + VAR_7, VAR_16, VAR_19 >> 1);
    else
        FUNC_3(VAR_14->IOBase + VAR_7, VAR_16, VAR_19);


    for (VAR_19 = 0; VAR_19 < 0xFFFF; VAR_19++) {
        FUNC_1(VAR_14->IOBase + VAR_9, &VAR_18);
        if (VAR_18 & VAR_5)
            break;

        FUNC_6(4);
    }







    FUNC_5(VAR_14->IOBase + VAR_9, VAR_5);
}
