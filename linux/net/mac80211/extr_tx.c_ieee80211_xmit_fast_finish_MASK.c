
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct TYPE_8__ {int * packets; int * bytes; scalar_t__* msdu; } ;
struct sta_info {TYPE_3__ tx_stats; } ;
struct sk_buff {size_t* data; size_t priority; scalar_t__ len; int dev; } ;
struct TYPE_6__ {TYPE_4__* hw_key; } ;
struct ieee80211_tx_info {int hw_queue; int flags; TYPE_1__ control; } ;
struct TYPE_7__ {int * hw_queue; } ;
struct ieee80211_sub_if_data {int sequence_number; TYPE_2__ vif; } ;
struct TYPE_9__ {int cipher; int keyidx; int tx_pn; } ;
struct ieee80211_key {TYPE_4__ conf; } ;
struct ieee80211_hdr {int frame_control; int seq_ctrl; } ;
struct TYPE_10__ {scalar_t__ gso_size; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sta_info*,size_t) ;
 int FUNC_5 (int ,scalar_t__) ;
 size_t FUNC_6 (struct sk_buff*) ;
 TYPE_5__* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_sub_if_data *VAR_4,
           struct sta_info *VAR_5, u8 VAR_6,
           struct ieee80211_key *VAR_7,
           struct sk_buff *VAR_8)
{
 struct ieee80211_tx_info *VAR_9 = FUNC_1(VAR_8);
 struct ieee80211_hdr *VAR_10 = (void *)VAR_8->data;
 u8 VAR_11 = VAR_0;

 if (VAR_7)
  VAR_9->control.hw_key = &VAR_7->conf;

 FUNC_5(VAR_8->dev, VAR_8->len);

 if (VAR_10->frame_control & FUNC_3(VAR_2)) {
  VAR_11 = VAR_8->priority & VAR_1;
  VAR_10->seq_ctrl = FUNC_4(VAR_5, VAR_11);
 } else {
  VAR_9->flags |= VAR_3;
  VAR_10->seq_ctrl = FUNC_3(VAR_4->sequence_number);
  VAR_4->sequence_number += 0x10;
 }

 if (FUNC_7(VAR_8)->gso_size)
  VAR_5->tx_stats.msdu[VAR_11] +=
   FUNC_0(VAR_8->len, FUNC_7(VAR_8)->gso_size);
 else
  VAR_5->tx_stats.msdu[VAR_11]++;

 VAR_9->hw_queue = VAR_4->vif.hw_queue[FUNC_6(VAR_8)];




 VAR_5->tx_stats.bytes[FUNC_6(VAR_8)] += VAR_8->len;
 VAR_5->tx_stats.packets[FUNC_6(VAR_8)]++;

 if (VAR_6) {
  u64 VAR_12;
  u8 *VAR_13 = VAR_8->data + VAR_6;

  switch (VAR_7->conf.cipher) {
  case 131:
  case 130:
  case 129:
  case 128:
   VAR_12 = FUNC_2(&VAR_7->conf.tx_pn);
   VAR_13[0] = VAR_12;
   VAR_13[1] = VAR_12 >> 8;
   VAR_13[3] = 0x20 | (VAR_7->conf.keyidx << 6);
   VAR_13[4] = VAR_12 >> 16;
   VAR_13[5] = VAR_12 >> 24;
   VAR_13[6] = VAR_12 >> 32;
   VAR_13[7] = VAR_12 >> 40;
   break;
  }
 }
}
