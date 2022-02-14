
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

void FUNC_1(void)
{


    int VAR_2 = 0;
    VAR_2 = *VAR_0;
    VAR_2 >>= 28;

    if (VAR_2 >= 4) {
        VAR_1 = 0;
        FUNC_0("Danube Chip ver. 1.4 detected. \n");
    }
    else {
        VAR_1 = 1;
        FUNC_0("Danube Chip ver. 1.3 or below detected. \n");
    }

    return;
}
