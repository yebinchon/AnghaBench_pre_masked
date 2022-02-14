
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int loading; size_t loading_total_bytes; scalar_t__ loading_loaded_bytes; int loading_start_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int *) ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (int *) ;

void FUNC_2(size_t VAR_7, int VAR_8) {

    VAR_6.loading = 1;
    VAR_6.loading_start_time = FUNC_1(((void*)0));
    VAR_6.loading_loaded_bytes = 0;
    VAR_6.loading_total_bytes = VAR_7;


    int VAR_9;
    if (VAR_8 & VAR_0)
        VAR_9 = VAR_3;
    else if(VAR_8 & VAR_1)
        VAR_9 = VAR_5;
    else
        VAR_9 = VAR_4;
    FUNC_0(VAR_2,VAR_9,((void*)0));
}
