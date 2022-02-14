
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
struct TYPE_2__ {int (* getbcncfg ) (struct net_device*,int,int *) ;int (* getbcnrp ) (struct net_device*,int,int *) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,size_t) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_4 (struct sk_buff*,int,int ) ;
 int FUNC_5 (struct sk_buff*,int,int ) ;
 int FUNC_6 (struct net_device*,int,int *) ;
 int FUNC_7 (struct net_device*,int,int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_11, struct nlmsghdr *VAR_12,
       u32 VAR_13, struct nlattr **VAR_14, struct sk_buff *VAR_15)
{
 struct nlattr *VAR_16;
 struct nlattr *VAR_17[VAR_3 + 1];
 u8 VAR_18;
 u32 VAR_19;
 int VAR_20;
 bool VAR_21 = 0;
 int VAR_22;

 if (!VAR_14[VAR_0])
  return -VAR_7;

 if (!VAR_11->dcbnl_ops->getbcnrp ||
     !VAR_11->dcbnl_ops->getbcncfg)
  return -VAR_9;

 VAR_20 = FUNC_3(VAR_17, VAR_3,
       VAR_14[VAR_0], VAR_10,
       ((void*)0));
 if (VAR_20)
  return VAR_20;

 VAR_16 = FUNC_2(VAR_15, VAR_0);
 if (!VAR_16)
  return -VAR_8;

 if (VAR_17[VAR_1])
  VAR_21 = 1;

 for (VAR_22 = VAR_5; VAR_22 <= VAR_6; VAR_22++) {
  if (!VAR_21 && !VAR_17[VAR_22])
   continue;

  VAR_11->dcbnl_ops->getbcnrp(VAR_11, VAR_22 - VAR_5,
                              &VAR_18);
  VAR_20 = FUNC_5(VAR_15, VAR_22, VAR_18);
  if (VAR_20)
   goto err_bcn;
 }

 for (VAR_22 = VAR_2; VAR_22 <= VAR_4; VAR_22++) {
  if (!VAR_21 && !VAR_17[VAR_22])
   continue;

  VAR_11->dcbnl_ops->getbcncfg(VAR_11, VAR_22,
                               &VAR_19);
  VAR_20 = FUNC_4(VAR_15, VAR_22, VAR_19);
  if (VAR_20)
   goto err_bcn;
 }

 FUNC_1(VAR_15, VAR_16);

 return 0;

err_bcn:
 FUNC_0(VAR_15, VAR_16);
 return VAR_20;
}
