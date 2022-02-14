
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ ULONG ;
typedef char UCHAR ;
typedef scalar_t__ BOOLEAN ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,char,char) ;
 char VAR_11 ;
 char VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 char VAR_16 ;
 char VAR_17 ;

VOID FUNC_2(ULONG VAR_18, ULONG VAR_19, ULONG VAR_20, ULONG VAR_21, UCHAR VAR_22, UCHAR VAR_23, BOOLEAN VAR_24, BOOLEAN VAR_25, UCHAR VAR_26)
{
    UCHAR VAR_27, VAR_28, VAR_29, VAR_30;


    if (VAR_23 == VAR_8)
    {
        if (VAR_22 == VAR_17)
        {
            VAR_27 = VAR_11;
            VAR_28 = VAR_12;
            VAR_29 = VAR_9;
            VAR_30 = VAR_10;
        }
        else
        {
            VAR_27 = VAR_15;
            VAR_28 = VAR_16;
            VAR_29 = VAR_13;
            VAR_30 = VAR_14;
        }
    }
    else
    {
        if (VAR_22 == VAR_17)
        {
            VAR_27 = VAR_6;
            VAR_28 = VAR_7;
            VAR_29 = VAR_4;
            VAR_30 = VAR_5;
        }
        else
        {
            VAR_27 = VAR_2;
            VAR_28 = VAR_3;
            VAR_29 = VAR_0;
            VAR_30 = VAR_1;
        }
    }


    if (VAR_24)
    {
        FUNC_1(VAR_18, VAR_19, VAR_20, VAR_21, ' ', VAR_26);
    }


    FUNC_1(VAR_18, VAR_19, VAR_18, VAR_19, VAR_27, VAR_26);
    FUNC_1(VAR_20, VAR_19, VAR_20, VAR_19, VAR_28, VAR_26);
    FUNC_1(VAR_18, VAR_21, VAR_18, VAR_21, VAR_29, VAR_26);
    FUNC_1(VAR_20, VAR_21, VAR_20, VAR_21, VAR_30, VAR_26);


    FUNC_1(VAR_18, VAR_19+1, VAR_18, VAR_21-1, VAR_22, VAR_26);

    FUNC_1(VAR_18+1, VAR_19, VAR_20-1, VAR_19, VAR_23, VAR_26);

    FUNC_1(VAR_20, VAR_19+1, VAR_20, VAR_21-1, VAR_22, VAR_26);

    FUNC_1(VAR_18+1, VAR_21, VAR_20-1, VAR_21, VAR_23, VAR_26);


    if (VAR_25)
    {
        FUNC_0(VAR_18, VAR_19, VAR_20, VAR_21);
    }
}
