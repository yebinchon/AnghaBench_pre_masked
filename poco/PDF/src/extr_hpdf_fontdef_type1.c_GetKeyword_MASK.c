
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HPDF_UINT ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,int) ;

__attribute__((used)) static const char*
FUNC_3 (const char *VAR_0,
             char *VAR_1,
             HPDF_UINT VAR_2)
{
    HPDF_UINT VAR_3 = FUNC_2 (VAR_0, -1);

    FUNC_1 ((" GetKeyword\n"));

    if (!VAR_1 || VAR_3 == 0 || VAR_2 == 0)
        return ((void*)0);

    *VAR_1 = 0;

    while (VAR_2 > 1) {
        if (FUNC_0(*VAR_0)) {
            *VAR_1 = 0;

            while (FUNC_0(*VAR_0))
                VAR_0++;
            return VAR_0;
        }

        *VAR_1++ = *VAR_0++;
        VAR_2--;
    }

    *VAR_1 = 0;
    return ((void*)0);
}
