
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 size_t FUNC_2 (char const*) ;

char* FUNC_3(const char *VAR_0, const char *VAR_1) {
        size_t VAR_2, VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_2 = FUNC_2(VAR_0);
        VAR_3 = FUNC_2(VAR_1);

        if (VAR_3 == 0)
                return (char*) VAR_0 + VAR_2;

        if (VAR_2 < VAR_3)
                return ((void*)0);

        if (FUNC_1(VAR_0 + VAR_2 - VAR_3, VAR_1) != 0)
                return ((void*)0);

        return (char*) VAR_0 + VAR_2 - VAR_3;
}
