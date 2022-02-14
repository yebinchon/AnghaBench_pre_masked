
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;
struct ieee80211_local {TYPE_1__ hw; int tx_expand_skb_head; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static bool FUNC_4(struct ieee80211_local *VAR_1,
     struct sk_buff *VAR_2, int VAR_3)
{
 if (FUNC_2(VAR_2) < VAR_3) {
  FUNC_0(VAR_1->tx_expand_skb_head);

  if (FUNC_1(VAR_2, VAR_3, 0, VAR_0)) {
   FUNC_3(VAR_1->hw.wiphy,
        "failed to reallocate TX buffer\n");
   return 0;
  }
 }

 return 1;
}
