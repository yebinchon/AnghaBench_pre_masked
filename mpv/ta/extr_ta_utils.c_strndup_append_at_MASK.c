
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*,size_t) ;
 int FUNC_3 (char*) ;
 size_t FUNC_4 (char*) ;
 char* FUNC_5 (int *,char*,size_t) ;

__attribute__((used)) static bool FUNC_6(char **VAR_0, size_t VAR_1, const char *VAR_2,
                              size_t VAR_3)
{
    FUNC_0(FUNC_4(*VAR_0) >= VAR_1);

    if (!*VAR_0 && !VAR_2)
        return 1;

    size_t VAR_4 = VAR_2 ? FUNC_2(VAR_2, VAR_3) : 0;
    if (VAR_3 > VAR_4)
        VAR_3 = VAR_4;

    if (FUNC_4(*VAR_0) < VAR_1 + VAR_3 + 1) {
        char *VAR_5 = FUNC_5(((void*)0), *VAR_0, VAR_1 + VAR_3 + 1);
        if (!VAR_5)
            return 0;
        *VAR_0 = VAR_5;
    }

    if (VAR_3)
        FUNC_1(*VAR_0 + VAR_1, VAR_2, VAR_3);

    (*VAR_0)[VAR_1 + VAR_3] = '\0';

    FUNC_3(*VAR_0);

    return 1;
}
