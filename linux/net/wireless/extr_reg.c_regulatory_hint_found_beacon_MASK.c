
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct reg_beacon {int list; int chan; } ;
struct ieee80211_channel {int flags; scalar_t__ band; int center_freq; scalar_t__ beacon_found; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct reg_beacon* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,struct ieee80211_channel*,int) ;
 int FUNC_5 (struct ieee80211_channel*) ;
 int FUNC_6 (char*,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct wiphy*) ;

int FUNC_11(struct wiphy *VAR_6,
     struct ieee80211_channel *VAR_7,
     gfp_t VAR_8)
{
 struct reg_beacon *VAR_9;
 bool VAR_10;

 if (VAR_7->beacon_found ||
     VAR_7->flags & VAR_1 ||
     (VAR_7->band == VAR_2 &&
      !FUNC_0(VAR_7->center_freq)))
  return 0;

 FUNC_8(&VAR_4);
 VAR_10 = FUNC_5(VAR_7);
 FUNC_9(&VAR_4);

 if (VAR_10)
  return 0;

 VAR_9 = FUNC_2(sizeof(struct reg_beacon), VAR_8);
 if (!VAR_9)
  return -VAR_0;

 FUNC_6("Found new beacon on frequency: %d MHz (Ch %d) on %s\n",
   VAR_7->center_freq,
   FUNC_1(VAR_7->center_freq),
   FUNC_10(VAR_6));

 FUNC_4(&VAR_9->chan, VAR_7,
        sizeof(struct ieee80211_channel));





 FUNC_8(&VAR_4);
 FUNC_3(&VAR_9->list, &VAR_3);
 FUNC_9(&VAR_4);

 FUNC_7(&VAR_5);

 return 0;
}
