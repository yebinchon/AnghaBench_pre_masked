
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef void* time_t ;
struct timespec {long tv_nsec; void* tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct timespec*) ;

struct timespec *FUNC_1(struct timespec *VAR_4, usec_t VAR_5) {
        FUNC_0(VAR_4);

        if (VAR_5 == VAR_2 ||
            VAR_5 / VAR_3 >= VAR_1) {
                VAR_4->tv_sec = (time_t) -1;
                VAR_4->tv_nsec = (long) -1;
                return VAR_4;
        }

        VAR_4->tv_sec = (time_t) (VAR_5 / VAR_3);
        VAR_4->tv_nsec = (long int) ((VAR_5 % VAR_3) * VAR_0);

        return VAR_4;
}
