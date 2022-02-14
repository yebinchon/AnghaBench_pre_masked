
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {struct dcbnl_rtnl_ops* dcbnl_ops; } ;
struct dcbnl_rtnl_ops {int (* getpgbwgcfgtx ) (struct net_device*,int,int *) ;int (* getpgbwgcfgrx ) (struct net_device*,int,int *) ;int (* getpgtccfgtx ) (struct net_device*,int,int *,int *,int *,int *) ;int (* getpgtccfgrx ) (struct net_device*,int,int *,int *,int *,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int,int ) ;
 int FUNC_3 (struct net_device*,int,int *,int *,int *,int *) ;
 int FUNC_4 (struct net_device*,int,int *,int *,int *,int *) ;
 int FUNC_5 (struct net_device*,int,int *) ;
 int FUNC_6 (struct net_device*,int,int *) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_12, struct net_device *VAR_13,
        int VAR_14)
{
 u8 VAR_15, VAR_16, VAR_17, VAR_18;
 const struct dcbnl_rtnl_ops *VAR_19 = VAR_13->dcbnl_ops;
 int VAR_20 = VAR_14 ? VAR_1 : VAR_0;
 struct nlattr *VAR_21 = FUNC_1(VAR_12, VAR_20);

 if (!VAR_21)
  return -VAR_11;

 for (VAR_20 = VAR_5; VAR_20 <= VAR_6; VAR_20++) {
  struct nlattr *VAR_22 = FUNC_1(VAR_12, VAR_20);

  if (!VAR_22)
   return -VAR_11;

  VAR_15 = VAR_2;
  VAR_17 = VAR_2;
  VAR_18 = VAR_2;
  VAR_16 = VAR_2;

  if (!VAR_14)
   VAR_19->getpgtccfgrx(VAR_13, VAR_20 - VAR_5,
       &VAR_17, &VAR_15, &VAR_18, &VAR_16);
  else
   VAR_19->getpgtccfgtx(VAR_13, VAR_20 - VAR_5,
       &VAR_17, &VAR_15, &VAR_18, &VAR_16);

  if (FUNC_2(VAR_12, VAR_8, VAR_15) ||
      FUNC_2(VAR_12, VAR_10, VAR_16) ||
      FUNC_2(VAR_12, VAR_9, VAR_17) ||
      FUNC_2(VAR_12, VAR_7, VAR_18))
   return -VAR_11;
  FUNC_0(VAR_12, VAR_22);
 }

 for (VAR_20 = VAR_3; VAR_20 <= VAR_4; VAR_20++) {
  VAR_18 = VAR_2;

  if (!VAR_14)
   VAR_19->getpgbwgcfgrx(VAR_13, VAR_20 - VAR_3,
        &VAR_18);
  else
   VAR_19->getpgbwgcfgtx(VAR_13, VAR_20 - VAR_3,
        &VAR_18);
  if (FUNC_2(VAR_12, VAR_20, VAR_18))
   return -VAR_11;
 }
 FUNC_0(VAR_12, VAR_21);
 return 0;
}
