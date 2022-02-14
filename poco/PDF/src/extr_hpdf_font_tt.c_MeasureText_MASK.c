
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t HPDF_UINT ;
typedef int HPDF_REAL ;
typedef int HPDF_Font ;
typedef int HPDF_DOUBLE ;
typedef int HPDF_BYTE ;
typedef int HPDF_BOOL ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static HPDF_UINT
FUNC_3 (HPDF_Font VAR_0,
             const HPDF_BYTE *VAR_1,
             HPDF_UINT VAR_2,
             HPDF_REAL VAR_3,
             HPDF_REAL VAR_4,
             HPDF_REAL VAR_5,
             HPDF_REAL VAR_6,
             HPDF_BOOL VAR_7,
             HPDF_REAL *VAR_8)
{
    HPDF_DOUBLE VAR_9 = 0;
    HPDF_UINT VAR_10 = 0;
    HPDF_UINT VAR_11;

    FUNC_2 ((" HPDF_TTFont_MeasureText\n"));

    for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
        HPDF_BYTE VAR_12 = VAR_1[VAR_11];

        if (FUNC_1(VAR_12)) {
            VAR_10 = VAR_11 + 1;

            if (VAR_8)
                *VAR_8 = (HPDF_REAL)VAR_9;

            VAR_9 += VAR_6;
        } else if (!VAR_7) {
            VAR_10 = VAR_11;

            if (VAR_8)
                *VAR_8 = (HPDF_REAL)VAR_9;
        }

        VAR_9 += (HPDF_DOUBLE)FUNC_0 (VAR_0, VAR_12) * VAR_4 / 1000;


        if (VAR_9 > VAR_3 || VAR_12 == 0x0A)
            return VAR_10;

        if (VAR_11 > 0)
            VAR_9 += VAR_5;
    }


    if (VAR_8)
        *VAR_8 = (HPDF_REAL)VAR_9;
    return VAR_2;
}
