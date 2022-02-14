
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mmgr; } ;
typedef int HPDF_UINT ;
typedef TYPE_1__* HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef scalar_t__ HPDF_Encrypt ;
typedef int HPDF_BYTE ;
typedef scalar_t__ HPDF_BOOL ;


 int FUNC_0 (scalar_t__,int const*,int*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int*,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

HPDF_STATUS
FUNC_5 (HPDF_Stream VAR_4,
                          const HPDF_BYTE *VAR_5,
                          HPDF_UINT VAR_6,
                          HPDF_Encrypt VAR_7)
{
    char VAR_8[VAR_2];
    HPDF_BYTE VAR_9[VAR_2];
    HPDF_BYTE *VAR_10 = ((void*)0);
    HPDF_BOOL VAR_11 = VAR_0;
    HPDF_UINT VAR_12 = 0;
    HPDF_UINT VAR_13;
    const HPDF_BYTE* VAR_14;
    HPDF_STATUS VAR_15 = VAR_1;

    FUNC_3((" HPDF_Stream_WriteBinary\n"));

    if (VAR_7) {
        if (VAR_6 <= VAR_2)
            VAR_10 = VAR_9;
        else {
            VAR_10 = (HPDF_BYTE *)FUNC_2 (VAR_4->mmgr, VAR_6);
            VAR_11 = VAR_3;
        }

        FUNC_0 (VAR_7, VAR_5, VAR_10, VAR_6);
        VAR_14 = VAR_10;
    } else {
        VAR_14 = VAR_5;
    }

    for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++, VAR_14++) {
        char VAR_16 = (char)(*VAR_14 >> 4);

        if (VAR_16 <= 9)
            VAR_16 += 0x30;
        else
            VAR_16 += 0x41 - 10;
        VAR_8[VAR_12++] = VAR_16;

        VAR_16 = (char)(*VAR_14 & 0x0f);
        if (VAR_16 <= 9)
            VAR_16 += 0x30;
        else
            VAR_16 += 0x41 - 10;
        VAR_8[VAR_12++] = VAR_16;

        if (VAR_12 > VAR_2 - 2) {
            VAR_15 = FUNC_4 (VAR_4, (HPDF_BYTE *)VAR_8, VAR_12);
            if (VAR_15 != VAR_1) {
                if (VAR_11)
                    FUNC_1 (VAR_4->mmgr, VAR_10);
                return VAR_15;
            }
            VAR_12 = 0;
        }
    }

    if (VAR_12 > 0) {
        VAR_15 = FUNC_4 (VAR_4, (HPDF_BYTE *)VAR_8, VAR_12);
    }

    if (VAR_11)
        FUNC_1 (VAR_4->mmgr, VAR_10);

    return VAR_15;
}
