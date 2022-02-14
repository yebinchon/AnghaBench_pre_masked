
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {TYPE_1__* dcbnl_ops; } ;
struct TYPE_2__ {int (* getpfccfg ) (struct net_device*,int,int *) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,size_t) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_4 (struct sk_buff*,int,int ) ;
 int FUNC_5 (struct net_device*,int,int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_9, struct nlmsghdr *VAR_10,
      u32 VAR_11, struct nlattr **VAR_12, struct sk_buff *VAR_13)
{
 struct nlattr *VAR_14[VAR_4 + 1], *VAR_15;
 u8 VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19 = 0;

 if (!VAR_12[VAR_0])
  return -VAR_5;

 if (!VAR_9->dcbnl_ops->getpfccfg)
  return -VAR_7;

 VAR_17 = FUNC_3(VAR_14, VAR_4,
       VAR_12[VAR_0],
       VAR_8, ((void*)0));
 if (VAR_17)
  return VAR_17;

 VAR_15 = FUNC_2(VAR_13, VAR_0);
 if (!VAR_15)
  return -VAR_6;

 if (VAR_14[VAR_3])
  VAR_19 = 1;

 for (VAR_18 = VAR_1; VAR_18 <= VAR_2; VAR_18++) {
  if (!VAR_19 && !VAR_14[VAR_18])
   continue;

  VAR_9->dcbnl_ops->getpfccfg(VAR_9, VAR_18 - VAR_1,
                               &VAR_16);
  VAR_17 = FUNC_4(VAR_13, VAR_18, VAR_16);
  if (VAR_17) {
   FUNC_0(VAR_13, VAR_15);
   return VAR_17;
  }
 }
 FUNC_1(VAR_13, VAR_15);

 return 0;
}
