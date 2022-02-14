
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_2 (scalar_t__) ;

unsigned long
FUNC_3(unsigned long VAR_3, unsigned char VAR_4)
{
    unsigned long VAR_5, VAR_6, VAR_7;




    FUNC_0(FUNC_1(VAR_3));




    VAR_5 = FUNC_2(VAR_3 + VAR_0);
    VAR_6 = FUNC_2(VAR_3 + VAR_2);
    VAR_7 = FUNC_2(VAR_3 + VAR_1);
    return(((VAR_5 & VAR_4) ? 1 : 0) | ((VAR_6 & VAR_4) ? 2 : 0) |
           ((VAR_7 & VAR_4) ? 4 : 0));
}
