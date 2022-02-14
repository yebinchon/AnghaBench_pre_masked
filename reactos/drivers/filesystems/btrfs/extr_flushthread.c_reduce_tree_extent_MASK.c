
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_21__ {int tree_id; } ;
struct TYPE_23__ {TYPE_1__ header; scalar_t__ parent; } ;
typedef TYPE_3__ tree ;
struct TYPE_22__ {int node_size; } ;
struct TYPE_24__ {TYPE_2__ superblock; } ;
typedef TYPE_4__ device_extension ;
struct TYPE_25__ {int used; int cache_loaded; } ;
typedef TYPE_5__ chunk ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef int LIST_ENTRY ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,TYPE_4__*,int,TYPE_3__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int,int ,int,int ,int ) ;
 TYPE_5__* FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*,int,int ,int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_9 (TYPE_5__*,int,int ,int *) ;

__attribute__((used)) static NTSTATUS FUNC_10(device_extension* VAR_2, uint64_t VAR_3, tree* VAR_4, uint64_t VAR_5, uint8_t VAR_6, PIRP VAR_7, LIST_ENTRY* VAR_8) {
    NTSTATUS VAR_9;
    uint64_t VAR_10, VAR_11;

    FUNC_2("(%p, %I64x, %p)\n", VAR_2, VAR_3, VAR_4);

    VAR_10 = FUNC_6(VAR_2, VAR_3, VAR_2->superblock.node_size, VAR_7);
    if (VAR_10 == 0) {
        FUNC_0("error - refcount for extent %I64x was 0\n", VAR_3);
        return VAR_0;
    }

    if (!VAR_4 || VAR_4->parent)
        VAR_11 = VAR_5;
    else
        VAR_11 = VAR_4->header.tree_id;

    VAR_9 = FUNC_4(VAR_2, VAR_3, VAR_2->superblock.node_size, VAR_11, VAR_6, VAR_7);
    if (!FUNC_1(VAR_9)) {
        FUNC_0("decrease_extent_refcount_tree returned %08x\n", VAR_9);
        return VAR_9;
    }

    if (VAR_10 == 1) {
        chunk* VAR_12 = FUNC_5(VAR_2, VAR_3);

        if (VAR_12) {
            FUNC_3(VAR_12, VAR_2);

            if (!VAR_12->cache_loaded) {
                VAR_9 = FUNC_7(VAR_2, VAR_12, ((void*)0));

                if (!FUNC_1(VAR_9)) {
                    FUNC_0("load_cache_chunk returned %08x\n", VAR_9);
                    FUNC_8(VAR_12, VAR_2);
                    return VAR_9;
                }
            }

            VAR_12->used -= VAR_2->superblock.node_size;

            FUNC_9(VAR_12, VAR_3, VAR_2->superblock.node_size, VAR_8);

            FUNC_8(VAR_12, VAR_2);
        } else
            FUNC_0("could not find chunk for address %I64x\n", VAR_3);
    }

    return VAR_1;
}
