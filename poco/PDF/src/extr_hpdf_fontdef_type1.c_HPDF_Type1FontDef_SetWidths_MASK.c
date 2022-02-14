
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int unicode; int width; int char_cd; } ;
struct TYPE_9__ {int missing_width; int error; int mmgr; int attr; } ;
struct TYPE_8__ {int widths_count; TYPE_3__* widths; } ;
typedef int HPDF_UINT ;
typedef TYPE_1__* HPDF_Type1FontDefAttr ;
typedef int HPDF_STATUS ;
typedef TYPE_2__* HPDF_FontDef ;
typedef TYPE_3__ HPDF_CharData ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;

HPDF_STATUS
FUNC_5 (HPDF_FontDef VAR_1,
                              const HPDF_CharData* VAR_2)
{
    const HPDF_CharData* VAR_3 = VAR_2;
    HPDF_Type1FontDefAttr VAR_4 = (HPDF_Type1FontDefAttr)VAR_1->attr;
    HPDF_CharData* VAR_5;
    HPDF_UINT VAR_6 = 0;

    FUNC_4 ((" HPDF_Type1FontDef_SetWidths\n"));

    FUNC_0 (VAR_1);

    while (VAR_3->unicode != 0xFFFF) {
        VAR_3++;
        VAR_6++;
    }

    VAR_4->widths_count = VAR_6;

    VAR_5 = (HPDF_CharData*)FUNC_2 (VAR_1->mmgr, sizeof(HPDF_CharData) *
            VAR_4->widths_count);
    if (VAR_5 == ((void*)0))
        return FUNC_1 (VAR_1->error);

    FUNC_3 (VAR_5, 0, sizeof(HPDF_CharData) * VAR_4->widths_count);
    VAR_4->widths = VAR_5;

    VAR_3 = VAR_2;
    for (VAR_6 = 0; VAR_6 < VAR_4->widths_count; VAR_6++) {
        VAR_5->char_cd = VAR_3->char_cd;
        VAR_5->unicode = VAR_3->unicode;
        VAR_5->width = VAR_3->width;
        if (VAR_5->unicode == 0x0020) {
            VAR_1->missing_width = VAR_3->width;
        }

        VAR_3++;
        VAR_5++;
    }

    return VAR_0;
}
