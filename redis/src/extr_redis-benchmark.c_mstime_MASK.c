
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;


 int FUNC_0 (struct timeval*,int *) ;

__attribute__((used)) static long long FUNC_1(void) {
    struct timeval VAR_0;
    long long VAR_1;

    FUNC_0(&VAR_0, ((void*)0));
    VAR_1 = ((long long)VAR_0.tv_sec)*1000;
    VAR_1 += VAR_0.tv_usec/1000;
    return VAR_1;
}
