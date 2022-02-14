
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (char const*,char) ;
 unsigned long long FUNC_2 (char const*,char**,int) ;
 scalar_t__ FUNC_3 (char) ;

bool FUNC_4(const char *VAR_2, uint64_t *VAR_3) {
    FUNC_0(VAR_3 != ((void*)0));
    VAR_1 = 0;
    *VAR_3 = 0;
    char *VAR_4;
    unsigned long long VAR_5 = FUNC_2(VAR_2, &VAR_4, 10);
    if ((VAR_1 == VAR_0) || (VAR_2 == VAR_4)) {
        return 0;
    }

    if (FUNC_3(*VAR_4) || (*VAR_4 == '\0' && VAR_4 != VAR_2)) {
        if ((long long) VAR_5 < 0) {



            if (FUNC_1(VAR_2, '-') != ((void*)0)) {
                return 0;
            }
        }
        *VAR_3 = VAR_5;
        return 1;
    }
    return 0;
}
