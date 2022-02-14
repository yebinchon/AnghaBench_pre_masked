
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {scalar_t__ _msg; } ;
struct net_device {int name; } ;
typedef int extack ;


 int FUNC_0 (struct net_device*,int,struct netlink_ext_ack*) ;
 int FUNC_1 (struct netlink_ext_ack*,int ,int) ;
 int FUNC_2 (char*,int ,scalar_t__) ;

int FUNC_3(struct net_device *VAR_0, int VAR_1)
{
 struct netlink_ext_ack VAR_2;
 int VAR_3;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_2);
 if (VAR_3 && VAR_2._msg)
  FUNC_2("%s: %s\n", VAR_0->name, VAR_2._msg);
 return VAR_3;
}
