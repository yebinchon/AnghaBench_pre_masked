
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chan; } ;
struct wireless_dev {int cac_started; unsigned long cac_start_time; int cac_time_ms; TYPE_1__ chandef; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int propagate_cac_done_wk; int cac_done_chandef; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef int gfp_t ;
typedef enum nl80211_radar_event { ____Placeholder_nl80211_radar_event } nl80211_radar_event ;


 int VAR_0 ;



 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cfg80211_registered_device*) ;
 int FUNC_2 (struct wiphy*,struct cfg80211_chan_def const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,struct cfg80211_chan_def const*,int) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (struct cfg80211_registered_device*,struct cfg80211_chan_def const*,int,struct net_device*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (struct net_device*,int) ;
 struct cfg80211_registered_device* FUNC_9 (struct wiphy*) ;

void FUNC_10(struct net_device *VAR_3,
   const struct cfg80211_chan_def *VAR_4,
   enum nl80211_radar_event VAR_5, gfp_t VAR_6)
{
 struct wireless_dev *VAR_7 = VAR_3->ieee80211_ptr;
 struct wiphy *VAR_8 = VAR_7->wiphy;
 struct cfg80211_registered_device *VAR_9 = FUNC_9(VAR_8);
 unsigned long VAR_10;

 FUNC_8(VAR_3, VAR_5);

 if (FUNC_0(!VAR_7->cac_started && VAR_5 != 128))
  return;

 if (FUNC_0(!VAR_7->chandef.chan))
  return;

 switch (VAR_5) {
 case 129:
  VAR_10 = VAR_7->cac_start_time +
     FUNC_4(VAR_7->cac_time_ms);
  FUNC_0(!FUNC_7(VAR_2, VAR_10));
  FUNC_2(VAR_8, VAR_4, VAR_0);
  FUNC_3(&VAR_9->cac_done_chandef, VAR_4,
         sizeof(struct cfg80211_chan_def));
  FUNC_6(VAR_1, &VAR_9->propagate_cac_done_wk);
  FUNC_1(VAR_9);

 case 130:
  VAR_7->cac_started = 0;
  break;
 case 128:
  VAR_7->cac_started = 1;
  break;
 default:
  FUNC_0(1);
  return;
 }

 FUNC_5(VAR_9, VAR_4, VAR_5, VAR_3, VAR_6);
}
