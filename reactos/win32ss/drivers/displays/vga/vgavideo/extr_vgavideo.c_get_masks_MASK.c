
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_0(int VAR_3, int VAR_4)
{
    register int VAR_5;

    VAR_1 = VAR_2 = 0;
    VAR_0 = VAR_4;

    VAR_5 = (VAR_3+VAR_4) & 7;
    if (VAR_5)
    {
        VAR_0 -= VAR_5;
        VAR_2 = (unsigned char)(0xff00 >> VAR_5);
    }

    VAR_5 = VAR_3 & 7;
    if (VAR_5)
    {
        VAR_0 -= (8 - VAR_5);
        VAR_1 = (0xff >> VAR_5);
    }

    if (VAR_0 < 0)
    {
        VAR_1 &= VAR_2;
        VAR_2 = 0;
        VAR_0 = 0;
    }
    VAR_0 /= 8;
}
