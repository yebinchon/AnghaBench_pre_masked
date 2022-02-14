
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_INT ;
typedef scalar_t__ HPDF_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ VAR_1 ;

HPDF_INT
FUNC_1 (const char *VAR_2)
{
    HPDF_BOOL VAR_3 = VAR_0;
    HPDF_INT VAR_4 = 0;

    if (!VAR_2) {
        return 0;
    }




    while (*VAR_2) {
        if (FUNC_0(*VAR_2))
            VAR_2++;
        else {
            if (*VAR_2 == '-') {
                VAR_3 = VAR_1;
                VAR_2++;
            }
            break;
        }
    }

    while (*VAR_2 >= '0' && *VAR_2 <= '9') {
        VAR_4 *= 10;
        VAR_4 += *VAR_2 - '0';
        VAR_2++;
    }

    if (VAR_3)
        VAR_4 *= -1;

    return VAR_4;
}
