
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {struct priv* priv; } ;
struct TYPE_2__ {int num_bos; int * bo_queue; } ;
struct priv {TYPE_1__ gbm; } ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    FUNC_1(VAR_1->gbm.bo_queue[0]);
    FUNC_0(VAR_1->gbm.bo_queue, VAR_1->gbm.num_bos, 0);
}
