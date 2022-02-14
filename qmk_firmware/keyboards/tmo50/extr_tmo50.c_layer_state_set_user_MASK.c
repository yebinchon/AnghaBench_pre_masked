
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

uint32_t FUNC_1(uint32_t VAR_5)
{

    if (FUNC_0(VAR_5) == 0) {
        VAR_4 &= ~(1<<VAR_0);
    } else {
        VAR_4 |= (1<<VAR_0);
    }


    if (FUNC_0(VAR_5) == 1) {
        VAR_4 &= ~(1<<VAR_1);
    } else {
        VAR_4 |= (1<<VAR_1);
    }

    if (FUNC_0(VAR_5) == 2) {
        VAR_4 &= ~(1<<VAR_2);
    } else {
        VAR_4 |= (1<<VAR_2);
    }


    if (FUNC_0(VAR_5) == 3) {
        VAR_4 &= ~(1<<VAR_3);
    } else {
        VAR_4 |= (1<<VAR_3);
    }

    return VAR_5;
}
