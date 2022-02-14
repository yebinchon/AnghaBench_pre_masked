
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {scalar_t__ nla_type; } ;
struct net_device {TYPE_1__* dcbnl_ops; } ;
struct TYPE_2__ {int (* setpfccfg ) (struct net_device*,scalar_t__,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_2 (struct sk_buff*,size_t,int ) ;
 int FUNC_3 (struct net_device*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_7, struct nlmsghdr *VAR_8,
      u32 VAR_9, struct nlattr **VAR_10, struct sk_buff *VAR_11)
{
 struct nlattr *VAR_12[VAR_3 + 1];
 int VAR_13;
 int VAR_14;
 u8 VAR_15;

 if (!VAR_10[VAR_0])
  return -VAR_4;

 if (!VAR_7->dcbnl_ops->setpfccfg)
  return -VAR_5;

 VAR_14 = FUNC_1(VAR_12, VAR_3,
       VAR_10[VAR_0],
       VAR_6, ((void*)0));
 if (VAR_14)
  return VAR_14;

 for (VAR_13 = VAR_1; VAR_13 <= VAR_2; VAR_13++) {
  if (VAR_12[VAR_13] == ((void*)0))
   continue;
  VAR_15 = FUNC_0(VAR_12[VAR_13]);
  VAR_7->dcbnl_ops->setpfccfg(VAR_7,
   VAR_12[VAR_13]->nla_type - VAR_1, VAR_15);
 }

 return FUNC_2(VAR_11, VAR_0, 0);
}
