
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
struct TYPE_2__ {int (* setbcncfg ) (struct net_device*,int,int ) ;int (* setbcnrp ) (struct net_device*,scalar_t__,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_3 (struct sk_buff*,size_t,int ) ;
 int FUNC_4 (struct net_device*,scalar_t__,int ) ;
 int FUNC_5 (struct net_device*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_9, struct nlmsghdr *VAR_10,
       u32 VAR_11, struct nlattr **VAR_12, struct sk_buff *VAR_13)
{
 struct nlattr *VAR_14[VAR_2 + 1];
 int VAR_15;
 int VAR_16;
 u8 VAR_17;
 u32 VAR_18;

 if (!VAR_12[VAR_0])
  return -VAR_6;

 if (!VAR_9->dcbnl_ops->setbcncfg ||
     !VAR_9->dcbnl_ops->setbcnrp)
  return -VAR_7;

 VAR_16 = FUNC_2(VAR_14, VAR_2,
       VAR_12[VAR_0], VAR_8,
       ((void*)0));
 if (VAR_16)
  return VAR_16;

 for (VAR_15 = VAR_4; VAR_15 <= VAR_5; VAR_15++) {
  if (VAR_14[VAR_15] == ((void*)0))
   continue;
  VAR_17 = FUNC_1(VAR_14[VAR_15]);
  VAR_9->dcbnl_ops->setbcnrp(VAR_9,
   VAR_14[VAR_15]->nla_type - VAR_4, VAR_17);
 }

 for (VAR_15 = VAR_1; VAR_15 <= VAR_3; VAR_15++) {
  if (VAR_14[VAR_15] == ((void*)0))
   continue;
  VAR_18 = FUNC_0(VAR_14[VAR_15]);
  VAR_9->dcbnl_ops->setbcncfg(VAR_9,
                                      VAR_15, VAR_18);
 }

 return FUNC_3(VAR_13, VAR_0, 0);
}
