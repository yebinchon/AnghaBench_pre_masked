
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,struct timespec*) ;
 scalar_t__ FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static uint64_t FUNC_4(void)
{
    {
        struct timeval VAR_1;

        if (FUNC_2(&VAR_1, ((void*)0)) == 0)
            return FUNC_0(VAR_1.tv_sec, VAR_1.tv_usec);
    }

    return FUNC_3(((void*)0));
}
