
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ unicode; int width; } ;
struct TYPE_6__ {int missing_width; int attr; } ;
struct TYPE_5__ {scalar_t__ widths_count; TYPE_3__* widths; } ;
typedef scalar_t__ HPDF_UNICODE ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_Type1FontDefAttr ;
typedef int HPDF_INT16 ;
typedef TYPE_2__* HPDF_FontDef ;
typedef TYPE_3__ HPDF_CharData ;


 int FUNC_0 (char*) ;

HPDF_INT16
FUNC_1 (HPDF_FontDef VAR_0,
                             HPDF_UNICODE VAR_1)
{
    HPDF_Type1FontDefAttr VAR_2 = (HPDF_Type1FontDefAttr)VAR_0->attr;
    HPDF_CharData *VAR_3 = VAR_2->widths;
    HPDF_UINT VAR_4;

    FUNC_0 ((" HPDF_Type1FontDef_GetWidth\n"));

    for (VAR_4 = 0; VAR_4 < VAR_2->widths_count; VAR_4++) {
        if (VAR_3->unicode == VAR_1)
            return VAR_3->width;
        VAR_3++;
    }

    return VAR_0->missing_width;
}
