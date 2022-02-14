
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ count; } ;
struct TYPE_7__ {TYPE_3__* widths; } ;
struct TYPE_6__ {int valid; int mmgr; int attr; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_FontDef ;
typedef int HPDF_CID_Width ;
typedef TYPE_2__* HPDF_CIDFontDefAttr ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (char*) ;

void
FUNC_4 (HPDF_FontDef VAR_1)
{
    HPDF_CIDFontDefAttr VAR_2 = (HPDF_CIDFontDefAttr)VAR_1->attr;
    HPDF_UINT VAR_3;

    FUNC_3 ((" HPDF_FontDef_Validate\n"));

    for (VAR_3 = 0; VAR_3 < VAR_2->widths->count; VAR_3++) {
        HPDF_CID_Width *VAR_4 =
                    (HPDF_CID_Width *)FUNC_2 (VAR_2->widths, VAR_3);

        FUNC_0 (VAR_1->mmgr, VAR_4);
    }

    FUNC_1 (VAR_2->widths);
    VAR_2->widths = ((void*)0);

    VAR_1->valid = VAR_0;
}
