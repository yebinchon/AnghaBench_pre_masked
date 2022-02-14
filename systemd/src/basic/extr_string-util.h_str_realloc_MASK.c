
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static inline char* FUNC_2(char **VAR_0) {


        if (!*VAR_0)
                return ((void*)0);

        char *VAR_1 = FUNC_0(*VAR_0, FUNC_1(*VAR_0) + 1);
        if (!VAR_1)
                return ((void*)0);

        return (*VAR_0 = VAR_1);
}
