
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int robj ;


 scalar_t__ FUNC_0 (int *) ;

int FUNC_1(const void *VAR_0, const void *VAR_1) {
    if (FUNC_0(*(robj**)VAR_0) > FUNC_0(*(robj**)VAR_1)) return 1;
    if (FUNC_0(*(robj**)VAR_0) < FUNC_0(*(robj**)VAR_1)) return -1;
    return 0;
}
