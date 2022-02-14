
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct net_device {struct dcbnl_rtnl_ops* dcbnl_ops; } ;
struct net {int dummy; } ;
struct dcbnl_rtnl_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_2 (int,int,int ,int ,int ,struct nlmsghdr**) ;
 struct net* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_7 (struct net*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5, int VAR_6, int VAR_7,
   u32 VAR_8, u32 VAR_9, int VAR_10)
{
 struct net *VAR_11 = FUNC_3(VAR_5);
 struct sk_buff *VAR_12;
 struct nlmsghdr *VAR_13;
 const struct dcbnl_rtnl_ops *VAR_14 = VAR_5->dcbnl_ops;
 int VAR_15;

 if (!VAR_14)
  return -VAR_2;

 VAR_12 = FUNC_2(VAR_6, VAR_7, VAR_9, VAR_8, 0, &VAR_13);
 if (!VAR_12)
  return -VAR_1;

 if (VAR_10 == VAR_0)
  VAR_15 = FUNC_1(VAR_12, VAR_5);
 else
  VAR_15 = FUNC_0(VAR_12, VAR_5);

 if (VAR_15 < 0) {

  FUNC_5(VAR_12);
  FUNC_7(VAR_11, VAR_4, VAR_15);
 } else {

  FUNC_4(VAR_12, VAR_13);
  FUNC_6(VAR_12, VAR_11, 0, VAR_4, ((void*)0), VAR_3);
 }

 return VAR_15;
}
