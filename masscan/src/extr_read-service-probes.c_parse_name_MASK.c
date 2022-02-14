
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char*,char const*,size_t) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_0, size_t *VAR_1, size_t VAR_2)
{
    size_t VAR_3 = *VAR_1;
    size_t VAR_4;
    char *VAR_5;


    while (*VAR_1 < VAR_2 && !FUNC_1(VAR_0[*VAR_1]))
        (*VAR_1)++;
    VAR_4 = *VAR_1 - VAR_3;
    if (VAR_4 == 0)
        return 0;


    while (*VAR_1 < VAR_2 && FUNC_1(VAR_0[*VAR_1]))
        (*VAR_1)++;


    VAR_5 = FUNC_0(VAR_4+1);
    FUNC_2(VAR_5, VAR_0 + VAR_3, VAR_4+1);
    VAR_5[VAR_4] = '\0';

    return VAR_5;
}
