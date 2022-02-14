
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int obj_class; } ;
struct TYPE_9__ {int stream; TYPE_1__ header; } ;
typedef int HPDF_Xref ;
typedef int HPDF_UINT ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_MMgr ;
typedef TYPE_2__* HPDF_Image ;
typedef TYPE_2__* HPDF_Dict ;
typedef int HPDF_BYTE ;
typedef int HPDF_BOOL ;


 TYPE_2__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int const*,int ,int *,int,int,int,int ) ;

HPDF_Image
FUNC_5 (HPDF_MMgr VAR_2,
                          const HPDF_BYTE *VAR_3,
                          HPDF_Xref VAR_4,
                          HPDF_UINT VAR_5,
                          HPDF_UINT VAR_6,
        HPDF_UINT VAR_7,
        HPDF_BOOL VAR_8
                          )
{
    HPDF_Dict VAR_9;
    HPDF_STATUS VAR_10 = VAR_0;


    FUNC_3 ((" HPDF_Image_Load1BitImage\n"));

    VAR_9 = FUNC_0 (VAR_2, VAR_4);
    if (!VAR_9)
        return ((void*)0);

    VAR_9->header.obj_class |= VAR_1;
    VAR_10 += FUNC_1 (VAR_9, "Type", "XObject");
    VAR_10 += FUNC_1 (VAR_9, "Subtype", "Image");
    if (VAR_10 != VAR_0)
        return ((void*)0);


    VAR_10 = FUNC_1 (VAR_9, "ColorSpace", "DeviceGray");
    if (VAR_10 != VAR_0)
        return ((void*)0);

    if (FUNC_2 (VAR_9, "Width", VAR_5) != VAR_0)
        return ((void*)0);

    if (FUNC_2 (VAR_9, "Height", VAR_6) != VAR_0)
        return ((void*)0);

    if (FUNC_2 (VAR_9, "BitsPerComponent", 1) != VAR_0)
        return ((void*)0);

    if (FUNC_4 (VAR_3, VAR_9->stream, ((void*)0), VAR_5, VAR_6, VAR_7, VAR_8) != VAR_0)
        return ((void*)0);

    return VAR_9;
}
