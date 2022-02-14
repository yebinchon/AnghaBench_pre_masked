
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_UINT16 ;
typedef int HPDF_BYTE ;


 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static char*
FUNC_1 (char *VAR_0,
              HPDF_UINT16 VAR_1,
              char *VAR_2,
              HPDF_BYTE VAR_3)
{
    HPDF_BYTE VAR_4[2];
    HPDF_UINT16 VAR_5;
    char VAR_6;

    if (VAR_2 - VAR_0 < 7)
        return VAR_0;


    FUNC_0 (VAR_4, (HPDF_BYTE *)&VAR_1, 2);
    VAR_5 = (HPDF_UINT16)((HPDF_UINT16)VAR_4[0] << 8 | (HPDF_UINT16)VAR_4[1]);

    FUNC_0 (VAR_4, (HPDF_BYTE *)&VAR_5, 2);

    *VAR_0++ = '<';
    if (VAR_3 == 2) {
        VAR_6 = VAR_4[0] >> 4;
        if (VAR_6 <= 9)
            VAR_6 += 0x30;
        else
            VAR_6 += 0x41 - 10;
        *VAR_0++ = VAR_6;

        VAR_6 = (char)(VAR_4[0] & 0x0f);
        if (VAR_6 <= 9)
            VAR_6 += 0x30;
        else
            VAR_6 += 0x41 - 10;
        *VAR_0++ = VAR_6;
    }

    VAR_6 = (char)(VAR_4[1] >> 4);
    if (VAR_6 <= 9)
        VAR_6 += 0x30;
    else
        VAR_6 += 0x41 - 10;
    *VAR_0++ = VAR_6;

    VAR_6 = (char)(VAR_4[1] & 0x0f);
    if (VAR_6 <= 9)
        VAR_6 += 0x30;
    else
        VAR_6 += 0x41 - 10;
    *VAR_0++ = VAR_6;

    *VAR_0++ = '>';
    *VAR_0 = 0;

    return VAR_0;
}
