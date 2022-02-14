
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct mr_table {int mroute_sk; } ;
struct mfc_cache {int dummy; } ;
struct TYPE_5__ {scalar_t__ router_alert; } ;
struct TYPE_8__ {int flags; TYPE_1__ opt; int iif; } ;
struct TYPE_7__ {scalar_t__ protocol; int daddr; int saddr; } ;
struct TYPE_6__ {int rt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct mr_table*) ;
 int FUNC_2 (struct mr_table*) ;
 int VAR_5 ;
 struct net_device* FUNC_3 (struct net*,int ) ;
 struct net* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 TYPE_3__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct net*,struct mr_table*,struct net_device*,struct sk_buff*,struct mfc_cache*,int) ;
 struct mfc_cache* FUNC_9 (struct mr_table*,int ,int ) ;
 struct mfc_cache* FUNC_10 (struct mr_table*,int ,int) ;
 int FUNC_11 (struct mr_table*,int,struct sk_buff*,struct net_device*) ;
 int FUNC_12 (struct mr_table*,struct net_device*) ;
 struct mr_table* FUNC_13 (struct net*,struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 int VAR_6 ;
 scalar_t__ FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sock*,struct sk_buff*) ;
 struct sock* FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 struct sk_buff* FUNC_21 (struct sk_buff*,int ) ;
 TYPE_2__* FUNC_22 (struct sk_buff*) ;

int FUNC_23(struct sk_buff *VAR_7)
{
 struct mfc_cache *VAR_8;
 struct net *VAR_9 = FUNC_4(VAR_7->dev);
 int VAR_10 = FUNC_22(VAR_7)->rt_flags & VAR_5;
 struct mr_table *VAR_11;
 struct net_device *VAR_12;





 VAR_12 = VAR_7->dev;
 if (FUNC_15(VAR_7->dev)) {
  VAR_12 = FUNC_3(VAR_9, FUNC_0(VAR_7)->iif);
  if (!VAR_12) {
   FUNC_14(VAR_7);
   return -VAR_1;
  }
 }




 if (FUNC_0(VAR_7)->flags & VAR_4)
  goto dont_forward;

 VAR_11 = FUNC_13(VAR_9, VAR_7);
 if (FUNC_1(VAR_11)) {
  FUNC_14(VAR_7);
  return FUNC_2(VAR_11);
 }
 if (!VAR_10) {
  if (FUNC_0(VAR_7)->opt.router_alert) {
   if (FUNC_5(VAR_7))
    return 0;
  } else if (FUNC_6(VAR_7)->protocol == VAR_3) {






   struct sock *VAR_13;

   VAR_13 = FUNC_18(VAR_11->mroute_sk);
   if (VAR_13) {
    FUNC_16(VAR_7);
    FUNC_17(VAR_13, VAR_7);
    return 0;
   }
      }
 }


 VAR_8 = FUNC_9(VAR_11, FUNC_6(VAR_7)->saddr, FUNC_6(VAR_7)->daddr);
 if (!VAR_8) {
  int VAR_14 = FUNC_12(VAR_11, VAR_12);

  if (VAR_14 >= 0)
   VAR_8 = FUNC_10(VAR_11, FUNC_6(VAR_7)->daddr,
          VAR_14);
 }


 if (!VAR_8) {
  int VAR_15;

  if (VAR_10) {
   struct sk_buff *VAR_16 = FUNC_21(VAR_7, VAR_2);
   FUNC_7(VAR_7);
   if (!VAR_16)
    return -VAR_0;
   VAR_7 = VAR_16;
  }

  FUNC_19(&VAR_6);
  VAR_15 = FUNC_12(VAR_11, VAR_12);
  if (VAR_15 >= 0) {
   int VAR_17 = FUNC_11(VAR_11, VAR_15, VAR_7, VAR_12);
   FUNC_20(&VAR_6);

   return VAR_17;
  }
  FUNC_20(&VAR_6);
  FUNC_14(VAR_7);
  return -VAR_1;
 }

 FUNC_19(&VAR_6);
 FUNC_8(VAR_9, VAR_11, VAR_12, VAR_7, VAR_8, VAR_10);
 FUNC_20(&VAR_6);

 if (VAR_10)
  return FUNC_7(VAR_7);

 return 0;

dont_forward:
 if (VAR_10)
  return FUNC_7(VAR_7);
 FUNC_14(VAR_7);
 return 0;
}
