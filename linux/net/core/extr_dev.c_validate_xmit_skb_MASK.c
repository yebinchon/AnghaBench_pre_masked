
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; scalar_t__ encapsulation; } ;
struct net_device {int tx_dropped; } ;
typedef int netdev_features_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,struct net_device*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_14 (int) ;
 struct sk_buff* FUNC_15 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_16 (struct sk_buff*,int ,int*) ;

__attribute__((used)) static struct sk_buff *FUNC_17(struct sk_buff *VAR_1, struct net_device *VAR_2, bool *VAR_3)
{
 netdev_features_t VAR_4;

 VAR_4 = FUNC_6(VAR_1);
 VAR_1 = FUNC_15(VAR_1, VAR_4);
 if (FUNC_14(!VAR_1))
  goto out_null;

 VAR_1 = FUNC_7(VAR_1, VAR_2);
 if (FUNC_14(!VAR_1))
  goto out_null;

 if (FUNC_5(VAR_1, VAR_4)) {
  struct sk_buff *VAR_5;

  VAR_5 = FUNC_10(VAR_1, VAR_4);
  if (FUNC_0(VAR_5)) {
   goto out_kfree_skb;
  } else if (VAR_5) {
   FUNC_3(VAR_1);
   VAR_1 = VAR_5;
  }
 } else {
  if (FUNC_11(VAR_1, VAR_4) &&
      FUNC_1(VAR_1))
   goto out_kfree_skb;





  if (VAR_1->ip_summed == VAR_0) {
   if (VAR_1->encapsulation)
    FUNC_12(VAR_1,
              FUNC_8(VAR_1));
   else
    FUNC_13(VAR_1,
        FUNC_8(VAR_1));
   if (FUNC_9(VAR_1, VAR_4))
    goto out_kfree_skb;
  }
 }

 VAR_1 = FUNC_16(VAR_1, VAR_4, VAR_3);

 return VAR_1;

out_kfree_skb:
 FUNC_4(VAR_1);
out_null:
 FUNC_2(&VAR_2->tx_dropped);
 return ((void*)0);
}
