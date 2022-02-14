
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int priority; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct TYPE_2__ {scalar_t__ queues; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
struct ieee80211_hdr {int frame_control; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,int *,struct sk_buff*) ;
 int* FUNC_1 (struct ieee80211_hdr*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * VAR_2 ;

u16 FUNC_4(struct ieee80211_sub_if_data *VAR_3,
     struct sk_buff *VAR_4,
     struct ieee80211_hdr *VAR_5)
{
 struct ieee80211_local *VAR_6 = VAR_3->local;
 u8 *VAR_7;

 if (VAR_6->hw.queues < VAR_0)
  return 0;

 if (!FUNC_2(VAR_5->frame_control)) {
  VAR_4->priority = 7;
  return VAR_2[VAR_4->priority];
 }
 if (!FUNC_3(VAR_5->frame_control)) {
  VAR_4->priority = 0;
  return VAR_2[VAR_4->priority];
 }

 VAR_7 = FUNC_1(VAR_5);
 VAR_4->priority = *VAR_7 & VAR_1;

 return FUNC_0(VAR_3, ((void*)0), VAR_4);
}
