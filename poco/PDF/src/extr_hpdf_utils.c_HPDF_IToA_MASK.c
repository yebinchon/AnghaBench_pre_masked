
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

char*
FUNC_0 (char *VAR_3,
            HPDF_INT32 VAR_4,
            char *VAR_5)
{
    char* VAR_6;
    char VAR_7[VAR_0 + 1];

    if (VAR_4 < 0) {
        if (VAR_4 < VAR_2)
            VAR_4 = VAR_2;
        *VAR_3++ = '-';
        VAR_4 = -VAR_4;
    } else if (VAR_4 > VAR_1) {
        VAR_4 = VAR_1;
    } else if (VAR_4 == 0) {
        *VAR_3++ = '0';
    }

    VAR_6 = VAR_7 + VAR_0;
    *VAR_6-- = 0;

    while (VAR_4 > 0) {
        *VAR_6 = (char)((char)(VAR_4 % 10) + '0');
        VAR_4 /= 10;
        VAR_6--;
    }

    VAR_6++;
    while (VAR_3 < VAR_5 && *VAR_6 != 0)
      *VAR_3++ = *VAR_6++;
    *VAR_3 = 0;

    return VAR_3;
}
