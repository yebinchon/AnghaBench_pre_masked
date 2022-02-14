
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int robj ;


 unsigned long FUNC_0 (int *) ;

int FUNC_1(const void *VAR_0, const void *VAR_1) {
    robj *VAR_2 = *(robj**)VAR_0, *VAR_3 = *(robj**)VAR_1;
    unsigned long VAR_4 = VAR_2 ? FUNC_0(VAR_2) : 0;
    unsigned long VAR_5 = VAR_3 ? FUNC_0(VAR_3) : 0;

    if (VAR_4 < VAR_5) return 1;
    if (VAR_4 > VAR_5) return -1;
    return 0;
}
