
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* cfg; } ;
typedef TYPE_1__ lfs1_t ;
typedef int lfs1_block_t ;
struct TYPE_5__ {int (* erase ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_1(lfs1_t *VAR_0, lfs1_block_t VAR_1) {
    return VAR_0->cfg->erase(VAR_0->cfg, VAR_1);
}
