
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ra_ctx {struct priv* priv; } ;
struct TYPE_4__ {scalar_t__ num_bos; TYPE_1__** bo_queue; int surface; } ;
struct priv {TYPE_2__ gbm; } ;
struct TYPE_3__ {scalar_t__ bo; } ;


 int FUNC_0 (struct ra_ctx*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (!(VAR_1->gbm.num_bos > 0))
        return;

    if (VAR_1->gbm.bo_queue[0]->bo)
        FUNC_1(VAR_1->gbm.surface, VAR_1->gbm.bo_queue[0]->bo);
    FUNC_0(VAR_0);
}
