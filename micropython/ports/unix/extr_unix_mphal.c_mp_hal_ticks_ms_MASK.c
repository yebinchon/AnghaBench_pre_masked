
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct timespec {int tv_sec; int tv_nsec; } ;
typedef int mp_uint_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (struct timeval*,int *) ;

mp_uint_t FUNC_2(void) {





    struct timeval VAR_1;
    FUNC_1(&VAR_1, ((void*)0));
    return VAR_1.tv_sec * 1000 + VAR_1.tv_usec / 1000;

}
