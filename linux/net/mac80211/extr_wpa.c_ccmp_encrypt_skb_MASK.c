
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_8__ {TYPE_2__* hw_key; } ;
struct ieee80211_tx_info {TYPE_3__ control; } ;
struct ieee80211_tx_data {struct ieee80211_key* key; } ;
struct TYPE_9__ {int tfm; } ;
struct TYPE_10__ {TYPE_4__ ccmp; } ;
struct TYPE_6__ {int keyidx; int tx_pn; } ;
struct ieee80211_key {TYPE_5__ u; TYPE_1__ conf; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*,int*,int ) ;
 int FUNC_4 (struct sk_buff*,int*,int*,int*) ;
 int FUNC_5 (int ,int*,int*,int*,int,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int*,int*,int) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 int* FUNC_10 (struct sk_buff*,scalar_t__) ;
 int FUNC_11 (struct sk_buff*,unsigned int) ;
 int FUNC_12 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_13(struct ieee80211_tx_data *VAR_6, struct sk_buff *VAR_7,
       unsigned int VAR_8)
{
 struct ieee80211_hdr *VAR_9 = (struct ieee80211_hdr *) VAR_7->data;
 struct ieee80211_key *VAR_10 = VAR_6->key;
 struct ieee80211_tx_info *VAR_11 = FUNC_0(VAR_7);
 int VAR_12, VAR_13, VAR_14;
 u8 *VAR_15;
 u8 VAR_16[6];
 u64 VAR_17;
 u8 VAR_18[VAR_1];
 u8 VAR_19[VAR_0];

 if (VAR_11->control.hw_key &&
     !(VAR_11->control.hw_key->flags & VAR_3) &&
     !(VAR_11->control.hw_key->flags & VAR_5) &&
     !((VAR_11->control.hw_key->flags &
        VAR_4) &&
       FUNC_7(VAR_9->frame_control))) {




  return 0;
 }

 VAR_12 = FUNC_6(VAR_9->frame_control);
 VAR_13 = VAR_7->len - VAR_12;

 if (VAR_11->control.hw_key)
  VAR_14 = 0;
 else
  VAR_14 = VAR_8;

 if (FUNC_1(FUNC_12(VAR_7) < VAR_14 ||
      FUNC_9(VAR_7) < VAR_2))
  return -1;

 VAR_15 = FUNC_10(VAR_7, VAR_2);
 FUNC_8(VAR_15, VAR_15 + VAR_2, VAR_12);


 if (VAR_11->control.hw_key &&
     (VAR_11->control.hw_key->flags & VAR_5))
  return 0;

 VAR_9 = (struct ieee80211_hdr *) VAR_15;
 VAR_15 += VAR_12;

 VAR_17 = FUNC_2(&VAR_10->conf.tx_pn);

 VAR_16[5] = VAR_17;
 VAR_16[4] = VAR_17 >> 8;
 VAR_16[3] = VAR_17 >> 16;
 VAR_16[2] = VAR_17 >> 24;
 VAR_16[1] = VAR_17 >> 32;
 VAR_16[0] = VAR_17 >> 40;

 FUNC_3(VAR_15, VAR_16, VAR_10->conf.keyidx);


 if (VAR_11->control.hw_key)
  return 0;

 VAR_15 += VAR_2;
 FUNC_4(VAR_7, VAR_16, VAR_19, VAR_18);
 return FUNC_5(VAR_10->u.ccmp.tfm, VAR_19, VAR_18, VAR_15, VAR_13,
      FUNC_11(VAR_7, VAR_8));
}
