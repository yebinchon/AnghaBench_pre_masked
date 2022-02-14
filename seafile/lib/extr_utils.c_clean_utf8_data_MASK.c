
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gboolean ;


 scalar_t__ FUNC_0 (char const*,int,char const**) ;

void
FUNC_1 (char *VAR_0, int VAR_1)
{
    const char *VAR_2, *VAR_3;
    char *VAR_4;
    gboolean VAR_5;

    VAR_2 = VAR_0;
    VAR_4 = VAR_0;

    while ((VAR_2 - VAR_0) != VAR_1) {
        VAR_5 = FUNC_0 (VAR_2, VAR_1 - (VAR_2 - VAR_0), &VAR_3);
        if (VAR_5)
            break;

        if (VAR_2 != VAR_3)
            VAR_4 += (VAR_3 - VAR_2);
        *VAR_4 = '?';
        ++VAR_4;
        VAR_2 = VAR_3 + 1;
    }
}
