
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
struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct TYPE_6__ {TYPE_1__* hw_key; } ;
struct ieee80211_tx_info {TYPE_2__ control; } ;
struct ieee80211_tx_data {TYPE_3__* local; struct ieee80211_key* key; } ;
struct TYPE_8__ {int tx_pn; } ;
struct ieee80211_key {TYPE_4__ conf; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_7__ {int wep_tx_ctx; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int ) ;
 int * FUNC_4 (int *,TYPE_4__*,int ) ;
 int FUNC_5 (int *,struct ieee80211_key*,struct sk_buff*,int *,int) ;
 int FUNC_6 (int *,int *,unsigned int) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int * FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_tx_data *VAR_4, struct sk_buff *VAR_5)
{
 struct ieee80211_hdr *VAR_6 = (struct ieee80211_hdr *) VAR_5->data;
 struct ieee80211_key *VAR_7 = VAR_4->key;
 struct ieee80211_tx_info *VAR_8 = FUNC_0(VAR_5);
 unsigned int VAR_9;
 int VAR_10, VAR_11;
 u64 VAR_12;
 u8 *VAR_13;

 if (VAR_8->control.hw_key &&
     !(VAR_8->control.hw_key->flags & VAR_0) &&
     !(VAR_8->control.hw_key->flags & VAR_1)) {

  return 0;
 }

 VAR_9 = FUNC_3(VAR_6->frame_control);
 VAR_10 = VAR_5->len - VAR_9;

 if (VAR_8->control.hw_key)
  VAR_11 = 0;
 else
  VAR_11 = VAR_2;

 if (FUNC_1(FUNC_10(VAR_5) < VAR_11 ||
      FUNC_7(VAR_5) < VAR_3))
  return -1;

 VAR_13 = FUNC_8(VAR_5, VAR_3);
 FUNC_6(VAR_13, VAR_13 + VAR_3, VAR_9);
 VAR_13 += VAR_9;


 if (VAR_8->control.hw_key &&
     (VAR_8->control.hw_key->flags & VAR_1))
  return 0;


 VAR_12 = FUNC_2(&VAR_7->conf.tx_pn);
 VAR_13 = FUNC_4(VAR_13, &VAR_7->conf, VAR_12);


 if (VAR_8->control.hw_key)
  return 0;


 FUNC_9(VAR_5, VAR_2);

 return FUNC_5(&VAR_4->local->wep_tx_ctx,
        VAR_7, VAR_5, VAR_13, VAR_10);
}
