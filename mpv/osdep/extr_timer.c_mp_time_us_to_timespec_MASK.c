
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {long tv_nsec; long tv_sec; } ;
typedef long int64_t ;


 long FUNC_0 (long,int) ;
 int FUNC_1 (struct timespec*) ;
 long FUNC_2 () ;

struct timespec FUNC_3(int64_t VAR_0)
{
    struct timespec VAR_1;
    FUNC_1(&VAR_1);


    int64_t VAR_2 = FUNC_2();
    int64_t VAR_3 = VAR_0 - VAR_2;
    int64_t VAR_4 = VAR_3 / (1000L * 1000L);
    long VAR_5 = (VAR_3 - VAR_4 * (1000L * 1000L)) * 1000L;
    if (VAR_5 < 0) {
        VAR_4 -= 1;
        VAR_5 += 1000000000L;
    }
    if (VAR_5 + VAR_1.tv_nsec >= 1000000000UL) {
        VAR_4 += 1;
        VAR_5 -= 1000000000UL;
    }

    VAR_4 = FUNC_0(VAR_4, 10000000);
    VAR_1.tv_sec += VAR_4;
    VAR_1.tv_nsec += VAR_5;
    return VAR_1;
}
