
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timespec {int tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct timespec*) ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;

uint64_t
FUNC_2(void)
{
    int VAR_3;
    struct timespec VAR_4;







    VAR_3 = FUNC_0(VAR_0, &VAR_4);

    if (VAR_3 != 0) {
        FUNC_1("clock_gettime() err %d\n", VAR_2);
    }

    return VAR_4.tv_sec * 1000000 + VAR_4.tv_nsec/1000;
}
