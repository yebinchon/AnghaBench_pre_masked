
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * rtnl_link_ops; } ;
struct net_bridge {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int,char const*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*,struct net*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

int FUNC_4(struct net *VAR_4, const char *VAR_5)
{
 struct net_device *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(sizeof(struct net_bridge), VAR_5, VAR_1,
      VAR_2);

 if (!VAR_6)
  return -VAR_0;

 FUNC_1(VAR_6, VAR_4);
 VAR_6->rtnl_link_ops = &VAR_3;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  FUNC_2(VAR_6);
 return VAR_7;
}
