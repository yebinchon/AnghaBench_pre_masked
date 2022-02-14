
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dsa_port {int * bridge_dev; int index; TYPE_1__* ds; } ;
struct dsa_notifier_bridge_info {struct net_device* br; int port; int sw_index; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dsa_port*,int ,int *) ;
 int FUNC_1 (struct dsa_port*,int ,struct dsa_notifier_bridge_info*) ;
 int FUNC_2 (struct dsa_port*,int ) ;
 int FUNC_3 (char*) ;

void FUNC_4(struct dsa_port *VAR_2, struct net_device *VAR_3)
{
 struct dsa_notifier_bridge_info VAR_4 = {
  .sw_index = VAR_2->ds->index,
  .port = VAR_2->index,
  .br = VAR_3,
 };
 int VAR_5;




 VAR_2->bridge_dev = ((void*)0);

 VAR_5 = FUNC_1(VAR_2, VAR_1, &VAR_4);
 if (VAR_5)
  FUNC_3("DSA: failed to notify DSA_NOTIFIER_BRIDGE_LEAVE\n");


 FUNC_0(VAR_2, 0, ((void*)0));




 FUNC_2(VAR_2, VAR_0);
}
