
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HPDF_UINT ;
typedef int HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef scalar_t__ HPDF_INT32 ;
typedef scalar_t__ HPDF_INT ;
typedef int HPDF_BYTE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,int) ;
 int FUNC_3 (int ,int*,scalar_t__) ;

HPDF_STATUS
FUNC_4 (HPDF_Stream VAR_1,
                              const char *VAR_2)
{
    char VAR_3[VAR_0 * 3 + 2];
    HPDF_UINT VAR_4;
    HPDF_INT VAR_5;
    const HPDF_BYTE* VAR_6;
    char* VAR_7;

    FUNC_1((" HPDF_Stream_WriteEscapeName\n"));

    VAR_4 = FUNC_2 (VAR_2, VAR_0);
    VAR_6 = (HPDF_BYTE*)VAR_2;
    VAR_7 = VAR_3;

    *VAR_7++ = '/';
    for (VAR_5 = 0; VAR_5 < (HPDF_INT32)VAR_4; VAR_5++) {
        HPDF_BYTE VAR_8 = *VAR_6++;
        if (FUNC_0(VAR_8)) {
            *VAR_7++ = '#';
            *VAR_7 = (char)(VAR_8 >> 4);
            if (*VAR_7 <= 9)
                *VAR_7 += 0x30;
            else
                *VAR_7 += 0x41 - 10;
            VAR_7++;

            *VAR_7 = (char)(VAR_8 & 0x0f);
            if (*VAR_7 <= 9)
                *VAR_7 += 0x30;
            else
                *VAR_7 += 0x41 - 10;
            VAR_7++;
        } else
            *VAR_7++ = VAR_8;
    }
    *VAR_7 = 0;

    return FUNC_3 (VAR_1, (HPDF_BYTE *)VAR_3, FUNC_2(VAR_3, -1));
}
