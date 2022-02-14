
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int priv_flags; } ;
struct net_bridge_port {int dummy; } ;
struct net_bridge {int dummy; } ;
struct ifinfomsg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_bridge*,struct net_bridge_port*,struct nlattr*,int ,int*,int *) ;
 int FUNC_1 (int ,struct net_bridge*,struct net_bridge_port*) ;
 struct net_bridge_port* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 struct nlattr* FUNC_4 (struct nlmsghdr*,int,int ) ;

int FUNC_5(struct net_device *VAR_5, struct nlmsghdr *VAR_6, u16 VAR_7)
{
 struct net_bridge *VAR_8 = (struct net_bridge *)FUNC_3(VAR_5);
 struct net_bridge_port *VAR_9;
 struct nlattr *VAR_10;
 bool VAR_11 = 0;
 int VAR_12 = 0;

 VAR_10 = FUNC_4(VAR_6, sizeof(struct ifinfomsg), VAR_2);
 if (!VAR_10)
  return 0;

 VAR_9 = FUNC_2(VAR_5);

 if (!VAR_9 && !(VAR_5->priv_flags & VAR_1))
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_8, VAR_9, VAR_10, VAR_3, &VAR_11, ((void*)0));
 if (VAR_11)



  FUNC_1(VAR_4, VAR_8, VAR_9);

 return VAR_12;
}
