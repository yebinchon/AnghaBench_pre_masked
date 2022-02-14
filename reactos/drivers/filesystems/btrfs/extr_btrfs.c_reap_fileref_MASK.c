
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_15__ {scalar_t__ Buffer; } ;
struct TYPE_19__ {scalar_t__ Flink; } ;
struct TYPE_16__ {TYPE_3__ oldutf8; TYPE_8__* fcb; scalar_t__ parent; TYPE_9__ list_entry; TYPE_2__* dc; TYPE_11__* nonpaged; } ;
typedef TYPE_4__ file_ref ;
struct TYPE_17__ {int fileref_lookaside; int fileref_np_lookaside; } ;
typedef TYPE_5__ device_extension ;
struct TYPE_13__ {int Length; } ;
struct TYPE_18__ {TYPE_1__ adsdata; scalar_t__ ads; TYPE_4__* fileref; } ;
struct TYPE_14__ {int * fileref; int size; } ;
struct TYPE_12__ {int fileref_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,TYPE_11__*) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (TYPE_9__*) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(device_extension* VAR_0, file_ref* VAR_1) {




    FUNC_0(&VAR_1->nonpaged->fileref_lock);

    FUNC_2(&VAR_0->fileref_np_lookaside, VAR_1->nonpaged);



    if (VAR_1->fcb->fileref == VAR_1)
        VAR_1->fcb->fileref = ((void*)0);

    if (VAR_1->dc) {
        if (VAR_1->fcb->ads)
            VAR_1->dc->size = VAR_1->fcb->adsdata.Length;

        VAR_1->dc->fileref = ((void*)0);
    }

    if (VAR_1->list_entry.Flink)
        FUNC_4(&VAR_1->list_entry);

    if (VAR_1->parent)
        FUNC_6(VAR_1->parent);

    FUNC_5(VAR_1->fcb);

    if (VAR_1->oldutf8.Buffer)
        FUNC_1(VAR_1->oldutf8.Buffer);

    FUNC_3(&VAR_0->fileref_lookaside, VAR_1);
}
