
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int descs_dma; } ;
struct TYPE_3__ {int descs_dma; } ;
struct ag71xx {int dev; TYPE_2__ rx_ring; TYPE_1__ tx_ring; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ag71xx*) ;
 int FUNC_1 (struct ag71xx*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ag71xx *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_2(&VAR_2->napi);
 FUNC_1(VAR_2, VAR_1, VAR_2->tx_ring.descs_dma);
 FUNC_1(VAR_2, VAR_0, VAR_2->rx_ring.descs_dma);
 FUNC_3(VAR_2->dev);

 return 0;
}
