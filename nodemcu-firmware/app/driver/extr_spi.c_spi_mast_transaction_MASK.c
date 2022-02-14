
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef int uint16 ;
typedef int sint16 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
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
 int FUNC_8 (int ,int) ;

void FUNC_9(uint8 VAR_18, uint8 VAR_19, uint16 VAR_20, uint8 VAR_21, uint32 VAR_22,
                          uint16 VAR_23, uint8 VAR_24, sint16 VAR_25)
{
    if (VAR_18 > 1)
        return;

    while(FUNC_1(FUNC_4(VAR_18)) & VAR_1);


    FUNC_0(FUNC_5(VAR_18), VAR_5|VAR_2|VAR_15|VAR_9|VAR_12|VAR_0);

    FUNC_8(FUNC_6(VAR_18),
                   ((VAR_21 - 1) & VAR_3) << VAR_4 |
                   ((VAR_23 - 1) & VAR_16) << VAR_17 |
                   ((VAR_24 - 1) & VAR_10) << VAR_11 |
                   ((VAR_25 - 1) & VAR_13) << VAR_14);


    if (VAR_19 > 0)
    {
        uint16 VAR_26 = VAR_20 << (16 - VAR_19);
        VAR_26 = (VAR_26 >> 8) | (VAR_26 << 8);
        FUNC_8(FUNC_7(VAR_18),
                       ((VAR_19 - 1 & VAR_6) << VAR_7) |
                       (VAR_26 & VAR_8));
        FUNC_2(FUNC_5(VAR_18), VAR_5);
    }
    if (VAR_21 > 0)
    {
        FUNC_8(FUNC_3(VAR_18), VAR_22 << (32 - VAR_21));
        FUNC_2(FUNC_5(VAR_18), VAR_2);
    }
    if (VAR_23 > 0)
    {
        FUNC_2(FUNC_5(VAR_18), VAR_15);
    }
    if (VAR_24 > 0)
    {
        FUNC_2(FUNC_5(VAR_18), VAR_9);
    }
    if (VAR_25 > 0)
    {
        FUNC_2(FUNC_5(VAR_18), VAR_12);
    }
    else if (VAR_25 < 0)
    {
        FUNC_2(FUNC_5(VAR_18), VAR_0);
    }


    FUNC_2(FUNC_4(VAR_18), VAR_1);

    while(FUNC_1(FUNC_4(VAR_18)) & VAR_1);
}
