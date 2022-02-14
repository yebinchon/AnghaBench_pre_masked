
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dsa_port {struct net_device* bridge_dev; int index; TYPE_1__* ds; } ;
struct dsa_notifier_bridge_info {struct net_device* br; int port; int sw_index; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dsa_port*,int,int *) ;
 int FUNC_1 (struct dsa_port*,int ,struct dsa_notifier_bridge_info*) ;

int FUNC_2(struct dsa_port *VAR_3, struct net_device *VAR_4)
{
 struct dsa_notifier_bridge_info VAR_5 = {
  .sw_index = VAR_3->ds->index,
  .port = VAR_3->index,
  .br = VAR_4,
 };
 int VAR_6;


 VAR_6 = FUNC_0(VAR_3, VAR_0 | VAR_1, ((void*)0));
 if (VAR_6)
  return VAR_6;




 VAR_3->bridge_dev = VAR_4;

 VAR_6 = FUNC_1(VAR_3, VAR_2, &VAR_5);


 if (VAR_6) {
  FUNC_0(VAR_3, 0, ((void*)0));
  VAR_3->bridge_dev = ((void*)0);
 }

 return VAR_6;
}
