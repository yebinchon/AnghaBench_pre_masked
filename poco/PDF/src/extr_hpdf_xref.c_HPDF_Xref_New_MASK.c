
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int error; } ;
struct TYPE_15__ {scalar_t__ start_offset; int trailer; int entries; scalar_t__ addr; int error; TYPE_3__* mmgr; } ;
struct TYPE_14__ {int * obj; int gen_no; scalar_t__ byte_offset; int entry_typ; } ;
typedef int HPDF_Xref_Rec ;
typedef int HPDF_XrefEntry_Rec ;
typedef TYPE_1__* HPDF_XrefEntry ;
typedef TYPE_2__* HPDF_Xref ;
typedef scalar_t__ HPDF_UINT32 ;
typedef TYPE_3__* HPDF_MMgr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;

HPDF_Xref
FUNC_8 (HPDF_MMgr VAR_4,
                HPDF_UINT32 VAR_5)
{
    HPDF_Xref VAR_6;
    HPDF_XrefEntry VAR_7;

    FUNC_6((" HPDF_Xref_New\n"));

    VAR_6 = (HPDF_Xref)FUNC_2 (VAR_4, sizeof(HPDF_Xref_Rec));
    if (!VAR_6)
        return ((void*)0);

    FUNC_5 (VAR_6, 0, sizeof(HPDF_Xref_Rec));
    VAR_6->mmgr = VAR_4;
    VAR_6->error = VAR_4->error;
    VAR_6->start_offset = VAR_5;

    VAR_6->entries = FUNC_4 (VAR_4, VAR_0);
    if (!VAR_6->entries)
        goto Fail;

    VAR_6->addr = 0;

    if (VAR_6->start_offset == 0) {
        VAR_7 = (HPDF_XrefEntry)FUNC_2 (VAR_4,
                sizeof(HPDF_XrefEntry_Rec));
        if (!VAR_7)
            goto Fail;

        if (FUNC_3 (VAR_6->entries, VAR_7) != VAR_3) {
            FUNC_1 (VAR_4, VAR_7);
            goto Fail;
        }




        VAR_7->entry_typ = VAR_1;
        VAR_7->byte_offset = 0;
        VAR_7->gen_no = VAR_2;
        VAR_7->obj = ((void*)0);
    }

    VAR_6->trailer = FUNC_0 (VAR_4);
    if (!VAR_6->trailer)
        goto Fail;

    return VAR_6;

Fail:
    FUNC_6((" HPDF_Xref_New failed\n"));
    FUNC_7 (VAR_6);
    return ((void*)0);
}
