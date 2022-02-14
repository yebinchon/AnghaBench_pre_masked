
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_swapchain {struct priv* priv; } ;
struct priv {TYPE_1__* opts; int swapchain; int last_submit_qpc; } ;
struct TYPE_5__ {int QuadPart; } ;
struct TYPE_4__ {int sync_interval; } ;
typedef TYPE_2__ LARGE_INTEGER ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct ra_swapchain *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    LARGE_INTEGER VAR_2;
    FUNC_1(&VAR_2);
    VAR_1->last_submit_qpc = VAR_2.QuadPart;

    FUNC_0(VAR_1->swapchain, VAR_1->opts->sync_interval, 0);
}
