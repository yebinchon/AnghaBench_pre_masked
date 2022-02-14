
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_UINT32 ;
typedef int HPDF_UINT ;


 int VAR_0 ;

char*
FUNC_0 (char *VAR_1,
             HPDF_UINT32 VAR_2,
             HPDF_UINT VAR_3)
{
    char* VAR_4;
    char* VAR_5;

    if (VAR_2 > VAR_0)
        VAR_2 = VAR_0;

    VAR_5 = VAR_1 + VAR_3 - 1;
    *VAR_5 = 0;
    VAR_4 = VAR_5 - 1;
    while (VAR_2 > 0 && VAR_4 >= VAR_1) {
        *VAR_4 = (char)((char)(VAR_2 % 10) + '0');
        VAR_2 /= 10;
        VAR_4--;
    }

    while (VAR_1 <= VAR_4)
        *VAR_4-- = '0';

    return VAR_1 + VAR_3 - 1;
}
