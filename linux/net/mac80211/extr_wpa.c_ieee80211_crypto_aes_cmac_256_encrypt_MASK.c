
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
struct TYPE_8__ {TYPE_3__ aes_cmac; } ;
struct TYPE_6__ {int tx_pn; int keyidx; } ;
struct ieee80211_key {TYPE_4__ u; TYPE_2__ conf; } ;
typedef int ieee80211_tx_result ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,scalar_t__,scalar_t__,int ) ;
 struct sk_buff* FUNC_7 (int *) ;
 struct ieee80211_mmie_16* FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sk_buff*) ;

ieee80211_tx_result
FUNC_11(struct ieee80211_tx_data *VAR_3)
{
 struct sk_buff *VAR_4;
 struct ieee80211_tx_info *VAR_5;
 struct ieee80211_key *VAR_6 = VAR_3->key;
 struct ieee80211_mmie_16 *VAR_7;
 u8 VAR_8[20];
 u64 VAR_9;

 if (FUNC_1(FUNC_9(&VAR_3->skbs) != 1))
  return VAR_1;

 VAR_4 = FUNC_7(&VAR_3->skbs);

 VAR_5 = FUNC_0(VAR_4);

 if (VAR_5->control.hw_key)
  return VAR_0;

 if (FUNC_1(FUNC_10(VAR_4) < sizeof(*VAR_7)))
  return VAR_1;

 VAR_7 = FUNC_8(VAR_4, sizeof(*VAR_7));
 VAR_7->element_id = VAR_2;
 VAR_7->length = sizeof(*VAR_7) - 2;
 VAR_7->key_id = FUNC_5(VAR_6->conf.keyidx);


 VAR_9 = FUNC_2(&VAR_6->conf.tx_pn);

 FUNC_4(VAR_7->sequence_number, VAR_9);

 FUNC_3(VAR_4, VAR_8);



 FUNC_6(VAR_6->u.aes_cmac.tfm, VAR_8,
          VAR_4->data + 24, VAR_4->len - 24, VAR_7->mic);

 return VAR_0;
}
