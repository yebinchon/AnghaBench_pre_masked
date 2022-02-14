
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {int dev; int nb; TYPE_1__* dst; } ;
struct TYPE_2__ {int nh; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct dsa_switch *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->dst->nh, &VAR_0->nb);
 if (VAR_1)
  FUNC_0(VAR_0->dev, "failed to unregister notifier (%d)\n", VAR_1);
}
