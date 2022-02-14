
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t HPDF_UINT ;
typedef int HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef scalar_t__ HPDF_INT ;
typedef int HPDF_BYTE ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int*,size_t) ;
 int VAR_1 ;

HPDF_STATUS
FUNC_3 (HPDF_Stream VAR_2,
                               const char *VAR_3,
                               HPDF_UINT VAR_4)
{
    char VAR_5[VAR_1];
    HPDF_UINT VAR_6 = 0;
    HPDF_INT VAR_7;
    const char* VAR_8 = VAR_3;
    HPDF_STATUS VAR_9;

    FUNC_1((" HPDF_Stream_WriteEscapeText2\n"));
    VAR_5[VAR_6++] = '(';

    for (VAR_7 = 0; VAR_7 < (HPDF_INT)VAR_4; VAR_7++) {
        HPDF_BYTE VAR_10 = (HPDF_BYTE)*VAR_8++;
        if (FUNC_0(VAR_10)) {
            VAR_5[VAR_6++] = '\\';

            VAR_5[VAR_6] = (char)(VAR_10 >> 6);
            VAR_5[VAR_6] += 0x30;
            VAR_6++;
            VAR_5[VAR_6] = (char)((VAR_10 & 0x38) >> 3);
            VAR_5[VAR_6] += 0x30;
            VAR_6++;
            VAR_5[VAR_6] = (char)(VAR_10 & 0x07);
            VAR_5[VAR_6] += 0x30;
            VAR_6++;
        }
        else
            VAR_5[VAR_6++] = VAR_10;

        if (VAR_6 > VAR_1 - 4) {
            VAR_9 = FUNC_2 (VAR_2, (HPDF_BYTE *)VAR_5, VAR_6);
            if (VAR_9 != VAR_0)
                return VAR_9;
            VAR_6 = 0;
        }
    }
    VAR_5[VAR_6++] = ')';

    VAR_9 = FUNC_2 (VAR_2, (HPDF_BYTE *)VAR_5, VAR_6);

    return VAR_9;
}
