
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct ieee80211_local {int ack_status_lock; int ack_status_frames; } ;
typedef int gfp_t ;
struct TYPE_3__ {int cookie; } ;
struct TYPE_4__ {int ack_frame_id; TYPE_1__ ack; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,struct sk_buff*,int,int,int ) ;
 int FUNC_2 (struct ieee80211_local*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct ieee80211_local *VAR_2, struct sk_buff *VAR_3,
        u64 *VAR_4, gfp_t VAR_5)
{
 unsigned long VAR_6;
 struct sk_buff *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_3, VAR_5);
 if (!VAR_7)
  return -VAR_0;

 FUNC_5(&VAR_2->ack_status_lock, VAR_6);
 VAR_8 = FUNC_1(&VAR_2->ack_status_frames, VAR_7,
         1, 0x10000, VAR_1);
 FUNC_6(&VAR_2->ack_status_lock, VAR_6);

 if (VAR_8 < 0) {
  FUNC_3(VAR_7);
  return -VAR_0;
 }

 FUNC_0(VAR_3)->ack_frame_id = VAR_8;

 *VAR_4 = FUNC_2(VAR_2);
 FUNC_0(VAR_7)->ack.cookie = *VAR_4;

 return 0;
}
