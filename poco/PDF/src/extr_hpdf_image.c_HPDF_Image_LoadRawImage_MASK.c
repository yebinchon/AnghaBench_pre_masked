
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int size; } ;
struct TYPE_12__ {int obj_class; } ;
struct TYPE_14__ {int error; TYPE_5__* stream; TYPE_1__ header; } ;
struct TYPE_13__ {int error; } ;
typedef int HPDF_Xref ;
typedef int HPDF_UINT ;
typedef int HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_MMgr ;
typedef TYPE_3__* HPDF_Image ;
typedef TYPE_3__* HPDF_Dict ;
typedef scalar_t__ HPDF_ColorSpace ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,char*,char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,TYPE_5__*,int ,int *) ;

HPDF_Image
FUNC_6 (HPDF_MMgr VAR_10,
                         HPDF_Stream VAR_11,
                         HPDF_Xref VAR_12,
                         HPDF_UINT VAR_13,
                         HPDF_UINT VAR_14,
                         HPDF_ColorSpace VAR_15)
{
    HPDF_Dict VAR_16;
    HPDF_STATUS VAR_17 = VAR_8;
    HPDF_UINT VAR_18;

    FUNC_3 ((" HPDF_Image_LoadRawImage\n"));

    if (VAR_15 != VAR_4 &&
            VAR_15 != VAR_5 &&
            VAR_15 != VAR_3) {
        FUNC_4 (VAR_10->error, VAR_6, 0);
        return ((void*)0);
    }

    VAR_16 = FUNC_0 (VAR_10, VAR_12);
    if (!VAR_16)
        return ((void*)0);

    VAR_16->header.obj_class |= VAR_9;
    VAR_17 += FUNC_1 (VAR_16, "Type", "XObject");
    VAR_17 += FUNC_1 (VAR_16, "Subtype", "Image");
    if (VAR_17 != VAR_8)
        return ((void*)0);

    if (VAR_15 == VAR_4) {
        VAR_18 = VAR_13 * VAR_14;
        VAR_17 = FUNC_1 (VAR_16, "ColorSpace", VAR_1);
 } else if (VAR_15 == VAR_3) {
  VAR_18 = VAR_13 * VAR_14 * 4;
  VAR_17 = FUNC_1 (VAR_16, "ColorSpace", VAR_0);
    } else {
        VAR_18 = VAR_13 * VAR_14 * 3;
        VAR_17 = FUNC_1 (VAR_16, "ColorSpace", VAR_2);
    }

    if (VAR_17 != VAR_8)
        return ((void*)0);

    if (FUNC_2 (VAR_16, "Width", VAR_13) != VAR_8)
        return ((void*)0);

    if (FUNC_2 (VAR_16, "Height", VAR_14) != VAR_8)
        return ((void*)0);

    if (FUNC_2 (VAR_16, "BitsPerComponent", 8) != VAR_8)
        return ((void*)0);

    if (FUNC_5 (VAR_11, VAR_16->stream, 0, ((void*)0)) != VAR_8)
        return ((void*)0);

    if (VAR_16->stream->size != VAR_18) {
        FUNC_4 (VAR_16->error, VAR_7, 0);
        return ((void*)0);
    }

    return VAR_16;
}
