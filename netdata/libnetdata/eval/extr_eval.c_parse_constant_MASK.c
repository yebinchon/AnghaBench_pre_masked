
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int calculated_number ;


 int FUNC_0 (char const*,char**) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(const char **VAR_0, calculated_number *VAR_1) {
    char *VAR_2 = ((void*)0);
    calculated_number VAR_3 = FUNC_0(*VAR_0, &VAR_2);
    if(FUNC_1(!VAR_2 || *VAR_0 == VAR_2)) {
        *VAR_1 = 0;
        return 0;
    }
    *VAR_1 = VAR_3;
    *VAR_0 = VAR_2;
    return 1;
}
