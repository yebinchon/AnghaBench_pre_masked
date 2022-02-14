
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct switchdev_notifier_port_attr_info {int info; struct switchdev_attr* attr; } ;
struct TYPE_4__ {unsigned long brport_flags; } ;
struct switchdev_attr {TYPE_1__ u; int flags; int id; TYPE_2__* orig_dev; } ;
struct net_bridge_port {TYPE_2__* dev; scalar_t__ port_no; int br; } ;
struct TYPE_5__ {int name; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,unsigned int,int ) ;
 int FUNC_1 (int ,TYPE_2__*,int *,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,struct switchdev_attr*) ;

int FUNC_4(struct net_bridge_port *VAR_6,
          unsigned long VAR_7,
          unsigned long VAR_8)
{
 struct switchdev_attr VAR_9 = {
  .orig_dev = VAR_6->dev,
  .id = VAR_3,
  .u.brport_flags = VAR_8,
 };
 struct switchdev_notifier_port_attr_info VAR_10 = {
  .attr = &VAR_9,
 };
 int VAR_11;

 if (VAR_8 & ~VAR_0)
  return 0;


 VAR_11 = FUNC_1(VAR_5, VAR_6->dev,
           &VAR_10.info, ((void*)0));
 VAR_11 = FUNC_2(VAR_11);
 if (VAR_11 == -VAR_1)
  return 0;

 if (VAR_11) {
  FUNC_0(VAR_6->br, "bridge flag offload is not supported %u(%s)\n",
   (unsigned int)VAR_6->port_no, VAR_6->dev->name);
  return -VAR_1;
 }

 VAR_9.id = VAR_2;
 VAR_9.flags = VAR_4;
 VAR_9.u.brport_flags = VAR_7;

 VAR_11 = FUNC_3(VAR_6->dev, &VAR_9);
 if (VAR_11) {
  FUNC_0(VAR_6->br, "error setting offload flag on port %u(%s)\n",
   (unsigned int)VAR_6->port_no, VAR_6->dev->name);
  return VAR_11;
 }

 return 0;
}
