
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int png_size_t ;
typedef int png_byte ;
struct TYPE_11__ {int obj_class; } ;
struct TYPE_13__ {TYPE_1__ header; } ;
struct TYPE_12__ {int error; } ;
typedef int HPDF_Xref ;
typedef int HPDF_UINT ;
typedef int HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_MMgr ;
typedef TYPE_3__* HPDF_Image ;
typedef TYPE_3__* HPDF_Dict ;
typedef int HPDF_BOOL ;


 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int) ;

HPDF_Image
FUNC_8 (HPDF_MMgr VAR_4,
                          HPDF_Stream VAR_5,
                          HPDF_Xref VAR_6,
                          HPDF_BOOL VAR_7)
{
    HPDF_STATUS VAR_8;
    HPDF_Dict VAR_9;
    png_byte VAR_10[VAR_3];
    HPDF_UINT VAR_11 = VAR_3;

    FUNC_3 ((" HPDF_Image_LoadPngImage\n"));

    FUNC_2 (VAR_10, 0x00, VAR_3);
    VAR_8 = FUNC_5 (VAR_5, VAR_10, &VAR_11);
    if (VAR_8 != VAR_1 ||
            FUNC_7 (VAR_10, (png_size_t)0, VAR_3)) {
        FUNC_4 (VAR_4->error, VAR_0, 0);
        return ((void*)0);
    }

    VAR_9 = FUNC_0 (VAR_4, VAR_6);
    if (!VAR_9)
        return ((void*)0);

    VAR_9->header.obj_class |= VAR_2;
    VAR_8 += FUNC_1 (VAR_9, "Type", "XObject");
    VAR_8 += FUNC_1 (VAR_9, "Subtype", "Image");
    if (VAR_8 != VAR_1)
        return ((void*)0);

    if (FUNC_6 (VAR_9, VAR_6, VAR_5, VAR_7) != VAR_1)
        return ((void*)0);

    return VAR_9;
}
