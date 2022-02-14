
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ count; } ;
struct TYPE_7__ {TYPE_3__* code_space_range; TYPE_3__* notdef_range; TYPE_3__* cmap_range; } ;
struct TYPE_6__ {int * attr; int mmgr; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_Encoder ;
typedef int HPDF_CidRange_Rec ;
typedef TYPE_2__* HPDF_CMapEncoderAttr ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (char*) ;

void
FUNC_4 (HPDF_Encoder VAR_0)
{
    HPDF_CMapEncoderAttr VAR_1;
    HPDF_UINT VAR_2;
    HPDF_CidRange_Rec *VAR_3;

    FUNC_3 ((" HPDF_CMapEncoder_Free\n"));

    VAR_1 = (HPDF_CMapEncoderAttr)VAR_0->attr;

    if (VAR_1 && VAR_1->cmap_range) {
        for (VAR_2 = 0; VAR_2 < VAR_1->cmap_range->count; VAR_2++) {
            VAR_3 = FUNC_2 (VAR_1->cmap_range, VAR_2);

            FUNC_0 (VAR_0->mmgr, VAR_3);
        }

        FUNC_1 (VAR_1->cmap_range);
    }

    if (VAR_1 && VAR_1->notdef_range) {
        for (VAR_2 = 0; VAR_2 < VAR_1->notdef_range->count; VAR_2++) {
            VAR_3 = FUNC_2 (VAR_1->notdef_range, VAR_2);

            FUNC_0 (VAR_0->mmgr, VAR_3);
        }

        FUNC_1 (VAR_1->notdef_range);
    }

    if (VAR_1 && VAR_1->code_space_range) {
        for (VAR_2 = 0; VAR_2 < VAR_1->code_space_range->count; VAR_2++) {
            VAR_3 = FUNC_2 (VAR_1->code_space_range, VAR_2);

            FUNC_0 (VAR_0->mmgr, VAR_3);
        }

        FUNC_1 (VAR_1->code_space_range);
    }

    FUNC_0 (VAR_0->mmgr, VAR_0->attr);
    VAR_0->attr = ((void*)0);
}
