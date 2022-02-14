
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef void* time_t ;
typedef void* suseconds_t ;
struct timeval {void* tv_usec; void* tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timeval*) ;

struct timeval *FUNC_1(struct timeval *VAR_3, usec_t VAR_4) {
        FUNC_0(VAR_3);

        if (VAR_4 == VAR_1 ||
            VAR_4 / VAR_2 > VAR_0) {
                VAR_3->tv_sec = (time_t) -1;
                VAR_3->tv_usec = (suseconds_t) -1;
        } else {
                VAR_3->tv_sec = (time_t) (VAR_4 / VAR_2);
                VAR_3->tv_usec = (suseconds_t) (VAR_4 % VAR_2);
        }

        return VAR_3;
}
