
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int* root; } ;
typedef TYPE_4__ lfs1_t ;
struct TYPE_16__ {int dir; } ;
struct TYPE_17__ {int type; TYPE_2__ u; } ;
struct TYPE_19__ {TYPE_3__ d; } ;
typedef TYPE_5__ lfs1_entry_t ;
struct TYPE_15__ {int* tail; } ;
struct TYPE_20__ {TYPE_1__ d; } ;
typedef TYPE_6__ lfs1_dir_t ;
typedef int lfs1_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_6__*,int*) ;
 int FUNC_1 (TYPE_4__*,TYPE_6__*,TYPE_5__*) ;
 scalar_t__ FUNC_2 (int ,int const*) ;
 scalar_t__ FUNC_3 (int*) ;

__attribute__((used)) static int FUNC_4(lfs1_t *VAR_2, const lfs1_block_t VAR_3[2],
        lfs1_dir_t *VAR_4, lfs1_entry_t *VAR_5) {
    if (FUNC_3(VAR_2->root)) {
        return 0;
    }

    VAR_4->d.tail[0] = 0;
    VAR_4->d.tail[1] = 1;


    while (!FUNC_3(VAR_4->d.tail)) {
        int VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_4->d.tail);
        if (VAR_6) {
            return VAR_6;
        }

        while (1) {
            VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_5);
            if (VAR_6 && VAR_6 != VAR_0) {
                return VAR_6;
            }

            if (VAR_6 == VAR_0) {
                break;
            }

            if (((0x70 & VAR_5->d.type) == (0x70 & VAR_1)) &&
                 FUNC_2(VAR_5->d.u.dir, VAR_3) == 0) {
                return 1;
            }
        }
    }

    return 0;
}
