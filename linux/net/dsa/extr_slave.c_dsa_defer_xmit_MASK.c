
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct dsa_port {int xmit_work; int xmit_queue; } ;
struct TYPE_2__ {int deferred_xmit; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct dsa_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;

void *FUNC_4(struct sk_buff *VAR_0, struct net_device *VAR_1)
{
 struct dsa_port *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0)->deferred_xmit = 1;

 FUNC_3(&VAR_2->xmit_queue, VAR_0);
 FUNC_2(&VAR_2->xmit_work);
 return ((void*)0);
}
