
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u8 ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_rx_data {TYPE_4__* skb; TYPE_1__* sta; struct ieee80211_key* key; } ;
struct TYPE_9__ {size_t** rx_pn; } ;
struct TYPE_10__ {TYPE_2__ gen; } ;
struct ieee80211_key {TYPE_3__ u; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ieee80211_cipher_scheme {int hdr_len; int pn_off; scalar_t__ mic_len; int pn_len; } ;
typedef int ieee80211_rx_result ;
struct TYPE_11__ {size_t* data; int len; } ;
struct TYPE_8__ {struct ieee80211_cipher_scheme* cipher_scheme; } ;


 struct ieee80211_rx_status* FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (size_t*,size_t*,int ) ;
 size_t FUNC_2 (struct ieee80211_hdr*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (size_t*,size_t*,int ) ;
 int FUNC_7 (size_t*,size_t*,int) ;
 scalar_t__ FUNC_8 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,int) ;

__attribute__((used)) static ieee80211_rx_result
FUNC_11(struct ieee80211_rx_data *VAR_3)
{
 struct ieee80211_key *VAR_4 = VAR_3->key;
 struct ieee80211_hdr *VAR_5 = (struct ieee80211_hdr *)VAR_3->skb->data;
 const struct ieee80211_cipher_scheme *VAR_6 = ((void*)0);
 int VAR_7 = FUNC_3(VAR_5->frame_control);
 struct ieee80211_rx_status *VAR_8 = FUNC_0(VAR_3->skb);
 int VAR_9;
 u8 *VAR_10;
 u8 *VAR_11;
 u8 VAR_12;

 if (!VAR_3->sta || !VAR_3->sta->cipher_scheme ||
     !(VAR_8->flag & VAR_2))
  return VAR_1;

 if (!FUNC_4(VAR_5->frame_control))
  return VAR_0;

 VAR_6 = VAR_3->sta->cipher_scheme;

 VAR_9 = VAR_3->skb->len - VAR_7 - VAR_6->hdr_len;

 if (VAR_9 < 0)
  return VAR_1;

 if (FUNC_5(VAR_5->frame_control))
  VAR_12 = FUNC_2(VAR_5);
 else
  VAR_12 = 0;

 if (FUNC_9(VAR_3->skb))
  return VAR_1;

 VAR_5 = (struct ieee80211_hdr *)VAR_3->skb->data;

 VAR_10 = VAR_4->u.gen.rx_pn[VAR_12];
 VAR_11 = VAR_3->skb->data + VAR_7 + VAR_6->pn_off;

 if (FUNC_1(VAR_11, VAR_10, VAR_6->pn_len) <= 0)
  return VAR_1;

 FUNC_6(VAR_10, VAR_11, VAR_6->pn_len);


 if (FUNC_8(VAR_3->skb, VAR_3->skb->len - VAR_6->mic_len))
  return VAR_1;

 FUNC_7(VAR_3->skb->data + VAR_6->hdr_len, VAR_3->skb->data, VAR_7);
 FUNC_10(VAR_3->skb, VAR_6->hdr_len);

 return VAR_0;
}
