
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

void
FUNC_2(u32 *VAR_17, u32 *VAR_18, u32 *VAR_19)
{

    u32 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

    VAR_20 = FUNC_1(FUNC_0(VAR_9 + VAR_6));

    VAR_21 =
        ((VAR_20 & VAR_7) >> VAR_8) + 1;

    VAR_22 =
        ((VAR_20 & VAR_2) >> VAR_3) + 1;

    VAR_24 =
        ((VAR_20 & VAR_4) >> VAR_5) + 1;

    VAR_23 =
       (((VAR_20 & VAR_0) >> VAR_1) + 1)*2;

    VAR_25 = VAR_21 * 40000000;

    if (VAR_17)
        *VAR_17 = VAR_25/VAR_22;

    if (VAR_18)
        *VAR_18 = VAR_25/VAR_24;

    if (VAR_19)
        *VAR_19 = (VAR_25/VAR_22)/VAR_23;
}
