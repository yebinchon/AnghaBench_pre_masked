
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ count; scalar_t__ block_siz; scalar_t__ items_per_block; void** obj; } ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_1__* HPDF_List ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;

HPDF_STATUS
FUNC_2 (HPDF_List VAR_1,
                void *VAR_2)
{
    FUNC_0((" HPDF_List_Add\n"));

    if (VAR_1->count >= VAR_1->block_siz) {
        HPDF_STATUS VAR_3 = FUNC_1 (VAR_1,
                VAR_1->block_siz + VAR_1->items_per_block);

        if (VAR_3 != VAR_0) {
            return VAR_3;
        }
    }

    VAR_1->obj[VAR_1->count++] = VAR_2;
    return VAR_0;
}
