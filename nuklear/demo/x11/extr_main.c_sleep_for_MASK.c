
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timespec {int tv_sec; long tv_nsec; } ;


 int FUNC_0 (struct timespec*,struct timespec*) ;

__attribute__((used)) static void
FUNC_1(long VAR_0)
{
    struct timespec VAR_1;
    const time_t VAR_2 = (int)(VAR_0/1000);
    const long VAR_3 = VAR_0 - (VAR_2 * 1000);
    VAR_1.tv_sec = VAR_2;
    VAR_1.tv_nsec = VAR_3 * 1000000L;
    while(-1 == FUNC_0(&VAR_1, &VAR_1));
}
