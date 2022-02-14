
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static
ULONG
FUNC_0(ULONG VAR_20)
{
    ULONG VAR_21 = 0;

    if (VAR_20 & VAR_0)
        VAR_21 |= VAR_11;

    if (VAR_20 & VAR_2)
        VAR_21 |= VAR_13;

    if (VAR_20 & VAR_6)
        VAR_21 |= VAR_16;

    if (VAR_20 & VAR_4)
        VAR_21 |= VAR_10;

    if (VAR_20 & VAR_1)
        VAR_21 |= VAR_12;


    if (VAR_20 & VAR_8)
        VAR_21 |= VAR_18;
    else if (VAR_20 & VAR_5)
        VAR_21 |= VAR_15;
    else if (VAR_20 & VAR_3)
        VAR_21 |= VAR_14;
    else if (VAR_20 & VAR_9)
        VAR_21 |= VAR_19;
    else if (VAR_20 & VAR_7)
        VAR_21 |= VAR_17;

    return VAR_21;
}
