
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panda_inf_priv {int tx_submitted; TYPE_1__* priv_dev; } ;
struct TYPE_2__ {int rx_submitted; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct panda_inf_priv *VAR_0)
{
  FUNC_0(&VAR_0->priv_dev->rx_submitted);
  FUNC_0(&VAR_0->tx_submitted);
}
