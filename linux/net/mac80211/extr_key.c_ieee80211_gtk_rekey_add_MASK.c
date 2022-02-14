
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ mfp; } ;
struct TYPE_4__ {TYPE_1__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; struct ieee80211_local* local; } ;
struct ieee80211_local {int wowlan; } ;
struct ieee80211_key_conf {int flags; int key; int keylen; int keyidx; int cipher; } ;
struct ieee80211_key {struct ieee80211_key_conf conf; } ;


 int VAR_0 ;
 struct ieee80211_key_conf* FUNC_0 (struct ieee80211_key*) ;
 struct ieee80211_key_conf* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct ieee80211_key*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 struct ieee80211_key* FUNC_4 (int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_5 (struct ieee80211_key*,struct ieee80211_sub_if_data*,int *) ;
 struct ieee80211_sub_if_data* FUNC_6 (struct ieee80211_vif*) ;

struct ieee80211_key_conf *
FUNC_7(struct ieee80211_vif *VAR_4,
   struct ieee80211_key_conf *VAR_5)
{
 struct ieee80211_sub_if_data *VAR_6 = FUNC_6(VAR_4);
 struct ieee80211_local *VAR_7 = VAR_6->local;
 struct ieee80211_key *VAR_8;
 int VAR_9;

 if (FUNC_3(!VAR_7->wowlan))
  return FUNC_1(-VAR_0);

 if (FUNC_3(VAR_4->type != VAR_3))
  return FUNC_1(-VAR_0);

 VAR_8 = FUNC_4(VAR_5->cipher, VAR_5->keyidx,
      VAR_5->keylen, VAR_5->key,
      0, ((void*)0), ((void*)0));
 if (FUNC_2(VAR_8))
  return FUNC_0(VAR_8);

 if (VAR_6->u.mgd.mfp != VAR_2)
  VAR_8->conf.flags |= VAR_1;

 VAR_9 = FUNC_5(VAR_8, VAR_6, ((void*)0));
 if (VAR_9)
  return FUNC_1(VAR_9);

 return &VAR_8->conf;
}
