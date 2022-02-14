
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cfg; } ;
typedef TYPE_2__ lfs1_t ;
typedef int lfs1_off_t ;
struct TYPE_4__ {int block_size; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(lfs1_t *VAR_0, lfs1_off_t *VAR_1) {
    lfs1_off_t VAR_2 = *VAR_1;
    lfs1_off_t VAR_3 = VAR_0->cfg->block_size - 2*4;
    lfs1_off_t VAR_4 = VAR_2 / VAR_3;
    if (VAR_4 == 0) {
        return 0;
    }

    VAR_4 = (VAR_2 - 4*(FUNC_0(VAR_4-1)+2)) / VAR_3;
    *VAR_1 = VAR_2 - VAR_3*VAR_4 - 4*FUNC_0(VAR_4);
    return VAR_4;
}
