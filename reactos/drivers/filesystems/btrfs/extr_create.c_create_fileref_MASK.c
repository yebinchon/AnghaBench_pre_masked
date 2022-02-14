
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int refcount; TYPE_9__* nonpaged; int children; } ;
typedef TYPE_1__ file_ref ;
struct TYPE_11__ {int fileref_lookaside; int fileref_np_lookaside; } ;
typedef TYPE_2__ device_extension ;
struct TYPE_12__ {int fileref_lock; } ;


 int FUNC_0 (char*) ;
 TYPE_9__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (char*,TYPE_1__*) ;

file_ref* FUNC_8(device_extension* VAR_0) {
    file_ref* VAR_1;

    VAR_1 = FUNC_2(&VAR_0->fileref_lookaside);
    if (!VAR_1) {
        FUNC_0("out of memory\n");
        return ((void*)0);
    }

    FUNC_6(VAR_1, sizeof(file_ref));

    VAR_1->nonpaged = FUNC_1(&VAR_0->fileref_np_lookaside);
    if (!VAR_1->nonpaged) {
        FUNC_0("out of memory\n");
        FUNC_3(&VAR_0->fileref_lookaside, VAR_1);
        return ((void*)0);
    }

    VAR_1->refcount = 1;





    FUNC_5(&VAR_1->children);

    FUNC_4(&VAR_1->nonpaged->fileref_lock);

    return VAR_1;
}
