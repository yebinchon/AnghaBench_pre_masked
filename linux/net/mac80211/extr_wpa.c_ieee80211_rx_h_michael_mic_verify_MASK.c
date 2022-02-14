
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int * data; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_rx_data {size_t security_idx; TYPE_7__* key; TYPE_5__* sdata; int tkip_iv16; int tkip_iv32; struct sk_buff* skb; } ;
struct ieee80211_hdr {int addr1; int addr2; int frame_control; } ;
typedef int ieee80211_rx_result ;
struct TYPE_13__ {scalar_t__ cipher; int keyidx; int * key; } ;
struct TYPE_10__ {int mic_failures; TYPE_2__* rx; } ;
struct TYPE_11__ {TYPE_3__ tkip; } ;
struct TYPE_14__ {TYPE_6__ conf; TYPE_4__ u; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_12__ {int dev; TYPE_1__ vif; } ;
struct TYPE_9__ {int iv16; int iv32; } ;


 int VAR_0 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ,int ,int ,int,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,struct ieee80211_hdr*,int *,size_t,int *) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;

ieee80211_rx_result
FUNC_9(struct ieee80211_rx_data *VAR_13)
{
 u8 *VAR_14, *VAR_15 = ((void*)0);
 size_t VAR_16;
 unsigned int VAR_17;
 u8 VAR_18[VAR_1];
 struct sk_buff *VAR_19 = VAR_13->skb;
 struct ieee80211_rx_status *VAR_20 = FUNC_0(VAR_19);
 struct ieee80211_hdr *VAR_21 = (struct ieee80211_hdr *)VAR_19->data;





 if (!FUNC_4(VAR_21->frame_control))
  return VAR_6;







 if (VAR_20->flag & (VAR_11 | VAR_9)) {
  if (VAR_20->flag & VAR_10)
   goto mic_fail_no_key;

  if (!(VAR_20->flag & VAR_9) && VAR_13->key &&
      VAR_13->key->conf.cipher == VAR_12)
   goto update_iv;

  return VAR_6;
 }






 if (!VAR_13->key || VAR_13->key->conf.cipher != VAR_12 ||
     !(VAR_20->flag & VAR_8))
  return VAR_6;

 if (VAR_13->sdata->vif.type == VAR_2 && VAR_13->key->conf.keyidx) {






  return VAR_7;
 }

 if (VAR_20->flag & VAR_10)
  goto mic_fail;

 VAR_17 = FUNC_3(VAR_21->frame_control);
 if (VAR_19->len < VAR_17 + VAR_1)
  return VAR_7;

 if (FUNC_7(VAR_13->skb))
  return VAR_7;
 VAR_21 = (void *)VAR_19->data;

 VAR_14 = VAR_19->data + VAR_17;
 VAR_16 = VAR_19->len - VAR_17 - VAR_1;
 VAR_15 = &VAR_13->key->conf.key[VAR_5];
 FUNC_6(VAR_15, VAR_21, VAR_14, VAR_16, VAR_18);
 if (FUNC_2(VAR_18, VAR_14 + VAR_16, VAR_1))
  goto mic_fail;


 FUNC_8(VAR_19, VAR_19->len - VAR_1);

update_iv:

 VAR_13->key->u.tkip.rx[VAR_13->security_idx].iv32 = VAR_13->tkip_iv32;
 VAR_13->key->u.tkip.rx[VAR_13->security_idx].iv16 = VAR_13->tkip_iv16;

 return VAR_6;

mic_fail:
 VAR_13->key->u.tkip.mic_failures++;

mic_fail_no_key:





 FUNC_1(VAR_13->sdata->dev, VAR_21->addr2,
         FUNC_5(VAR_21->addr1) ?
         VAR_3 :
         VAR_4,
         VAR_13->key ? VAR_13->key->conf.keyidx : -1,
         ((void*)0), VAR_0);
 return VAR_7;
}
