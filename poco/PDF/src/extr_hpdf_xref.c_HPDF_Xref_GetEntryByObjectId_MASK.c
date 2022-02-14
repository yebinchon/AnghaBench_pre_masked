
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ start_offset; struct TYPE_6__* prev; TYPE_1__* entries; int error; } ;
struct TYPE_5__ {scalar_t__ count; } ;
typedef int * HPDF_XrefEntry ;
typedef TYPE_2__* HPDF_Xref ;
typedef scalar_t__ HPDF_UINT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int * FUNC_2 (TYPE_2__*,scalar_t__) ;

HPDF_XrefEntry
FUNC_3 (HPDF_Xref VAR_1,
                               HPDF_UINT VAR_2)
{
    HPDF_Xref VAR_3 = VAR_1;

    FUNC_0((" HPDF_Xref_GetEntryByObjectId\n"));

    while (VAR_3) {
        HPDF_UINT VAR_4;

        if (VAR_3->entries->count + VAR_3->start_offset > VAR_2) {
            FUNC_1 (VAR_1->error, VAR_0, 0);
            return ((void*)0);
        }

        if (VAR_3->start_offset < VAR_2) {
            for (VAR_4 = 0; VAR_4 < VAR_3->entries->count; VAR_4++) {
                if (VAR_3->start_offset + VAR_4 == VAR_2) {
                    HPDF_XrefEntry VAR_5 = FUNC_2(VAR_3, VAR_4);

                    return VAR_5;
                }
            }
        }

        VAR_3 = VAR_3->prev;
    }

    return ((void*)0);
}
