
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
typedef int nsec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timespec const*) ;

nsec_t FUNC_1(const struct timespec *VAR_3) {
        FUNC_0(VAR_3);

        if (VAR_3->tv_sec < 0 || VAR_3->tv_nsec < 0)
                return VAR_0;

        if ((nsec_t) VAR_3->tv_sec >= (VAR_2 - VAR_3->tv_nsec) / VAR_1)
                return VAR_0;

        return (nsec_t) VAR_3->tv_sec * VAR_1 + (nsec_t) VAR_3->tv_nsec;
}
