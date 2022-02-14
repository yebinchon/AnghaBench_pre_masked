
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ count; } ;
struct TYPE_8__ {int DW; TYPE_4__* widths; } ;
struct TYPE_7__ {scalar_t__ cid; int width; } ;
struct TYPE_6__ {int attr; } ;
typedef scalar_t__ HPDF_UINT16 ;
typedef scalar_t__ HPDF_UINT ;
typedef int HPDF_INT16 ;
typedef TYPE_1__* HPDF_FontDef ;
typedef TYPE_2__ HPDF_CID_Width ;
typedef TYPE_3__* HPDF_CIDFontDefAttr ;


 scalar_t__ FUNC_0 (TYPE_4__*,scalar_t__) ;
 int FUNC_1 (char*) ;

HPDF_INT16
FUNC_2 (HPDF_FontDef VAR_0,
                              HPDF_UINT16 VAR_1)
{
    HPDF_CIDFontDefAttr VAR_2 = (HPDF_CIDFontDefAttr)VAR_0->attr;
    HPDF_UINT VAR_3;

    FUNC_1 ((" HPDF_CIDFontDef_GetCIDWidth\n"));

    for (VAR_3 = 0; VAR_3 < VAR_2->widths->count; VAR_3++) {
        HPDF_CID_Width *VAR_4 = (HPDF_CID_Width *)FUNC_0 (VAR_2->widths,
                VAR_3);

        if (VAR_4->cid == VAR_1)
            return VAR_4->width;
    }


    return VAR_2->DW;
}
