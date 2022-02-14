
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_5__ {scalar_t__ hw_key; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_tx_data {int skbs; struct ieee80211_key* key; } ;
struct ieee80211_mmie_16 {int length; int mic; int sequence_number; int key_id; int element_id; } ;
struct TYPE_7__ {int tfm; } ;
struct TYPE_8__ {TYPE_3__ aes_gmac; } ;
struct TYPE_6__ {int tx_pn; int keyidx; } ;
struct ieee80211_key {TYPE_4__ u; TYPE_2__ conf; } ;
struct ieee80211_hdr {int addr2; } ;
typedef int ieee80211_tx_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *,int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (int *,int ,int) ;
 struct sk_buff* FUNC_9 (int *) ;
 struct ieee80211_mmie_16* FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct sk_buff*) ;

ieee80211_tx_result
FUNC_13(struct ieee80211_tx_data *VAR_6)
{
 struct sk_buff *VAR_7;
 struct ieee80211_tx_info *VAR_8;
 struct ieee80211_key *VAR_9 = VAR_6->key;
 struct ieee80211_mmie_16 *VAR_10;
 struct ieee80211_hdr *VAR_11;
 u8 VAR_12[VAR_1];
 u64 VAR_13;
 u8 VAR_14[VAR_2];

 if (FUNC_1(FUNC_11(&VAR_6->skbs) != 1))
  return VAR_4;

 VAR_7 = FUNC_9(&VAR_6->skbs);

 VAR_8 = FUNC_0(VAR_7);

 if (VAR_8->control.hw_key)
  return VAR_3;

 if (FUNC_1(FUNC_12(VAR_7) < sizeof(*VAR_10)))
  return VAR_4;

 VAR_10 = FUNC_10(VAR_7, sizeof(*VAR_10));
 VAR_10->element_id = VAR_5;
 VAR_10->length = sizeof(*VAR_10) - 2;
 VAR_10->key_id = FUNC_6(VAR_9->conf.keyidx);


 VAR_13 = FUNC_2(&VAR_9->conf.tx_pn);

 FUNC_4(VAR_10->sequence_number, VAR_13);

 FUNC_3(VAR_7, VAR_12);

 VAR_11 = (struct ieee80211_hdr *)VAR_7->data;
 FUNC_8(VAR_14, VAR_11->addr2, VAR_0);
 FUNC_5(VAR_14 + VAR_0, VAR_10->sequence_number);


 if (FUNC_7(VAR_9->u.aes_gmac.tfm, VAR_12, VAR_14,
          VAR_7->data + 24, VAR_7->len - 24, VAR_10->mic) < 0)
  return VAR_4;

 return VAR_3;
}
