
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int widths; } ;
struct TYPE_12__ {int cid; int width; } ;
struct TYPE_11__ {int mmgr; TYPE_1__* error; int attr; } ;
struct TYPE_10__ {int error_no; } ;
typedef int HPDF_STATUS ;
typedef TYPE_2__* HPDF_FontDef ;
typedef TYPE_3__ HPDF_CID_Width ;
typedef TYPE_4__* HPDF_CIDFontDefAttr ;


 int FUNC_0 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;

HPDF_STATUS
FUNC_4 (HPDF_FontDef VAR_1,
                           const HPDF_CID_Width *VAR_2)
{
    HPDF_CIDFontDefAttr VAR_3 = (HPDF_CIDFontDefAttr)VAR_1->attr;

    FUNC_3 ((" HPDF_CIDFontDef_AddWidth\n"));

    while (VAR_2->cid != 0xFFFF) {
        HPDF_CID_Width *VAR_4 = FUNC_1 (VAR_1->mmgr,
                sizeof (HPDF_CID_Width));
        HPDF_STATUS VAR_5;

        if (!VAR_4)
            return VAR_1->error->error_no;

        VAR_4->cid = VAR_2->cid;
        VAR_4->width = VAR_2->width;

        if ((VAR_5 = FUNC_2 (VAR_3->widths, VAR_4)) != VAR_0) {
            FUNC_0 (VAR_1->mmgr, VAR_4);

            return VAR_5;
        }

        VAR_2++;
    }

    return VAR_0;
}
