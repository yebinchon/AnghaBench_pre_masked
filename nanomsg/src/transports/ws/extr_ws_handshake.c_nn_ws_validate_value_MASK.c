
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static int FUNC_2 (const char* VAR_2, const char *VAR_3,
    size_t VAR_4, int VAR_5)
{
    if (FUNC_0 (VAR_2) != VAR_4)
        return VAR_1;

    if (VAR_5) {
        while (*VAR_2 && *VAR_3) {
            if (FUNC_1 (*VAR_2) != FUNC_1 (*VAR_3))
                return VAR_1;
            VAR_2++;
            VAR_3++;
        }
    }
    else {
        while (*VAR_2 && *VAR_3) {
            if (*VAR_2 != *VAR_3)
                return VAR_1;
            VAR_2++;
            VAR_3++;
        }
    }

    return VAR_0;
}
