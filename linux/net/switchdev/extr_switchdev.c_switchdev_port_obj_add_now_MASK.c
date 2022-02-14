
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_trans {int ph_prepare; } ;
struct switchdev_obj {int id; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int name; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int ,int ) ;
 int FUNC_2 (int ,struct net_device*,struct switchdev_obj const*,struct switchdev_trans*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
          const struct switchdev_obj *VAR_2,
          struct netlink_ext_ack *VAR_3)
{
 struct switchdev_trans VAR_4;
 int VAR_5;

 FUNC_0();
 VAR_4.ph_prepare = 1;
 VAR_5 = FUNC_2(VAR_0,
     VAR_1, VAR_2, &VAR_4, VAR_3);
 if (VAR_5)
  return VAR_5;






 VAR_4.ph_prepare = 0;
 VAR_5 = FUNC_2(VAR_0,
     VAR_1, VAR_2, &VAR_4, VAR_3);
 FUNC_1(VAR_5, "%s: Commit of object (id=%d) failed.\n", VAR_1->name, VAR_2->id);

 return VAR_5;
}
