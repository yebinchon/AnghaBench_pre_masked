
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct timespec const*) ;

usec_t FUNC_1(const struct timespec *VAR_4) {
        FUNC_0(VAR_4);

        if (VAR_4->tv_sec < 0 || VAR_4->tv_nsec < 0)
                return VAR_2;

        if ((usec_t) VAR_4->tv_sec > (VAR_1 - (VAR_4->tv_nsec / VAR_0)) / VAR_3)
                return VAR_2;

        return
                (usec_t) VAR_4->tv_sec * VAR_3 +
                (usec_t) VAR_4->tv_nsec / VAR_0;
}
