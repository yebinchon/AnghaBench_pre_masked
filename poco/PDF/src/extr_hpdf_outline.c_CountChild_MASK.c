
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HPDF_UINT ;
typedef scalar_t__ HPDF_Outline ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static HPDF_UINT
FUNC_4 (HPDF_Outline VAR_0)
{
    HPDF_Outline VAR_1 = FUNC_0 (VAR_0);
    HPDF_UINT VAR_2 = 0;

    FUNC_3((" CountChild\n"));

    while (VAR_1) {
        VAR_2++;

        if (FUNC_2 (VAR_1))
            VAR_2 += FUNC_4 (VAR_1);

        VAR_1 = FUNC_1 (VAR_1);
    }

    return VAR_2;
}
