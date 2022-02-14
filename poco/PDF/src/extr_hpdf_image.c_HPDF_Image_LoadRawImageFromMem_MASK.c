
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int obj_class; } ;
struct TYPE_13__ {int stream; TYPE_1__ header; } ;
struct TYPE_12__ {int error; } ;
typedef int HPDF_Xref ;
typedef int HPDF_UINT ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_MMgr ;
typedef TYPE_3__* HPDF_Image ;
typedef TYPE_3__* HPDF_Dict ;
typedef int HPDF_DOUBLE ;
typedef int HPDF_ColorSpace ;
typedef int HPDF_BYTE ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;



 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,char*,char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int const*,int) ;

HPDF_Image
FUNC_6 (HPDF_MMgr VAR_7,
                                 const HPDF_BYTE *VAR_8,
                                 HPDF_Xref VAR_9,
                                 HPDF_UINT VAR_10,
                                 HPDF_UINT VAR_11,
                                 HPDF_ColorSpace VAR_12,
                                 HPDF_UINT VAR_13)
{
    HPDF_Dict VAR_14;
    HPDF_STATUS VAR_15 = VAR_5;
    HPDF_UINT VAR_16=0;

    FUNC_3 ((" HPDF_Image_LoadRawImageFromMem\n"));

    if (VAR_12 != 129 &&
            VAR_12 != 128 &&
            VAR_12 != 130) {
        FUNC_4 (VAR_7->error, VAR_3, 0);
        return ((void*)0);
    }

    if (VAR_13 != 1 && VAR_13 != 2 &&
            VAR_13 != 4 && VAR_13 != 8) {
        FUNC_4 (VAR_7->error, VAR_4, 0);
        return ((void*)0);
    }

    VAR_14 = FUNC_0 (VAR_7, VAR_9);
    if (!VAR_14)
        return ((void*)0);

    VAR_14->header.obj_class |= VAR_6;
    VAR_15 += FUNC_1 (VAR_14, "Type", "XObject");
    VAR_15 += FUNC_1 (VAR_14, "Subtype", "Image");
    if (VAR_15 != VAR_5)
        return ((void*)0);

    switch (VAR_12) {
        case 129:
            VAR_16 = (HPDF_UINT)((HPDF_DOUBLE)VAR_10 * VAR_11 / (8 / VAR_13) + 0.876);
            VAR_15 = FUNC_1 (VAR_14, "ColorSpace", VAR_1);
            break;
        case 128:
            VAR_16 = (HPDF_UINT)((HPDF_DOUBLE)VAR_10 * VAR_11 / (8 / VAR_13) + 0.876);
            VAR_16 *= 3;
            VAR_15 = FUNC_1 (VAR_14, "ColorSpace", VAR_2);
            break;
        case 130:
            VAR_16 = (HPDF_UINT)((HPDF_DOUBLE)VAR_10 * VAR_11 / (8 / VAR_13) + 0.876);
            VAR_16 *= 4;
            VAR_15 = FUNC_1 (VAR_14, "ColorSpace", VAR_0);
            break;
        default:;
    }

    if (VAR_15 != VAR_5)
        return ((void*)0);

    if (FUNC_2 (VAR_14, "Width", VAR_10) != VAR_5)
        return ((void*)0);

    if (FUNC_2 (VAR_14, "Height", VAR_11) != VAR_5)
        return ((void*)0);

    if (FUNC_2 (VAR_14, "BitsPerComponent", VAR_13)
            != VAR_5)
        return ((void*)0);

    if (FUNC_5 (VAR_14->stream, VAR_8, VAR_16) != VAR_5)
        return ((void*)0);

    return VAR_14;
}
