
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int data; int len; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_rx_data {struct ieee80211_key* key; struct sk_buff* skb; } ;
struct ieee80211_mmie_16 {scalar_t__ element_id; int length; int mic; int sequence_number; } ;
struct TYPE_3__ {int * rx_pn; int icverrors; int tfm; int replays; } ;
struct TYPE_4__ {TYPE_1__ aes_gmac; } ;
struct ieee80211_key {TYPE_2__ u; } ;
struct ieee80211_hdr {int * addr2; int frame_control; } ;
typedef int ieee80211_rx_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct sk_buff*,int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int,int,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (struct sk_buff*,int) ;

ieee80211_rx_result
FUNC_11(struct ieee80211_rx_data *VAR_9)
{
 struct sk_buff *VAR_10 = VAR_9->skb;
 struct ieee80211_rx_status *VAR_11 = FUNC_0(VAR_10);
 struct ieee80211_key *VAR_12 = VAR_9->key;
 struct ieee80211_mmie_16 *VAR_13;
 u8 VAR_14[VAR_2], *VAR_15, VAR_16[6], VAR_17[VAR_4];
 struct ieee80211_hdr *VAR_18 = (struct ieee80211_hdr *)VAR_10->data;

 if (!FUNC_5(VAR_18->frame_control))
  return VAR_5;



 if (VAR_10->len < 24 + sizeof(*VAR_13))
  return VAR_6;

 VAR_13 = (struct ieee80211_mmie_16 *)
  (VAR_10->data + VAR_10->len - sizeof(*VAR_13));
 if (VAR_13->element_id != VAR_8 ||
     VAR_13->length != sizeof(*VAR_13) - 2)
  return VAR_6;

 FUNC_2(VAR_16, VAR_13->sequence_number);

 if (FUNC_8(VAR_16, VAR_12->u.aes_gmac.rx_pn, 6) <= 0) {
  VAR_12->u.aes_gmac.replays++;
  return VAR_6;
 }

 if (!(VAR_11->flag & VAR_7)) {

  FUNC_1(VAR_10, VAR_14);

  FUNC_9(VAR_17, VAR_18->addr2, VAR_0);
  FUNC_9(VAR_17 + VAR_0, VAR_16, 6);

  VAR_15 = FUNC_7(VAR_3, VAR_1);
  if (!VAR_15)
   return VAR_6;
  if (FUNC_4(VAR_12->u.aes_gmac.tfm, VAR_14, VAR_17,
           VAR_10->data + 24, VAR_10->len - 24,
           VAR_15) < 0 ||
      FUNC_3(VAR_15, VAR_13->mic, sizeof(VAR_13->mic))) {
   VAR_12->u.aes_gmac.icverrors++;
   FUNC_6(VAR_15);
   return VAR_6;
  }
  FUNC_6(VAR_15);
 }

 FUNC_9(VAR_12->u.aes_gmac.rx_pn, VAR_16, 6);


 FUNC_10(VAR_10, VAR_10->len - sizeof(*VAR_13));

 return VAR_5;
}
