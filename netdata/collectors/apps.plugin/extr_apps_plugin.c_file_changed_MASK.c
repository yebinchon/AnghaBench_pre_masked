
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_2__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct stat {TYPE_1__ st_mtim; } ;


 scalar_t__ FUNC_0 (int) ;

int FUNC_1(const struct stat *VAR_0, struct timespec *VAR_1) {
    if(FUNC_0(VAR_0->st_mtim.tv_sec == VAR_1->tv_sec &&
       VAR_0->st_mtim.tv_nsec == VAR_1->tv_nsec)) return 0;

    VAR_1->tv_sec = VAR_0->st_mtim.tv_sec;
    VAR_1->tv_nsec = VAR_0->st_mtim.tv_nsec;

    return 1;
}
