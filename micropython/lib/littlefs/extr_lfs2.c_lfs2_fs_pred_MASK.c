
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lfs2_t ;
struct TYPE_4__ {int* tail; } ;
typedef TYPE_1__ lfs2_mdir_t ;
typedef int lfs2_block_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int*) ;
 scalar_t__ FUNC_1 (int*,int const*) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static int FUNC_3(lfs2_t *VAR_1,
        const lfs2_block_t VAR_2[2], lfs2_mdir_t *VAR_3) {

    VAR_3->tail[0] = 0;
    VAR_3->tail[1] = 1;
    while (!FUNC_2(VAR_3->tail)) {
        if (FUNC_1(VAR_3->tail, VAR_2) == 0) {
            return 0;
        }

        int VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_3->tail);
        if (VAR_4) {
            return VAR_4;
        }
    }

    return VAR_0;
}
