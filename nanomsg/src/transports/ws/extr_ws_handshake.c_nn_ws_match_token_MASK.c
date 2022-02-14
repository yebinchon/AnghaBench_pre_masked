
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static int FUNC_2 (const char* VAR_2, const char **VAR_3,
    int VAR_4, int VAR_5)
{
    const char *VAR_6;

    FUNC_0 (VAR_2 && *VAR_3);

    VAR_6 = *VAR_3;

    if (VAR_5) {
        while (*VAR_6 == '\x20' && *VAR_6) {
            VAR_6++;
        }
    }

    if (VAR_4) {
        while (*VAR_2 && *VAR_6) {
            if (FUNC_1 (*VAR_2) != FUNC_1 (*VAR_6))
                return VAR_1;
            VAR_2++;
            VAR_6++;
        }
    }
    else {
        while (*VAR_2 && *VAR_6) {
            if (*VAR_2 != *VAR_6)
                return VAR_1;
            VAR_2++;
            VAR_6++;
        }
    }


    if (!*VAR_6 && *VAR_2)
        return VAR_1;


    FUNC_0 (!*VAR_2);


    *VAR_3 = VAR_6;

    return VAR_0;
}
