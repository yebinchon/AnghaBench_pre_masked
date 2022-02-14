
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned long u16 ;
struct TYPE_4__ {int * txq; } ;
struct sta_info {TYPE_2__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int priority; scalar_t__ data; } ;
struct TYPE_3__ {int flags; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef enum ieee80211_frame_release_type { ____Placeholder_ieee80211_frame_release_type } ieee80211_frame_release_type ;


 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ieee80211_tx_info* FUNC_2 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct sk_buff* FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (struct sk_buff_head*) ;
 int FUNC_5 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_local*,struct sta_info*,unsigned long,int,int,int) ;
 int FUNC_8 (struct ieee80211_local*,struct sta_info*,unsigned long,int,int,int) ;
 int FUNC_9 (unsigned long) ;
 int* VAR_11 ;
 int FUNC_10 (struct ieee80211_local*,struct sk_buff_head*) ;
 int* FUNC_11 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct sta_info*,int,int,int,int) ;
 int FUNC_15 (struct sta_info*,int,int,int,struct sk_buff_head*,unsigned long*) ;
 int FUNC_16 (struct sta_info*,int,int,unsigned long) ;
 int FUNC_17 (struct sta_info*,int ) ;
 scalar_t__ FUNC_18 (struct sk_buff_head*) ;
 int FUNC_19 (struct sk_buff_head*) ;
 int FUNC_20 (struct sta_info*) ;
 scalar_t__ FUNC_21 (int ) ;

__attribute__((used)) static void
FUNC_22(struct sta_info *VAR_12,
      int VAR_13, u8 VAR_14,
      enum ieee80211_frame_release_type VAR_15)
{
 struct ieee80211_sub_if_data *VAR_16 = VAR_12->sdata;
 struct ieee80211_local *VAR_17 = VAR_16->local;
 unsigned long VAR_18 = 0;
 struct sk_buff_head VAR_19;
 bool VAR_20;


 FUNC_17(VAR_12, VAR_10);

 FUNC_4(&VAR_19);

 FUNC_15(VAR_12, VAR_13, VAR_14, VAR_15,
        &VAR_19, &VAR_18);

 VAR_20 = FUNC_16(VAR_12, VAR_14, VAR_15, VAR_18);

 if (VAR_18 && VAR_15 == VAR_2)
  VAR_18 =
   FUNC_1(FUNC_9(VAR_18));

 if (FUNC_18(&VAR_19) && !VAR_18) {
  int VAR_21, VAR_22;
  for (VAR_22 = VAR_0; VAR_22 < VAR_4; VAR_22++)
   if (!(VAR_14 & VAR_11[VAR_22]))
    break;
  VAR_21 = 7 - 2 * VAR_22;

  FUNC_14(VAR_12, VAR_21, VAR_15, 1, 0);
 } else if (!VAR_18) {
  struct sk_buff_head VAR_23;
  struct sk_buff *VAR_24;
  int VAR_25 = 0;
  u16 VAR_26 = 0;
  bool VAR_27 = 0;

  FUNC_19(&VAR_23);

  while ((VAR_24 = FUNC_3(&VAR_19))) {
   struct ieee80211_tx_info *VAR_28 = FUNC_2(VAR_24);
   struct ieee80211_hdr *VAR_29 = (void *) VAR_24->data;
   u8 *VAR_30 = ((void*)0);

   VAR_25++;






   VAR_28->flags |= VAR_6;
   VAR_28->control.flags |= VAR_8;





   if (VAR_20 || !FUNC_18(&VAR_19))
    VAR_29->frame_control |=
     FUNC_6(VAR_1);
   else
    VAR_29->frame_control &=
     FUNC_6(~VAR_1);

   if (FUNC_12(VAR_29->frame_control) ||
       FUNC_13(VAR_29->frame_control))
    VAR_30 = FUNC_11(VAR_29);

   VAR_26 |= FUNC_1(VAR_24->priority);

   FUNC_5(&VAR_23, VAR_24);


   if (!FUNC_18(&VAR_19))
    continue;

   if (VAR_15 != VAR_3) {

    VAR_28->flags |= VAR_9 |
            VAR_7;
    break;
   }
   if (VAR_30) {
    *VAR_30 |= VAR_5;

    VAR_28->flags |= VAR_9 |
            VAR_7;
   } else {
    VAR_29->frame_control |=
     FUNC_6(VAR_1);
    VAR_27 = 1;
    VAR_25++;
   }
   break;
  }

  FUNC_7(VAR_17, VAR_12, VAR_26, VAR_25,
       VAR_15, VAR_20);

  FUNC_10(VAR_17, &VAR_23);

  if (VAR_27)
   FUNC_14(
    VAR_12, FUNC_9(VAR_26),
    VAR_15, 0, 0);

  FUNC_20(VAR_12);
 } else {
  int VAR_31;
  FUNC_8(VAR_17, VAR_12, VAR_18,
         VAR_13, VAR_15, VAR_20);
  if (!VAR_12->sta.txq[0])
   return;

  for (VAR_31 = 0; VAR_31 < FUNC_0(VAR_12->sta.txq); VAR_31++) {
   if (!VAR_12->sta.txq[VAR_31] ||
       !(VAR_18 & FUNC_1(VAR_31)) ||
       FUNC_21(VAR_12->sta.txq[VAR_31]))
    continue;

   FUNC_20(VAR_12);
   break;
  }
 }
}
