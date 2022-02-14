
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int obj_class; } ;
struct TYPE_9__ {int stream; int filter; TYPE_1__ header; } ;
typedef int HPDF_Xref ;
typedef scalar_t__ HPDF_UINT ;
typedef int HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_MMgr ;
typedef TYPE_2__* HPDF_Image ;
typedef TYPE_2__* HPDF_Dict ;
typedef int HPDF_BYTE ;


 TYPE_2__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,int *,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;

HPDF_Image
FUNC_7 (HPDF_MMgr VAR_6,
                           HPDF_Stream VAR_7,
                           HPDF_Xref VAR_8)
{
    HPDF_Dict VAR_9;
    HPDF_STATUS VAR_10 = VAR_0;

    FUNC_2 ((" HPDF_Image_LoadJpegImage\n"));

    VAR_9 = FUNC_0 (VAR_6, VAR_8);
    if (!VAR_9)
        return ((void*)0);

    VAR_9->header.obj_class |= VAR_1;


    VAR_9->filter = VAR_5;
    VAR_10 += FUNC_1 (VAR_9, "Type", "XObject");
    VAR_10 += FUNC_1 (VAR_9, "Subtype", "Image");
    if (VAR_10 != VAR_0)
        return ((void*)0);

    if (FUNC_6 (VAR_9, VAR_7) != VAR_0)
        return ((void*)0);

    if (FUNC_4 (VAR_7, 0, VAR_2) != VAR_0)
        return ((void*)0);

    for (;;) {
        HPDF_BYTE VAR_11[VAR_3];
        HPDF_UINT VAR_12 = VAR_3;
        HPDF_STATUS VAR_13 = FUNC_3 (VAR_7, VAR_11,
                &VAR_12);

        if (VAR_13 != VAR_0) {
            if (VAR_13 == VAR_4) {
                if (VAR_12 > 0) {
                    VAR_13 = FUNC_5 (VAR_9->stream, VAR_11, VAR_12);
                    if (VAR_13 != VAR_0)
                        return ((void*)0);
                }
                break;
            } else
                return ((void*)0);
        }

        if (FUNC_5 (VAR_9->stream, VAR_11, VAR_12) != VAR_0)
            return ((void*)0);
    }

    return VAR_9;
}
