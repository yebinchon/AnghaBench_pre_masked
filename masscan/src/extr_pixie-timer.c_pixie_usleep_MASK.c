
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int ts ;
struct timespec {int tv_sec; int tv_nsec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct timespec*,struct timespec*,int) ;
 int FUNC_1 (struct timespec*,struct timespec*) ;

void
FUNC_2(uint64_t VAR_2)
{
    struct timespec VAR_3;
    struct timespec VAR_4;
    int VAR_5;

    VAR_3.tv_sec = VAR_2/1000000;
    VAR_3.tv_nsec = (VAR_2%1000000) * 1000;

again:
    VAR_5 = FUNC_1(&VAR_3, &VAR_4);
    if (VAR_5 == -1 && VAR_1 == VAR_0) {
        FUNC_0(&VAR_3, &VAR_4, sizeof(VAR_3));
        goto again;
    }


}
