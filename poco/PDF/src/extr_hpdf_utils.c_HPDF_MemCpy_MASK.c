
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HPDF_UINT ;
typedef int HPDF_BYTE ;



HPDF_BYTE*
FUNC_0 (HPDF_BYTE* VAR_0,
              const HPDF_BYTE *VAR_1,
              HPDF_UINT VAR_2)
{
    while (VAR_2 > 0) {
        *VAR_0++ = *VAR_1++;
        VAR_2--;
    }

    return VAR_0;
}
