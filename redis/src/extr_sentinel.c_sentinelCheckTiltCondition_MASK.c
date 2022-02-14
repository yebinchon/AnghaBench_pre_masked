
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ mstime_t ;
struct TYPE_2__ {scalar_t__ previous_time; int tilt; scalar_t__ tilt_start_time; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,char*,int *,char*) ;

void FUNC_2(void) {
    mstime_t VAR_3 = FUNC_0();
    mstime_t VAR_4 = VAR_3 - VAR_2.previous_time;

    if (VAR_4 < 0 || VAR_4 > VAR_1) {
        VAR_2.tilt = 1;
        VAR_2.tilt_start_time = FUNC_0();
        FUNC_1(VAR_0,"+tilt",((void*)0),"#tilt mode entered");
    }
    VAR_2.previous_time = FUNC_0();
}
