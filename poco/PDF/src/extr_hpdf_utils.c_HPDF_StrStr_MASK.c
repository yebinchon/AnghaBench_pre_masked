
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HPDF_UINT ;
typedef int HPDF_BYTE ;


 scalar_t__ FUNC_0 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int) ;

const char*
FUNC_2 (const char *VAR_0,
              const char *VAR_1,
              HPDF_UINT VAR_2)
{
    HPDF_UINT VAR_3 = FUNC_1 (VAR_1, -1);

    if (!VAR_0)
        return ((void*)0);

    if (VAR_3 == 0)
        return VAR_0;

    if (VAR_2 == 0)
        VAR_2 = FUNC_1 (VAR_0, -1);

    if (VAR_2 < VAR_3)
        return ((void*)0);

    VAR_2 -= VAR_3;
    VAR_2++;

    while (VAR_2 > 0) {
        if (FUNC_0 ((HPDF_BYTE *)VAR_0, (HPDF_BYTE *)VAR_1, VAR_3) == 0)
            return VAR_0;

        VAR_0++;
        VAR_2--;
    }

    return ((void*)0);
}
