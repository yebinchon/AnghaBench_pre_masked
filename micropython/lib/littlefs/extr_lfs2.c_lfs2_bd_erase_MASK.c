
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* cfg; } ;
typedef TYPE_1__ lfs2_t ;
typedef scalar_t__ lfs2_block_t ;
struct TYPE_5__ {scalar_t__ block_count; int (* erase ) (TYPE_2__*,scalar_t__) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(lfs2_t *VAR_0, lfs2_block_t VAR_1) {
    FUNC_0(VAR_1 < VAR_0->cfg->block_count);
    int VAR_2 = VAR_0->cfg->erase(VAR_0->cfg, VAR_1);
    FUNC_0(VAR_2 <= 0);
    return VAR_2;
}
