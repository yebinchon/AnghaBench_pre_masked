
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_3__ {int monotonic; unsigned long long realtime; } ;
typedef TYPE_1__ heartbeat_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 () ;
 void* FUNC_3 () ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

usec_t FUNC_6(heartbeat_t *VAR_1, usec_t VAR_2) {
    heartbeat_t VAR_3;
    VAR_3.monotonic = FUNC_2();
    VAR_3.realtime = FUNC_3();

    usec_t VAR_4 = VAR_3.monotonic - (VAR_3.monotonic % VAR_2) + VAR_2;

    while(VAR_3.monotonic < VAR_4) {
        FUNC_4(VAR_4 - VAR_3.monotonic);
        VAR_3.monotonic = FUNC_2();
        VAR_3.realtime = FUNC_3();
    }

    if(FUNC_1(VAR_1->realtime != 0ULL)) {
        usec_t VAR_5 = VAR_3.monotonic - VAR_1->monotonic;
        usec_t VAR_6 = VAR_3.realtime - VAR_1->realtime;

        VAR_1->monotonic = VAR_3.monotonic;
        VAR_1->realtime = VAR_3.realtime;

        if(FUNC_5(VAR_5 >= VAR_2 + VAR_2 / 2)) {
            VAR_0 = 0;
            FUNC_0("heartbeat missed %llu monotonic microseconds", VAR_5 - VAR_2);
        }

        return VAR_6;
    }
    else {
        VAR_1->monotonic = VAR_3.monotonic;
        VAR_1->realtime = VAR_3.realtime;
        return 0ULL;
    }
}
