
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long int64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 long long FUNC_1 (char const*,char**,int) ;
 scalar_t__ FUNC_2 (char) ;

bool FUNC_3(const char *VAR_2, int64_t *VAR_3) {
    FUNC_0(VAR_3 != ((void*)0));
    VAR_1 = 0;
    *VAR_3 = 0;
    char *VAR_4;
    long long VAR_5 = FUNC_1(VAR_2, &VAR_4, 10);
    if ((VAR_1 == VAR_0) || (VAR_2 == VAR_4)) {
        return 0;
    }

    if (FUNC_2(*VAR_4) || (*VAR_4 == '\0' && VAR_4 != VAR_2)) {
        *VAR_3 = VAR_5;
        return 1;
    }
    return 0;
}
