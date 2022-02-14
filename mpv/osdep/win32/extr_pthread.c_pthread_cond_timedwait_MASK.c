
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; long long tv_usec; } ;
struct timespec {int tv_sec; long long tv_nsec; } ;
typedef int pthread_mutex_t ;
typedef int pthread_cond_t ;
typedef long long DWORD ;


 long long VAR_0 ;
 int VAR_1 ;
 long long VAR_2 ;
 int FUNC_0 (int *,int *,long long) ;
 int FUNC_1 (struct timeval*,int *) ;

int FUNC_2(pthread_cond_t *restrict VAR_3,
                           pthread_mutex_t *restrict VAR_4,
                           const struct timespec *restrict VAR_5)
{

    struct timeval VAR_6;
    FUNC_1(&VAR_6, ((void*)0));
    DWORD VAR_7 = 0;
    if (VAR_5->tv_sec >= VAR_1 / 10000) {
        VAR_7 = VAR_0;
    } else if (VAR_5->tv_sec >= VAR_6.tv_sec) {
        long long VAR_8 = (VAR_5->tv_sec - VAR_6.tv_sec) * 1000LL +
            VAR_5->tv_nsec / 1000LL / 1000LL - VAR_6.tv_usec / 1000LL;
        if (VAR_8 > VAR_2) {
            VAR_7 = VAR_0;
        } else if (VAR_8 > 0) {
            VAR_7 = VAR_8;
        }
    }
    return FUNC_0(VAR_3, VAR_4, VAR_7);
}
