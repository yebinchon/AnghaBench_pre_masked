
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_6__ {TYPE_2__* hw_key; } ;
struct ieee80211_tx_info {TYPE_3__ control; } ;
struct ieee80211_tx_data {struct ieee80211_key* key; } ;
struct TYPE_4__ {scalar_t__ iv_len; } ;
struct ieee80211_key {TYPE_1__ conf; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int ieee80211_tx_result ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 scalar_t__* FUNC_5 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static ieee80211_tx_result
FUNC_7(struct ieee80211_tx_data *VAR_4,
       struct sk_buff *VAR_5)
{
 struct ieee80211_hdr *VAR_6 = (struct ieee80211_hdr *)VAR_5->data;
 struct ieee80211_key *VAR_7 = VAR_4->key;
 struct ieee80211_tx_info *VAR_8 = FUNC_0(VAR_5);
 int VAR_9;
 u8 *VAR_10, VAR_11 = VAR_7->conf.iv_len;

 if (VAR_8->control.hw_key &&
     !(VAR_8->control.hw_key->flags & VAR_1)) {

  return VAR_2;
 }

 if (FUNC_6(FUNC_4(VAR_5) < VAR_11 &&
       FUNC_3(VAR_5, VAR_11, 0, VAR_0)))
  return VAR_3;

 VAR_9 = FUNC_1(VAR_6->frame_control);

 VAR_10 = FUNC_5(VAR_5, VAR_11);
 FUNC_2(VAR_10, VAR_10 + VAR_11, VAR_9);

 return VAR_2;
}
