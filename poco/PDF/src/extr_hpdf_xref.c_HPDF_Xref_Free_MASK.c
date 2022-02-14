
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ count; } ;
struct TYPE_8__ {int mmgr; struct TYPE_8__* prev; scalar_t__ trailer; TYPE_6__* entries; scalar_t__ obj; } ;
typedef TYPE_1__* HPDF_XrefEntry ;
typedef TYPE_1__* HPDF_Xref ;
typedef scalar_t__ HPDF_UINT ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,scalar_t__) ;

void
FUNC_6 (HPDF_Xref VAR_0)
{
    HPDF_UINT VAR_1;
    HPDF_XrefEntry VAR_2;
    HPDF_Xref VAR_3;

    FUNC_4((" HPDF_Xref_Free\n"));




    while (VAR_0) {


        if (VAR_0->entries) {
            for (VAR_1 = 0; VAR_1 < VAR_0->entries->count; VAR_1++) {
                VAR_2 = FUNC_5 (VAR_0, VAR_1);
                if (VAR_2->obj)
                    FUNC_3 (VAR_0->mmgr, VAR_2->obj);
                FUNC_1 (VAR_0->mmgr, VAR_2);
            }

            FUNC_2(VAR_0->entries);
        }

        if (VAR_0->trailer)
            FUNC_0 (VAR_0->trailer);

        VAR_3 = VAR_0->prev;
        FUNC_1 (VAR_0->mmgr, VAR_0);
        VAR_0 = VAR_3;
    }
}
