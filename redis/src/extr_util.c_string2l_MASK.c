
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long long VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (char const*,size_t,long long*) ;

int FUNC_1(const char *VAR_2, size_t VAR_3, long *VAR_4) {
    long long VAR_5;

    if (!FUNC_0(VAR_2,VAR_3,&VAR_5))
        return 0;

    if (VAR_5 < VAR_1 || VAR_5 > VAR_0)
        return 0;

    *VAR_4 = (long)VAR_5;
    return 1;
}
