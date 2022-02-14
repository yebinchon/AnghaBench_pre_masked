
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net_bridge {int lock; } ;
struct net {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct net_device*,struct nlattr**,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_1 (struct net_device*,int *) ;
 int FUNC_2 (struct net_bridge*,int ) ;
 struct net_bridge* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_1, struct net_device *VAR_2,
     struct nlattr *VAR_3[], struct nlattr *VAR_4[],
     struct netlink_ext_ack *VAR_5)
{
 struct net_bridge *VAR_6 = FUNC_3(VAR_2);
 int VAR_7;

 VAR_7 = FUNC_5(VAR_2);
 if (VAR_7)
  return VAR_7;

 if (VAR_3[VAR_0]) {
  FUNC_6(&VAR_6->lock);
  FUNC_2(VAR_6, FUNC_4(VAR_3[VAR_0]));
  FUNC_7(&VAR_6->lock);
 }

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  FUNC_1(VAR_2, ((void*)0));

 return VAR_7;
}
