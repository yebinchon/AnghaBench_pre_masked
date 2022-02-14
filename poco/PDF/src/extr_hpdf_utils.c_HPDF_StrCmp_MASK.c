
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_INT ;
typedef int HPDF_BYTE ;



HPDF_INT
FUNC_0 (const char *VAR_0,
              const char *VAR_1)
{
    if (!VAR_0 || !VAR_1) {
        if (!VAR_0 && VAR_1)
            return -1;
        else
            return 1;
    }

    while (*VAR_0 == *VAR_1) {
        VAR_0++;
        VAR_1++;
        if (*VAR_0 == 0 || *VAR_1 == 0)
            break;
    }

    return (HPDF_BYTE)*VAR_0 - (HPDF_BYTE)*VAR_1;
}
