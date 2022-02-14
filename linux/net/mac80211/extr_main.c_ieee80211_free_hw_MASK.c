
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* wiphy; } ;
struct ieee80211_local {int sband_allocated; TYPE_1__ hw; int ack_status_frames; scalar_t__ wiphy_ciphers_allocated; int mtx; int iflist_mtx; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_4__ {int * bands; int cipher_suites; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct ieee80211_local* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_4 (struct ieee80211_local*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ieee80211_local*) ;
 int FUNC_8 (TYPE_2__*) ;

void FUNC_9(struct ieee80211_hw *VAR_2)
{
 struct ieee80211_local *VAR_3 = FUNC_1(VAR_2);
 enum nl80211_band VAR_4;

 FUNC_6(&VAR_3->iflist_mtx);
 FUNC_6(&VAR_3->mtx);

 if (VAR_3->wiphy_ciphers_allocated)
  FUNC_5(VAR_3->hw.wiphy->cipher_suites);

 FUNC_3(&VAR_3->ack_status_frames,
       VAR_1, ((void*)0));
 FUNC_2(&VAR_3->ack_status_frames);

 FUNC_7(VAR_3);

 FUNC_4(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!(VAR_3->sband_allocated & FUNC_0(VAR_4)))
   continue;
  FUNC_5(VAR_3->hw.wiphy->bands[VAR_4]);
 }

 FUNC_8(VAR_3->hw.wiphy);
}
