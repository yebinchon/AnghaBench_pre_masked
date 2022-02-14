
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int protocol; int pkt_type; int ip_summed; } ;
struct ieee80211_rx_status {int dummy; } ;
struct ieee80211_rate {int dummy; } ;
struct ieee80211_local {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_local*,struct sk_buff*,struct ieee80211_rate*,int,int) ;
 int FUNC_4 (struct ieee80211_local*,struct ieee80211_rx_status*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int,int ,int ) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *
FUNC_9(struct ieee80211_local *VAR_4,
      struct sk_buff **VAR_5,
      struct ieee80211_rate *VAR_6,
      int VAR_7, bool VAR_8)
{
 struct ieee80211_rx_status *VAR_9 = FUNC_0(*VAR_5);
 int VAR_10, VAR_11;
 struct sk_buff *VAR_12;


 VAR_10 = FUNC_4(VAR_4, VAR_9, *VAR_5);
 VAR_11 = VAR_10 - VAR_7;

 if (VAR_8) {

  VAR_12 = *VAR_5;
  *VAR_5 = ((void*)0);
  if (FUNC_7(VAR_12) < VAR_11 &&
      FUNC_5(VAR_12, VAR_11, 0, VAR_2)) {
   FUNC_1(VAR_12);
   return ((void*)0);
  }
 } else {




  VAR_12 = FUNC_6(*VAR_5, VAR_11, 0, VAR_2);

  if (!VAR_12)
   return ((void*)0);
 }


 FUNC_3(VAR_4, VAR_12, VAR_6, VAR_10, 1);

 FUNC_8(VAR_12);
 VAR_12->ip_summed = VAR_0;
 VAR_12->pkt_type = VAR_3;
 VAR_12->protocol = FUNC_2(VAR_1);

 return VAR_12;
}
