
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ suseconds_t ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef int clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(clockid_t VAR_2, struct timeval *VAR_3) {
    struct timespec VAR_4;

    if(FUNC_2(FUNC_0(VAR_2, &VAR_4) == -1)) {
        FUNC_1("clock_gettime(%d, &timespec) failed.", VAR_2);
        VAR_3->tv_sec = 0;
        VAR_3->tv_usec = 0;
        return -1;
    }

    VAR_3->tv_sec = VAR_4.tv_sec;
    VAR_3->tv_usec = (suseconds_t)((VAR_4.tv_nsec % VAR_0) / VAR_1);
    return 0;
}
