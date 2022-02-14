
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int priority; scalar_t__ data; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_sub_if_data {int noack_map; int vif; } ;
struct ieee80211_hdr {int frame_control; int addr1; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_7 ;
 int* FUNC_2 (struct ieee80211_hdr*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

void FUNC_7(struct ieee80211_sub_if_data *VAR_8,
      struct sk_buff *VAR_9)
{
 struct ieee80211_hdr *VAR_10 = (void *)VAR_9->data;
 struct ieee80211_tx_info *VAR_11 = FUNC_1(VAR_9);
 u8 VAR_12 = VAR_9->priority & VAR_5;
 u8 VAR_13;
 u8 *VAR_14;

 if (!FUNC_3(VAR_10->frame_control))
  return;

 VAR_14 = FUNC_2(VAR_10);







 VAR_13 = *VAR_14 & ~(VAR_6 |
         VAR_0);

 if (FUNC_6(VAR_10->addr1) ||
     VAR_8->noack_map & FUNC_0(VAR_12)) {
  VAR_13 |= VAR_1;
  VAR_11->flags |= VAR_7;
 }

 *VAR_14 = VAR_13 | VAR_12;


 VAR_14++;

 if (FUNC_5(&VAR_8->vif)) {

  *VAR_14 &= ((VAR_4 |
   VAR_3) >> 8);


  if (!FUNC_4(VAR_10->frame_control))
   *VAR_14 |= (VAR_2 >> 8);
 } else {
  *VAR_14 = 0;
 }
}
