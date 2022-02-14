
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int wifi_acked_valid; int wifi_acked; scalar_t__ destructor; int * dev; scalar_t__ data; } ;
struct ieee80211_tx_info {int flags; scalar_t__ ack_frame_id; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_local {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_2__ {int * frag_list; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_local*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,int ,int) ;
 int FUNC_6 (struct ieee80211_local*,struct ieee80211_tx_info*,int,int) ;
 struct ieee80211_sub_if_data* FUNC_7 (struct ieee80211_local*,struct sk_buff*) ;
 int FUNC_8 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct sk_buff*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 TYPE_1__* FUNC_13 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_14(struct ieee80211_local *VAR_3,
          struct sk_buff *VAR_4, bool VAR_5)
{
 struct ieee80211_tx_info *VAR_6 = FUNC_0(VAR_4);
 struct ieee80211_hdr *VAR_7 = (void *)VAR_4->data;
 bool VAR_8 = VAR_6->flags & VAR_1;

 if (VAR_5)
  VAR_8 = 0;

 if (VAR_6->flags & VAR_0) {
  struct ieee80211_sub_if_data *VAR_9;

  FUNC_10();

  VAR_9 = FUNC_7(VAR_3, VAR_4);

  if (!VAR_9) {
   VAR_4->dev = ((void*)0);
  } else {
   unsigned int VAR_10 =
    FUNC_2(VAR_7->frame_control);


   if (FUNC_3(VAR_7->frame_control) &&
       (FUNC_1(VAR_4, VAR_10) ==
        VAR_2))
    FUNC_8(VAR_3, VAR_9, VAR_4,
           VAR_6->flags);
   else
    FUNC_5(VAR_9,
            VAR_7->frame_control,
            VAR_8);
  }

  FUNC_11();
 } else if (VAR_6->ack_frame_id) {
  FUNC_6(VAR_3, VAR_6, VAR_8, VAR_5);
 }

 if (!VAR_5 && VAR_4->destructor) {
  VAR_4->wifi_acked_valid = 1;
  VAR_4->wifi_acked = VAR_8;
 }

 FUNC_4(VAR_3);

 if (FUNC_12(VAR_4)) {
  FUNC_9(FUNC_13(VAR_4)->frag_list);
  FUNC_13(VAR_4)->frag_list = ((void*)0);
 }
}
