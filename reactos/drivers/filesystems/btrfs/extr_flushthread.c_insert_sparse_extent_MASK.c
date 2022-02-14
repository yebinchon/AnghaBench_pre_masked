
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_12__ {int inode; TYPE_6__* subvol; TYPE_5__* Vcb; } ;
typedef TYPE_2__ fcb ;
struct TYPE_16__ {int id; } ;
struct TYPE_11__ {int generation; } ;
struct TYPE_15__ {TYPE_1__ superblock; } ;
struct TYPE_14__ {scalar_t__ data; int type; int encoding; int encryption; int compression; void* decoded_size; int generation; } ;
struct TYPE_13__ {void* num_bytes; scalar_t__ offset; scalar_t__ size; scalar_t__ address; } ;
typedef int NTSTATUS ;
typedef int LIST_ENTRY ;
typedef TYPE_3__ EXTENT_DATA2 ;
typedef TYPE_4__ EXTENT_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;
 TYPE_4__* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*,int ,int ,void*,void*) ;
 int VAR_9 ;
 int FUNC_5 (int *,TYPE_5__*,TYPE_6__*,int ,int ,void*,TYPE_4__*,int,int ) ;

__attribute__((used)) static NTSTATUS FUNC_6(fcb* VAR_10, LIST_ENTRY* VAR_11, uint64_t VAR_12, uint64_t VAR_13) {
    NTSTATUS VAR_14;
    EXTENT_DATA* VAR_15;
    EXTENT_DATA2* VAR_16;

    FUNC_4("((%I64x, %I64x), %I64x, %I64x)\n", VAR_10->subvol->id, VAR_10->inode, VAR_12, VAR_13);

    VAR_15 = FUNC_1(VAR_6, sizeof(EXTENT_DATA) - 1 + sizeof(EXTENT_DATA2), VAR_0);
    if (!VAR_15) {
        FUNC_0("out of memory\n");
        return VAR_7;
    }

    VAR_15->generation = VAR_10->Vcb->superblock.generation;
    VAR_15->decoded_size = VAR_13;
    VAR_15->compression = VAR_1;
    VAR_15->encryption = VAR_3;
    VAR_15->encoding = VAR_2;
    VAR_15->type = VAR_5;

    VAR_16 = (EXTENT_DATA2*)VAR_15->data;
    VAR_16->address = 0;
    VAR_16->size = 0;
    VAR_16->offset = 0;
    VAR_16->num_bytes = VAR_13;

    VAR_14 = FUNC_5(VAR_11, VAR_10->Vcb, VAR_10->subvol, VAR_10->inode, VAR_9, VAR_12, VAR_15, sizeof(EXTENT_DATA) - 1 + sizeof(EXTENT_DATA2), VAR_4);
    if (!FUNC_3(VAR_14)) {
        FUNC_0("insert_tree_item_batch returned %08x\n", VAR_14);
        FUNC_2(VAR_15);
        return VAR_14;
    }

    return VAR_8;
}
