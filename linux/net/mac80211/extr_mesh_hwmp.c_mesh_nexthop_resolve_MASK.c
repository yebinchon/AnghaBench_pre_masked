
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct mesh_path {int flags; int frame_queue; } ;
struct TYPE_2__ {int flags; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_hdr {int frame_control; int * addr3; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mesh_path*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct mesh_path*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 struct mesh_path* FUNC_6 (struct ieee80211_sub_if_data*,int *) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 struct mesh_path* FUNC_8 (struct ieee80211_sub_if_data*,int *) ;
 int FUNC_9 (struct mesh_path*,int ) ;
 struct sk_buff* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,struct sk_buff*) ;

int FUNC_13(struct ieee80211_sub_if_data *VAR_6,
    struct sk_buff *VAR_7)
{
 struct ieee80211_hdr *VAR_8 = (struct ieee80211_hdr *) VAR_7->data;
 struct ieee80211_tx_info *VAR_9 = FUNC_0(VAR_7);
 struct mesh_path *VAR_10;
 struct sk_buff *VAR_11 = ((void*)0);
 u8 *VAR_12 = VAR_8->addr3;


 if (FUNC_3(VAR_8->frame_control))
  return 0;


 if (VAR_9->control.flags & VAR_1)
  return 0;

 if (!FUNC_5(VAR_6, VAR_7))
  return 0;


 VAR_10 = FUNC_8(VAR_6, VAR_12);
 if (!VAR_10) {
  VAR_10 = FUNC_6(VAR_6, VAR_12);
  if (FUNC_1(VAR_10)) {
   FUNC_7(VAR_6, VAR_7);
   return FUNC_2(VAR_10);
  }
 }

 if (!(VAR_10->flags & VAR_4))
  FUNC_9(VAR_10, VAR_5);

 if (FUNC_11(&VAR_10->frame_queue) >= VAR_3)
  VAR_11 = FUNC_10(&VAR_10->frame_queue);

 VAR_9->flags |= VAR_2;
 FUNC_4(VAR_6, VAR_7);
 FUNC_12(&VAR_10->frame_queue, VAR_7);
 if (VAR_11)
  FUNC_7(VAR_6, VAR_11);

 return -VAR_0;
}
