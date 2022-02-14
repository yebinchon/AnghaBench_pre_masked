
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_UINT ;
typedef scalar_t__ HPDF_INT ;



HPDF_UINT
FUNC_0 (const char *VAR_0,
              HPDF_INT VAR_1)
{
    HPDF_INT VAR_2 = 0;

    if (!VAR_0)
        return 0;

    while (*VAR_0 != 0 && (VAR_1 < 0 || VAR_2 < VAR_1)) {
        VAR_0++;
        VAR_2++;
    }

    return (HPDF_UINT)VAR_2;
}
