
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ,long long*) ;
 int FUNC_1 (char const*) ;
 unsigned long long FUNC_2 (char const*,char**,int) ;

int FUNC_3(const char *VAR_3, unsigned long long *VAR_4) {
    long long VAR_5;
    if (FUNC_0(VAR_3,FUNC_1(VAR_3),&VAR_5)) {
        if (VAR_5 < 0) return 0;
        *VAR_4 = VAR_5;
        return 1;
    }
    VAR_2 = 0;
    char *VAR_6 = ((void*)0);
    *VAR_4 = FUNC_2(VAR_3,&VAR_6,10);
    if (VAR_2 == VAR_0 || VAR_2 == VAR_1 || !(*VAR_3 != '\0' && *VAR_6 == '\0'))
        return 0;
    return 1;
}
