
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int addr; } ;
struct TYPE_6__ {int mtx; } ;
struct sta_info {scalar_t__ ptk_idx; TYPE_3__ sta; TYPE_2__ ampdu_mlme; } ;
struct TYPE_8__ {int wiphy; } ;
struct ieee80211_local {TYPE_4__ hw; } ;
struct TYPE_5__ {int flags; } ;
struct ieee80211_key {int flags; int sdata; TYPE_1__ conf; struct sta_info* sta; struct ieee80211_local* local; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sta_info*,int,int ) ;
 int FUNC_1 (struct ieee80211_local*) ;
 int FUNC_2 (struct sta_info*) ;
 int FUNC_3 (struct ieee80211_local*,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (struct sta_info*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct sta_info*,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_key *VAR_10,
         struct ieee80211_key *VAR_11)
{
 struct ieee80211_local *VAR_12 = VAR_11->local;
 struct sta_info *VAR_13 = VAR_11->sta;
 int VAR_14;

 FUNC_1(VAR_12);

 if (VAR_11->conf.flags & VAR_3) {


  if (VAR_13->ptk_idx != VAR_5 &&
      !FUNC_4(&VAR_12->hw, VAR_2)) {
   FUNC_9(VAR_13, VAR_9);
   FUNC_6(&VAR_13->ampdu_mlme.mtx);
   for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
    FUNC_0(VAR_13, VAR_14,
        VAR_0);
   FUNC_7(&VAR_13->ampdu_mlme.mtx);
  }
 } else if (VAR_10) {





  if (!(VAR_10->flags & VAR_7))
   return;


  VAR_10->flags |= VAR_6;
  FUNC_2(VAR_13);
  if (FUNC_4(&VAR_12->hw, VAR_1)) {
   FUNC_9(VAR_13, VAR_9);
   FUNC_5(VAR_13,
           VAR_0);
  }
  if (!FUNC_10(VAR_12->hw.wiphy,
          VAR_8)) {
   FUNC_8("Rekeying PTK for STA %pM but driver can't safely do that.",
         VAR_13->sta.addr);



   FUNC_3(VAR_12, VAR_10->sdata, 0);
  }
 }
}
