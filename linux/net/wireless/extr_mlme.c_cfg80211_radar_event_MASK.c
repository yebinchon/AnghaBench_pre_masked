
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct cfg80211_registered_device {int propagate_radar_detect_wk; int radar_chandef; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cfg80211_registered_device*) ;
 int FUNC_1 (struct wiphy*,struct cfg80211_chan_def*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,struct cfg80211_chan_def*,int) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct cfg80211_chan_def*,int ,int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct wiphy*,struct cfg80211_chan_def*) ;
 struct cfg80211_registered_device* FUNC_6 (struct wiphy*) ;

void FUNC_7(struct wiphy *VAR_3,
     struct cfg80211_chan_def *VAR_4,
     gfp_t VAR_5)
{
 struct cfg80211_registered_device *VAR_6 = FUNC_6(VAR_3);

 FUNC_5(VAR_3, VAR_4);





 FUNC_1(VAR_3, VAR_4, VAR_0);

 FUNC_0(VAR_6);

 FUNC_3(VAR_6, VAR_4, VAR_1, ((void*)0), VAR_5);

 FUNC_2(&VAR_6->radar_chandef, VAR_4, sizeof(struct cfg80211_chan_def));
 FUNC_4(VAR_2, &VAR_6->propagate_radar_detect_wk);
}
