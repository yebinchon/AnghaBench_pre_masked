
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; unsigned long long tv_usec; } ;


 unsigned long long VAR_0 ;
 int FUNC_0 (struct timeval*,int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static unsigned long long FUNC_2() {
    struct timeval VAR_1;
    if(FUNC_1(FUNC_0(&VAR_1, ((void*)0)) == -1))
        return -1;
    return VAR_0 = VAR_1.tv_sec * 1000000 + VAR_1.tv_usec - VAR_0;
}
