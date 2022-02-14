
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minstrel_rate {void* ack_time; void* perfect_tx_time; } ;
struct ieee80211_rate {int flags; int bitrate; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct cfg80211_chan_def*) ;
 void* FUNC_2 (int,int,int ,int,int,int) ;

__attribute__((used)) static void
FUNC_3(enum nl80211_band VAR_1,
      struct minstrel_rate *VAR_2,
      struct ieee80211_rate *VAR_3,
      struct cfg80211_chan_def *VAR_4)
{
 int VAR_5 = !!(VAR_3->flags & VAR_0);
 int VAR_6 = FUNC_1(VAR_4);

 VAR_2->perfect_tx_time = FUNC_2(VAR_1, 1200,
   FUNC_0(VAR_3->bitrate, 1 << VAR_6), VAR_5, 1,
   VAR_6);
 VAR_2->ack_time = FUNC_2(VAR_1, 10,
   FUNC_0(VAR_3->bitrate, 1 << VAR_6), VAR_5, 1,
   VAR_6);
}
