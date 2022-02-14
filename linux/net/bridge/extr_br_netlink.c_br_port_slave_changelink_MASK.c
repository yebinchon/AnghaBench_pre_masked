
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net_bridge {int lock; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct nlattr**) ;
 struct net_bridge* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0,
        struct net_device *VAR_1,
        struct nlattr *VAR_2[],
        struct nlattr *VAR_3[],
        struct netlink_ext_ack *VAR_4)
{
 struct net_bridge *VAR_5 = FUNC_2(VAR_0);
 int VAR_6;

 if (!VAR_3)
  return 0;

 FUNC_3(&VAR_5->lock);
 VAR_6 = FUNC_1(FUNC_0(VAR_1), VAR_3);
 FUNC_4(&VAR_5->lock);

 return VAR_6;
}
