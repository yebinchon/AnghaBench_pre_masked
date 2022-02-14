
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_rx_status {int rx_flags; } ;
struct ieee80211_rx_data {int seqno_idx; int security_idx; TYPE_1__* skb; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_2__ {int priority; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_rx_status* FUNC_0 (TYPE_1__*) ;
 int* FUNC_1 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_rx_data *VAR_4)
{
 struct ieee80211_hdr *VAR_5 = (struct ieee80211_hdr *)VAR_4->skb->data;
 struct ieee80211_rx_status *VAR_6 = FUNC_0(VAR_4->skb);
 int VAR_7, VAR_8, VAR_9;


 if (FUNC_2(VAR_5->frame_control)) {
  u8 *VAR_10 = FUNC_1(VAR_5);

  VAR_7 = *VAR_10 & VAR_2;
  if (*VAR_10 & VAR_1)
   VAR_6->rx_flags |= VAR_3;

  VAR_8 = VAR_7;
  VAR_9 = VAR_7;
 } else {
  VAR_8 = VAR_0;
  VAR_9 = 0;
  if (FUNC_3(VAR_5->frame_control))
   VAR_9 = VAR_0;
  VAR_7 = 0;
 }

 VAR_4->seqno_idx = VAR_8;
 VAR_4->security_idx = VAR_9;


 VAR_4->skb->priority = (VAR_7 > 7) ? 0 : VAR_7;
}
