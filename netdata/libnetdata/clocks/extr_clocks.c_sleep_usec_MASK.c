
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int time_t ;
typedef int suseconds_t ;
struct timespec {int tv_nsec; int tv_sec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct timespec*,struct timespec*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;

int FUNC_6(usec_t VAR_4) {




    struct timespec VAR_5, VAR_6 = {
            .tv_sec = (time_t) (VAR_4 / 1000000),
            .tv_nsec = (suseconds_t) ((VAR_4 % 1000000) * 1000)
    };

    while (FUNC_3(&VAR_6, &VAR_5) == -1) {
        if (FUNC_2(VAR_3 == VAR_1)) {
            FUNC_0(VAR_0, "nanosleep() interrupted (while sleeping for %llu microseconds).", VAR_4);
            VAR_6.tv_sec = VAR_5.tv_sec;
            VAR_6.tv_nsec = VAR_5.tv_nsec;
        } else {
            FUNC_1("Cannot nanosleep() for %llu microseconds.", VAR_4);
            break;
        }
    }

    return 0;
}
