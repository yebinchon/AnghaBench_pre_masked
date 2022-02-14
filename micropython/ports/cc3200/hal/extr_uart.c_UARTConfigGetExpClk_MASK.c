
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

void
FUNC_3(unsigned long VAR_10, unsigned long VAR_11,
                    unsigned long *VAR_12, unsigned long *VAR_13)
{
    unsigned long VAR_14, VAR_15;




    FUNC_0(FUNC_2(VAR_10));




    VAR_14 = FUNC_1(VAR_10 + VAR_8);
    VAR_15 = FUNC_1(VAR_10 + VAR_7);
    *VAR_12 = (VAR_11 * 4) / ((64 * VAR_14) + VAR_15);




    if(FUNC_1(VAR_10 + VAR_6) & VAR_0)
    {




        *VAR_12 *= 2;
    }




    *VAR_13 = (FUNC_1(VAR_10 + VAR_9) &
                  (VAR_3 | VAR_5 | VAR_4 |
                   VAR_1 | VAR_2));
}
