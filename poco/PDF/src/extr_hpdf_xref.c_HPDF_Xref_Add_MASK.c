
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int count; } ;
struct TYPE_10__ {int obj_id; scalar_t__ gen_no; } ;
struct TYPE_9__ {int start_offset; int error; int mmgr; TYPE_5__* entries; } ;
struct TYPE_8__ {scalar_t__ gen_no; void* obj; scalar_t__ byte_offset; int entry_typ; } ;
typedef int HPDF_XrefEntry_Rec ;
typedef TYPE_1__* HPDF_XrefEntry ;
typedef TYPE_2__* HPDF_Xref ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_3__ HPDF_Obj_Header ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,void*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_6 ;

HPDF_STATUS
FUNC_7 (HPDF_Xref VAR_7,
                void *VAR_8)
{
    HPDF_XrefEntry VAR_9;
    HPDF_Obj_Header *VAR_10;

    FUNC_5((" HPDF_Xref_Add\n"));

    if (!VAR_8) {
        if (FUNC_0 (VAR_7->error) == VAR_3)
            return FUNC_6 (VAR_7->error, VAR_0, 0);
        else
            return VAR_0;
    }

    VAR_10 = (HPDF_Obj_Header *)VAR_8;

    if (VAR_10->obj_id & VAR_4 ||
            VAR_10->obj_id & VAR_5)
        return FUNC_6(VAR_7->error, VAR_0, 0);

    if (VAR_7->entries->count >= VAR_2) {
        FUNC_6(VAR_7->error, VAR_6, 0);
        goto Fail;
    }





    VAR_9 = (HPDF_XrefEntry)FUNC_2 (VAR_7->mmgr,
            sizeof(HPDF_XrefEntry_Rec));
    if (VAR_9 == ((void*)0))
        goto Fail;

    if (FUNC_3(VAR_7->entries, VAR_9) != VAR_3) {
        FUNC_1 (VAR_7->mmgr, VAR_9);
        goto Fail;
    }

    VAR_9->entry_typ = VAR_1;
    VAR_9->byte_offset = 0;
    VAR_9->gen_no = 0;
    VAR_9->obj = VAR_8;
    VAR_10->obj_id = VAR_7->start_offset + VAR_7->entries->count - 1 +
                    VAR_5;

    VAR_10->gen_no = VAR_9->gen_no;

    return VAR_3;

Fail:
    FUNC_4(VAR_7->mmgr, VAR_8);
    return FUNC_0 (VAR_7->error);
}
