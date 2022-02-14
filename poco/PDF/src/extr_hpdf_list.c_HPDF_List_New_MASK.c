
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * obj; scalar_t__ count; scalar_t__ items_per_block; scalar_t__ block_siz; int error; TYPE_1__* mmgr; } ;
struct TYPE_6__ {int error; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_MMgr ;
typedef int HPDF_List_Rec ;
typedef TYPE_2__* HPDF_List ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char*) ;

HPDF_List
FUNC_2 (HPDF_MMgr VAR_1,
                HPDF_UINT VAR_2)
{
    HPDF_List VAR_3;

    FUNC_1((" HPDF_List_New\n"));

    if (VAR_1 == ((void*)0))
        return ((void*)0);

    VAR_3 = (HPDF_List)FUNC_0 (VAR_1, sizeof(HPDF_List_Rec));
    if (VAR_3) {
        VAR_3->mmgr = VAR_1;
        VAR_3->error = VAR_1->error;
        VAR_3->block_siz = 0;
        VAR_3->items_per_block =
            (VAR_2 <= 0 ? VAR_0 : VAR_2);
        VAR_3->count = 0;
        VAR_3->obj = ((void*)0);
    }

    return VAR_3;
}
