
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int loff_t ;


 int VAR_0 ;

loff_t FUNC_0(int VAR_1, int VAR_2)
{
    loff_t VAR_3;
    loff_t VAR_4 = VAR_0;


    if (!VAR_2) {





        VAR_4 = ((loff_t)1 << 32) - 1;


        VAR_4 >>= (VAR_1 - 9);
        VAR_4 <<= VAR_1;
    }


    VAR_3 = (loff_t)1 << 32;
    VAR_3 <<= VAR_1;
    VAR_3 -= 1;


    if (VAR_3 > VAR_4)
        VAR_3 = VAR_4;

    return VAR_3;
}
