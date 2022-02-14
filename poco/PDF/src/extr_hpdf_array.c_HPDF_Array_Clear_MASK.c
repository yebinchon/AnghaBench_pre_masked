
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ count; } ;
struct TYPE_5__ {TYPE_2__* list; int mmgr; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_Array ;


 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (char*) ;

void
FUNC_4 (HPDF_Array VAR_0)
{
    HPDF_UINT VAR_1;

    FUNC_3((" HPDF_Array_Clear\n"));

    if (!VAR_0)
        return;

    for (VAR_1 = 0; VAR_1 < VAR_0->list->count; VAR_1++) {
        void * VAR_2 = FUNC_1 (VAR_0->list, VAR_1);

        if (VAR_2) {
            FUNC_2 (VAR_0->mmgr, VAR_2);
        }
    }

    FUNC_0 (VAR_0->list);
}
