
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(int VAR_3)
{
    if (VAR_3 <= 0)
        return VAR_3;
    int VAR_4 = VAR_3 & ~VAR_1;
    int VAR_5 = VAR_3 & VAR_1;




    if (VAR_4 >= 32 && VAR_4 < VAR_0) {




        if (VAR_4 >= 'a' && VAR_4 <= 'z' && (VAR_5 & VAR_2))
            VAR_4 &= 0x5F;
        VAR_5 &= ~VAR_2;
    }
    return VAR_4 | VAR_5;
}
