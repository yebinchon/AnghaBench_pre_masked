
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int chan; } ;
struct ieee80211_if_ibss {TYPE_4__ chandef; int privacy; int ssid_len; int ssid; int bssid; } ;
struct TYPE_5__ {struct ieee80211_if_ibss ibss; } ;
struct ieee80211_sub_if_data {TYPE_4__ csa_chandef; TYPE_3__* local; TYPE_1__ u; } ;
struct cfg80211_bss {int channel; } ;
struct TYPE_6__ {int wiphy; } ;
struct TYPE_7__ {TYPE_2__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct cfg80211_bss* FUNC_1 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,struct cfg80211_bss*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_sub_if_data*) ;

int FUNC_6(struct ieee80211_sub_if_data *VAR_1)
{
 struct ieee80211_if_ibss *VAR_2 = &VAR_1->u.ibss;
 struct cfg80211_bss *VAR_3;
 int VAR_4, VAR_5 = 0;

 FUNC_5(VAR_1);


 if (!FUNC_4(VAR_2->bssid)) {
  VAR_3 = FUNC_1(VAR_1->local->hw.wiphy,
     VAR_2->chandef.chan,
     VAR_2->bssid, VAR_2->ssid,
     VAR_2->ssid_len,
     VAR_0,
     FUNC_0(VAR_2->privacy));

  if (VAR_3) {
   VAR_3->channel = VAR_1->csa_chandef.chan;
   FUNC_2(VAR_1->local->hw.wiphy, VAR_3);
  }
 }

 VAR_2->chandef = VAR_1->csa_chandef;


 VAR_4 = FUNC_3(VAR_1, ((void*)0));
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5 |= VAR_4;

 return VAR_5;
}
