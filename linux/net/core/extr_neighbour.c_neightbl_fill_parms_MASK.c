
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct neigh_parms {int reachable_time; int refcnt; TYPE_1__* dev; } ;
struct TYPE_2__ {int ifindex; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (struct neigh_parms*,int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_1 (int ) ;
 int VAR_34 ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_35, struct neigh_parms *VAR_36)
{
 struct nlattr *VAR_37;

 VAR_37 = FUNC_4(VAR_35, VAR_11);
 if (VAR_37 == ((void*)0))
  return -VAR_5;

 if ((VAR_36->dev &&
      FUNC_6(VAR_35, VAR_17, VAR_36->dev->ifindex)) ||
     FUNC_6(VAR_35, VAR_27, FUNC_7(&VAR_36->refcnt)) ||
     FUNC_6(VAR_35, VAR_25,
   FUNC_0(VAR_36, VAR_32)) ||

     FUNC_6(VAR_35, VAR_24,
   FUNC_0(VAR_36, VAR_32) / FUNC_1(VAR_6)) ||
     FUNC_6(VAR_35, VAR_23, FUNC_0(VAR_36, VAR_31)) ||
     FUNC_6(VAR_35, VAR_13, FUNC_0(VAR_36, VAR_1)) ||
     FUNC_6(VAR_35, VAR_29,
   FUNC_0(VAR_36, VAR_34)) ||
     FUNC_6(VAR_35, VAR_19,
   FUNC_0(VAR_36, VAR_9)) ||
     FUNC_6(VAR_35, VAR_20,
   FUNC_0(VAR_36, VAR_10)) ||
     FUNC_5(VAR_35, VAR_26, VAR_36->reachable_time,
     VAR_21) ||
     FUNC_5(VAR_35, VAR_14,
     FUNC_0(VAR_36, VAR_2), VAR_21) ||
     FUNC_5(VAR_35, VAR_16,
     FUNC_0(VAR_36, VAR_7), VAR_21) ||
     FUNC_5(VAR_35, VAR_15,
     FUNC_0(VAR_36, VAR_3), VAR_21) ||
     FUNC_5(VAR_35, VAR_28,
     FUNC_0(VAR_36, VAR_33), VAR_21) ||
     FUNC_5(VAR_35, VAR_12,
     FUNC_0(VAR_36, VAR_0), VAR_21) ||
     FUNC_5(VAR_35, VAR_22,
     FUNC_0(VAR_36, VAR_30), VAR_21) ||
     FUNC_5(VAR_35, VAR_18,
     FUNC_0(VAR_36, VAR_8), VAR_21))
  goto nla_put_failure;
 return FUNC_3(VAR_35, VAR_37);

nla_put_failure:
 FUNC_2(VAR_35, VAR_37);
 return -VAR_4;
}
