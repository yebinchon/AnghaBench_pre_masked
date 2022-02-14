
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int robj ;
typedef int redisDb ;
typedef scalar_t__ mstime_t ;
struct TYPE_2__ {scalar_t__ lua_time_start; scalar_t__ call_depth; scalar_t__ mstime; scalar_t__ lua_caller; scalar_t__ loading; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__ VAR_0 ;

int FUNC_2(redisDb *VAR_1, robj *VAR_2) {
    mstime_t VAR_3 = FUNC_0(VAR_1,VAR_2);
    mstime_t VAR_4;

    if (VAR_3 < 0) return 0;


    if (VAR_0.loading) return 0;






    if (VAR_0.lua_caller) {
        VAR_4 = VAR_0.lua_time_start;
    }







    else if (VAR_0.call_depth > 0) {
        VAR_4 = VAR_0.mstime;
    }

    else {
        VAR_4 = FUNC_1();
    }



    return VAR_4 > VAR_3;
}
