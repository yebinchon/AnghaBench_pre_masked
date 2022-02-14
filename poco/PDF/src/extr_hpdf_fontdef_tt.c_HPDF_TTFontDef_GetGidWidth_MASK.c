
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int missing_width; int attr; } ;
struct TYPE_8__ {scalar_t__ advance_width; } ;
struct TYPE_6__ {int units_per_em; } ;
struct TYPE_7__ {size_t num_glyphs; TYPE_1__ header; TYPE_3__* h_metric; } ;
typedef size_t HPDF_UINT16 ;
typedef int HPDF_UINT ;
typedef TYPE_2__* HPDF_TTFontDefAttr ;
typedef TYPE_3__ HPDF_TTF_LongHorMetric ;
typedef int HPDF_INT16 ;
typedef TYPE_4__* HPDF_FontDef ;


 int FUNC_0 (char*) ;

HPDF_INT16
FUNC_1 (HPDF_FontDef VAR_0,
                             HPDF_UINT16 VAR_1)
{
    HPDF_UINT16 VAR_2;
    HPDF_TTF_LongHorMetric VAR_3;
    HPDF_TTFontDefAttr VAR_4 = (HPDF_TTFontDefAttr)VAR_0->attr;

    FUNC_0((" HPDF_TTFontDef_GetGidWidth\n"));

    if (VAR_1 >= VAR_4->num_glyphs) {
        FUNC_0((" HPDF_TTFontDef_GetGidWidth WARNING gid > "
                    "num_glyphs %u > %u\n", VAR_1, VAR_4->num_glyphs));
        return VAR_0->missing_width;
    }

    VAR_3 = VAR_4->h_metric[VAR_1];

    VAR_2 = (HPDF_UINT16)((HPDF_UINT)VAR_3.advance_width * 1000 /
            VAR_4->header.units_per_em);

    FUNC_0((" HPDF_TTFontDef_GetGidWidth gid=%u, width=%u\n",
                VAR_1, VAR_2));

    return (HPDF_INT16)VAR_2;
}
