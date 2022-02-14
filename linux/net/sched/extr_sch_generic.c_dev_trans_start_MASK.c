
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {unsigned int num_tx_queues; } ;
struct TYPE_2__ {unsigned long trans_start; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct net_device*) ;
 TYPE_1__* FUNC_2 (struct net_device*,unsigned int) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 struct net_device* FUNC_5 (struct net_device*) ;

unsigned long FUNC_6(struct net_device *VAR_0)
{
 unsigned long VAR_1, VAR_2;
 unsigned int VAR_3;

 if (FUNC_0(VAR_0))
  VAR_0 = FUNC_5(VAR_0);
 else if (FUNC_3(VAR_0))
  VAR_0 = FUNC_1(VAR_0);
 VAR_2 = FUNC_2(VAR_0, 0)->trans_start;
 for (VAR_3 = 1; VAR_3 < VAR_0->num_tx_queues; VAR_3++) {
  VAR_1 = FUNC_2(VAR_0, VAR_3)->trans_start;
  if (VAR_1 && FUNC_4(VAR_1, VAR_2))
   VAR_2 = VAR_1;
 }

 return VAR_2;
}
