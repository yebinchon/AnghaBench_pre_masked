
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_20__ {int* root; int rcache; TYPE_5__* files; } ;
typedef TYPE_4__ lfs1_t ;
struct TYPE_21__ {int flags; int pos; int block; int cache; int size; int head; struct TYPE_21__* next; } ;
typedef TYPE_5__ lfs1_file_t ;
struct TYPE_17__ {int size; int head; } ;
struct TYPE_18__ {TYPE_1__ file; } ;
struct TYPE_16__ {int type; TYPE_2__ u; } ;
struct TYPE_22__ {TYPE_10__ d; } ;
typedef TYPE_6__ lfs1_entry_t ;
struct TYPE_19__ {int size; int* tail; } ;
struct TYPE_23__ {int off; TYPE_3__ d; int * pair; } ;
typedef TYPE_7__ lfs1_dir_t ;
typedef int lfs1_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,int,TYPE_10__*,int) ;
 int FUNC_1 (TYPE_4__*,int *,int *,int ,int ,int (*) (void*,lfs1_block_t),void*) ;
 int FUNC_2 (TYPE_4__*,TYPE_7__*,int*) ;
 int FUNC_3 (TYPE_10__*) ;
 scalar_t__ FUNC_4 (TYPE_6__*) ;
 scalar_t__ FUNC_5 (int*) ;

int FUNC_6(lfs1_t *VAR_3, int (*VAR_4)(void*, lfs1_block_t), void *VAR_5) {
    if (FUNC_5(VAR_3->root)) {
        return 0;
    }


    lfs1_dir_t VAR_6;
    lfs1_entry_t VAR_7;
    lfs1_block_t VAR_8[2] = {0, 1};

    while (1) {
        for (int VAR_9 = 0; VAR_9 < 2; VAR_9++) {
            int VAR_10 = VAR_4(VAR_5, VAR_8[VAR_9]);
            if (VAR_10) {
                return VAR_10;
            }
        }

        int VAR_11 = FUNC_2(VAR_3, &VAR_6, VAR_8);
        if (VAR_11) {
            return VAR_11;
        }


        while (VAR_6.off + sizeof(VAR_7.d) <= (0x7fffffff & VAR_6.d.size)-4) {
            VAR_11 = FUNC_0(VAR_3, VAR_6.pair[0], VAR_6.off,
                    &VAR_7.d, sizeof(VAR_7.d));
            FUNC_3(&VAR_7.d);
            if (VAR_11) {
                return VAR_11;
            }

            VAR_6.off += FUNC_4(&VAR_7);
            if ((0x70 & VAR_7.d.type) == (0x70 & VAR_2)) {
                VAR_11 = FUNC_1(VAR_3, &VAR_3->rcache, ((void*)0),
                        VAR_7.d.u.file.head, VAR_7.d.u.file.size, VAR_4, VAR_5);
                if (VAR_11) {
                    return VAR_11;
                }
            }
        }

        VAR_8[0] = VAR_6.d.tail[0];
        VAR_8[1] = VAR_6.d.tail[1];

        if (FUNC_5(VAR_8)) {
            break;
        }
    }


    for (lfs1_file_t *VAR_12 = VAR_3->files; VAR_12; VAR_12 = VAR_12->next) {
        if (VAR_12->flags & VAR_0) {
            int VAR_13 = FUNC_1(VAR_3, &VAR_3->rcache, &VAR_12->cache,
                    VAR_12->head, VAR_12->size, VAR_4, VAR_5);
            if (VAR_13) {
                return VAR_13;
            }
        }

        if (VAR_12->flags & VAR_1) {
            int VAR_14 = FUNC_1(VAR_3, &VAR_3->rcache, &VAR_12->cache,
                    VAR_12->block, VAR_12->pos, VAR_4, VAR_5);
            if (VAR_14) {
                return VAR_14;
            }
        }
    }

    return 0;
}
