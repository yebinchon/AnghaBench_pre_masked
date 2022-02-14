
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef int clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct timeval*,int *) ;
 scalar_t__ FUNC_2 (int) ;

inline int FUNC_3(clockid_t VAR_2, struct timespec *VAR_3) {
    struct timeval VAR_4;
    if(FUNC_2(FUNC_1(&VAR_4, ((void*)0)) == -1)) {
        FUNC_0("gettimeofday() failed.");
        return -1;
    }
    VAR_3->tv_sec = VAR_4.tv_sec;
    VAR_3->tv_nsec = (VAR_4.tv_usec % VAR_1) * VAR_0;
    return 0;
}
