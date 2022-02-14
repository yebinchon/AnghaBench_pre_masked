
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dev; } ;
struct TYPE_3__ {int teardown_lock; struct sk_buff* orig_teardown_skb; struct sk_buff* teardown_skb; } ;
struct TYPE_4__ {TYPE_1__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;
struct ieee80211_local {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,char*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_local *VAR_2,
     struct ieee80211_sub_if_data *VAR_3,
     struct sk_buff *VAR_4, u32 VAR_5)
{
 struct sk_buff *VAR_6;
 struct sk_buff *VAR_7;
 bool VAR_8 = 0;


 FUNC_4(&VAR_3->u.mgd.teardown_lock);
 VAR_6 = VAR_3->u.mgd.teardown_skb;
 VAR_7 = VAR_3->u.mgd.orig_teardown_skb;
 if ((VAR_4 == VAR_7) && VAR_6) {
  VAR_3->u.mgd.teardown_skb = ((void*)0);
  VAR_3->u.mgd.orig_teardown_skb = ((void*)0);
  VAR_8 = 1;
 }
 FUNC_5(&VAR_3->u.mgd.teardown_lock);

 if (VAR_8) {

  FUNC_0(!FUNC_2(&VAR_2->hw, VAR_1));


  if (VAR_5 & VAR_0) {
   FUNC_1(VAR_6);
  } else {
   FUNC_6(VAR_3,
     "TDLS Resending teardown through AP\n");

   FUNC_3(VAR_6, VAR_4->dev);
  }
 }
}
