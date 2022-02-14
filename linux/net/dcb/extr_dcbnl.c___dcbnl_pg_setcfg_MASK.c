
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
struct TYPE_2__ {int (* setpgbwgcfgtx ) (struct net_device*,int,int ) ;int (* setpgbwgcfgrx ) (struct net_device*,int,int ) ;int (* setpgtccfgtx ) (struct net_device*,int,int ,int ,int ,int ) ;int (* setpgtccfgrx ) (struct net_device*,int,int ,int ,int ,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_2 (struct sk_buff*,size_t,int ) ;
 int FUNC_3 (struct net_device*,int,int ,int ,int ,int ) ;
 int FUNC_4 (struct net_device*,int,int ,int ,int ,int ) ;
 int FUNC_5 (struct net_device*,int,int ) ;
 int FUNC_6 (struct net_device*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_16, struct nlmsghdr *VAR_17,
        u32 VAR_18, struct nlattr **VAR_19, struct sk_buff *VAR_20,
        int VAR_21)
{
 struct nlattr *VAR_22[VAR_4 + 1];
 struct nlattr *VAR_23[VAR_8 + 1];
 int VAR_24;
 int VAR_25;
 u8 VAR_26;
 u8 VAR_27;
 u8 VAR_28;
 u8 VAR_29;

 if (!VAR_19[VAR_0])
  return -VAR_12;

 if (!VAR_16->dcbnl_ops->setpgtccfgtx ||
     !VAR_16->dcbnl_ops->setpgtccfgrx ||
     !VAR_16->dcbnl_ops->setpgbwgcfgtx ||
     !VAR_16->dcbnl_ops->setpgbwgcfgrx)
  return -VAR_13;

 VAR_24 = FUNC_1(VAR_22, VAR_4,
       VAR_19[VAR_0], VAR_14,
       ((void*)0));
 if (VAR_24)
  return VAR_24;

 for (VAR_25 = VAR_5; VAR_25 <= VAR_6; VAR_25++) {
  if (!VAR_22[VAR_25])
   continue;

  VAR_24 = FUNC_1(VAR_23,
        VAR_8,
        VAR_22[VAR_25],
        VAR_15, ((void*)0));
  if (VAR_24)
   return VAR_24;

  VAR_26 = VAR_1;
  VAR_28 = VAR_1;
  VAR_29 = VAR_1;
  VAR_27 = VAR_1;

  if (VAR_23[VAR_10])
   VAR_28 =
       FUNC_0(VAR_23[VAR_10]);

  if (VAR_23[VAR_9])
   VAR_26 = FUNC_0(VAR_23[VAR_9]);

  if (VAR_23[VAR_7])
   VAR_29 = FUNC_0(VAR_23[VAR_7]);

  if (VAR_23[VAR_11])
   VAR_27 =
        FUNC_0(VAR_23[VAR_11]);


  if (VAR_21) {

   VAR_16->dcbnl_ops->setpgtccfgrx(VAR_16,
    VAR_25 - VAR_5,
    VAR_28, VAR_26, VAR_29, VAR_27);
  } else {

   VAR_16->dcbnl_ops->setpgtccfgtx(VAR_16,
    VAR_25 - VAR_5,
    VAR_28, VAR_26, VAR_29, VAR_27);
  }
 }

 for (VAR_25 = VAR_2; VAR_25 <= VAR_3; VAR_25++) {
  if (!VAR_22[VAR_25])
   continue;

  VAR_29 = FUNC_0(VAR_22[VAR_25]);


  if (VAR_21) {

   VAR_16->dcbnl_ops->setpgbwgcfgrx(VAR_16,
      VAR_25 - VAR_2, VAR_29);
  } else {

   VAR_16->dcbnl_ops->setpgbwgcfgtx(VAR_16,
      VAR_25 - VAR_2, VAR_29);
  }
 }

 return FUNC_2(VAR_20, VAR_0, 0);
}
