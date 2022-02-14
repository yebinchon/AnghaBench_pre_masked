
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int mmgr; int error; } ;
struct TYPE_9__ {int error; } ;
typedef int HPDF_UINT16 ;
typedef int HPDF_UINT ;
typedef TYPE_1__* HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_Image ;
typedef int HPDF_BYTE ;
typedef int HPDF_Array ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,char*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int*,int*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int,int ) ;
 int FUNC_11 (int*) ;
 int VAR_6 ;

__attribute__((used)) static HPDF_STATUS
FUNC_12 (HPDF_Image VAR_7,
                HPDF_Stream VAR_8)
{
    HPDF_UINT16 VAR_9;
    HPDF_UINT16 VAR_10;
    HPDF_UINT16 VAR_11;
    HPDF_BYTE VAR_12;
    HPDF_BYTE VAR_13;
    const char *VAR_14;
    HPDF_UINT VAR_15;
    HPDF_STATUS VAR_16;
    HPDF_Array VAR_17;

    FUNC_7 ((" HPDF_Image_LoadJpegHeader\n"));

    VAR_15 = 2;
    if (FUNC_9 (VAR_8, (HPDF_BYTE *)&VAR_9, &VAR_15) != VAR_4)
        return FUNC_4 (VAR_8->error);

    FUNC_11 (&VAR_9);
    if (VAR_9 != 0xFFD8)
        return VAR_3;


    for (;;) {
        HPDF_UINT16 VAR_18;

        VAR_15 = 2;
        if (FUNC_9 (VAR_8, (HPDF_BYTE *)&VAR_9, &VAR_15) != VAR_4)
            return FUNC_4 (VAR_8->error);

        FUNC_11 (&VAR_9);

        VAR_15 = 2;
        if (FUNC_9 (VAR_8, (HPDF_BYTE *)&VAR_18, &VAR_15) != VAR_4)
            return FUNC_4 (VAR_8->error);

        FUNC_11 (&VAR_18);

        FUNC_7 (("tag=%04X size=%u\n", VAR_9, VAR_18));

        if (VAR_9 == 0xFFC0 || VAR_9 == 0xFFC1 ||
                VAR_9 == 0xFFC2 || VAR_9 == 0xFFC9) {

            VAR_15 = 1;
            if (FUNC_9 (VAR_8, (HPDF_BYTE *)&VAR_12, &VAR_15) !=
                    VAR_4)
                return FUNC_4 (VAR_8->error);

            VAR_15 = 2;
            if (FUNC_9 (VAR_8, (HPDF_BYTE *)&VAR_10, &VAR_15) !=
                    VAR_4)
                return FUNC_4 (VAR_8->error);

            FUNC_11 (&VAR_10);

            VAR_15 = 2;
            if (FUNC_9 (VAR_8, (HPDF_BYTE *)&VAR_11, &VAR_15) != VAR_4)
                return FUNC_4 (VAR_8->error);

             FUNC_11 (&VAR_11);

           VAR_15 = 1;
            if (FUNC_9 (VAR_8, (HPDF_BYTE *)&VAR_13, &VAR_15) !=
                    VAR_4)
                return FUNC_4 (VAR_8->error);

            break;
        } else if ((VAR_9 | 0x00FF) != 0xFFFF)

            return FUNC_8 (VAR_7->error, VAR_6,
                    0);

        if (FUNC_10 (VAR_8, VAR_18 - 2, VAR_5) != VAR_4)
                return FUNC_4 (VAR_8->error);
    }

    if (FUNC_3 (VAR_7, "Height", VAR_10) != VAR_4)
        return FUNC_4 (VAR_8->error);

    if (FUNC_3 (VAR_7, "Width", VAR_11) != VAR_4)
        return FUNC_4 (VAR_8->error);







    switch (VAR_13) {
        case 1:
            VAR_14 = VAR_1;
            break;
        case 3:
            VAR_14 = VAR_2;
            break;
        case 4:
            VAR_17 = FUNC_1 (VAR_7->mmgr);
            if (!VAR_17)
                return FUNC_4 (VAR_8->error);

            VAR_16 = FUNC_2 (VAR_7, "Decode", VAR_17);
            if (VAR_16 != VAR_4)
                return FUNC_4 (VAR_8->error);

            VAR_16 += FUNC_0 (VAR_17, FUNC_6 (VAR_7->mmgr, 1));
            VAR_16 += FUNC_0 (VAR_17, FUNC_6 (VAR_7->mmgr, 0));
            VAR_16 += FUNC_0 (VAR_17, FUNC_6 (VAR_7->mmgr, 1));
            VAR_16 += FUNC_0 (VAR_17, FUNC_6 (VAR_7->mmgr, 0));
            VAR_16 += FUNC_0 (VAR_17, FUNC_6 (VAR_7->mmgr, 1));
            VAR_16 += FUNC_0 (VAR_17, FUNC_6 (VAR_7->mmgr, 0));
            VAR_16 += FUNC_0 (VAR_17, FUNC_6 (VAR_7->mmgr, 1));
            VAR_16 += FUNC_0 (VAR_17, FUNC_6 (VAR_7->mmgr, 0));

            if (VAR_16 != VAR_4)
                return FUNC_4 (VAR_8->error);

            VAR_14 = VAR_0;

            break;
        default:
            return FUNC_8 (VAR_7->error, VAR_6,
                    0);
    }

    if (FUNC_2 (VAR_7, "ColorSpace",
                FUNC_5 (VAR_7->mmgr, VAR_14)) != VAR_4)
        return FUNC_4 (VAR_8->error);

    if (FUNC_2 (VAR_7, "BitsPerComponent",
                FUNC_6 (VAR_7->mmgr, VAR_12)) != VAR_4)
        return FUNC_4 (VAR_8->error);

    return VAR_4;
}
