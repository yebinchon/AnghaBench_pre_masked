
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_BYTE ;



HPDF_BYTE*
FUNC_0 (char *VAR_0,
              const char *VAR_1,
              char *VAR_2)
{
    if (VAR_1 != ((void*)0)) {
        while (VAR_2 > VAR_0 && *VAR_1 != 0)
            *VAR_0++ = *VAR_1++;
    }

    *VAR_0 = 0;

    return (HPDF_BYTE *)VAR_0;
}
