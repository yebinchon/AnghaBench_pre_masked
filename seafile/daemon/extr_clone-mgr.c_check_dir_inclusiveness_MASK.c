
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4 (const char *VAR_0, const char *VAR_1)
{
    char *VAR_2, *VAR_3;
    char *VAR_4, *VAR_5;
    int VAR_6 = 0;

    VAR_2 = FUNC_1(VAR_0);
    VAR_3 = FUNC_1(VAR_1);
    FUNC_3 (VAR_2);
    FUNC_3 (VAR_3);

    VAR_4 = VAR_2;
    VAR_5 = VAR_3;
    while (*VAR_4 != 0 && *VAR_5 != 0) {

        while (FUNC_2(*VAR_4) && FUNC_2(VAR_4[1]))
            ++VAR_4;
        while (FUNC_2(*VAR_5) && FUNC_2(VAR_5[1]))
            ++VAR_5;

        if (!(FUNC_2(*VAR_4) && FUNC_2(*VAR_5)) && *VAR_4 != *VAR_5)
            goto out;

        ++VAR_4;
        ++VAR_5;
    }







    if (*VAR_4 == 0 && *VAR_5 == 0)
        VAR_6 = -1;
    else if (*VAR_4 != 0 && FUNC_2(*VAR_4))
        VAR_6 = 1;
    else if (*VAR_5 != 0 && FUNC_2(*VAR_5))
        VAR_6 = -1;

out:
    FUNC_0 (VAR_2);
    FUNC_0 (VAR_3);
    return VAR_6;
}
