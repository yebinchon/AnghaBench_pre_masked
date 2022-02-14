
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_5__ {int is_valid_ack_signal; int ack_signal; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ status; int ack_frame_id; } ;
struct ieee80211_sub_if_data {int wdev; int dev; } ;
struct ieee80211_local {int ack_status_lock; int ack_status_frames; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
struct TYPE_4__ {int cookie; } ;
struct TYPE_6__ {TYPE_1__ ack; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,scalar_t__,int ,int,int ) ;
 int FUNC_2 (int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 struct ieee80211_sub_if_data* FUNC_7 (struct ieee80211_local*,struct sk_buff*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_13(struct ieee80211_local *VAR_2,
         struct ieee80211_tx_info *VAR_3,
         bool VAR_4, bool VAR_5)
{
 struct sk_buff *VAR_6;
 unsigned long VAR_7;

 FUNC_11(&VAR_2->ack_status_lock, VAR_7);
 VAR_6 = FUNC_4(&VAR_2->ack_status_frames, VAR_3->ack_frame_id);
 FUNC_12(&VAR_2->ack_status_lock, VAR_7);

 if (!VAR_6)
  return;

 if (VAR_3->flags & VAR_1) {
  u64 VAR_8 = FUNC_0(VAR_6)->ack.cookie;
  struct ieee80211_sub_if_data *VAR_9;
  struct ieee80211_hdr *VAR_10 = (void *)VAR_6->data;

  FUNC_8();
  VAR_9 = FUNC_7(VAR_2, VAR_6);
  if (VAR_9) {
   if (FUNC_5(VAR_10->frame_control) ||
       FUNC_6(VAR_10->frame_control))
    FUNC_2(VAR_9->dev, VAR_10->addr1,
            VAR_8, VAR_4,
            VAR_3->status.ack_signal,
            VAR_3->status.is_valid_ack_signal,
            VAR_0);
   else
    FUNC_1(&VAR_9->wdev, VAR_8,
       VAR_6->data, VAR_6->len,
       VAR_4, VAR_0);
  }
  FUNC_9();

  FUNC_3(VAR_6);
 } else if (VAR_5) {
  FUNC_3(VAR_6);
 } else {

  FUNC_10(VAR_6, VAR_4);
 }
}
