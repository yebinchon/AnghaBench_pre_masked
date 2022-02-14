
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timeval const*) ;

usec_t FUNC_1(const struct timeval *VAR_3) {
        FUNC_0(VAR_3);

        if (VAR_3->tv_sec < 0 || VAR_3->tv_usec < 0)
                return VAR_1;

        if ((usec_t) VAR_3->tv_sec > (VAR_0 - VAR_3->tv_usec) / VAR_2)
                return VAR_1;

        return
                (usec_t) VAR_3->tv_sec * VAR_2 +
                (usec_t) VAR_3->tv_usec;
}
