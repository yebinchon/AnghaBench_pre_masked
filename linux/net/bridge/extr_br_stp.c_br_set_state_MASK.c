
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int stp_state; } ;
struct switchdev_attr {TYPE_1__ u; int flags; int id; TYPE_2__* orig_dev; } ;
struct net_bridge_port {unsigned int state; TYPE_2__* dev; scalar_t__ port_no; int br; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,int ,int ) ;
 int * VAR_3 ;
 int FUNC_1 (int ,char*,unsigned int,int ) ;
 int FUNC_2 (TYPE_2__*,struct switchdev_attr*) ;

void FUNC_3(struct net_bridge_port *VAR_4, unsigned int VAR_5)
{
 struct switchdev_attr VAR_6 = {
  .orig_dev = VAR_4->dev,
  .id = VAR_1,
  .flags = VAR_2,
  .u.stp_state = VAR_5,
 };
 int VAR_7;

 VAR_4->state = VAR_5;
 VAR_7 = FUNC_2(VAR_4->dev, &VAR_6);
 if (VAR_7 && VAR_7 != -VAR_0)
  FUNC_1(VAR_4->br, "error setting offload STP state on port %u(%s)\n",
    (unsigned int) VAR_4->port_no, VAR_4->dev->name);
 else
  FUNC_0(VAR_4->br, "port %u(%s) entered %s state\n",
    (unsigned int) VAR_4->port_no, VAR_4->dev->name,
    VAR_3[VAR_4->state]);
}
