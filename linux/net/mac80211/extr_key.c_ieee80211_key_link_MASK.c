
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sta_info {int * gtk; int * ptk; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_3__* local; int * keys; TYPE_1__ vif; } ;
struct TYPE_5__ {int keyidx; int flags; scalar_t__ cipher; } ;
struct ieee80211_key {struct sta_info* sta; struct ieee80211_sub_if_data* sdata; TYPE_3__* local; TYPE_2__ conf; } ;
struct TYPE_6__ {int key_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ieee80211_key*) ;
 int FUNC_1 (struct ieee80211_key*,int) ;
 int FUNC_2 (struct ieee80211_key*,int) ;
 int FUNC_3 (struct ieee80211_key*) ;
 scalar_t__ FUNC_4 (struct ieee80211_sub_if_data*,struct ieee80211_key*,struct ieee80211_key*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct sta_info*,int,struct ieee80211_key*,struct ieee80211_key*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_key* FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct ieee80211_key *VAR_3,
         struct ieee80211_sub_if_data *VAR_4,
         struct sta_info *VAR_5)
{
 struct ieee80211_key *VAR_6;
 int VAR_7 = VAR_3->conf.keyidx;
 bool VAR_8 = VAR_3->conf.flags & VAR_1;





 bool VAR_9 = VAR_4->vif.type == VAR_2;
 int VAR_10 = -VAR_0;

 FUNC_8(&VAR_4->local->key_mtx);

 if (VAR_5 && VAR_8) {
  struct ieee80211_key *VAR_11;

  VAR_6 = FUNC_7(VAR_4->local, VAR_5->ptk[VAR_7]);
  VAR_11 = FUNC_7(VAR_4->local, VAR_5->ptk[VAR_7 ^ 1]);




  if ((VAR_11 && VAR_11->conf.cipher != VAR_3->conf.cipher) ||
      (VAR_6 && VAR_6->conf.cipher != VAR_3->conf.cipher))
   goto out;
 } else if (VAR_5) {
  VAR_6 = FUNC_7(VAR_4->local, VAR_5->gtk[VAR_7]);
 } else {
  VAR_6 = FUNC_7(VAR_4->local, VAR_4->keys[VAR_7]);
 }


 if (!VAR_8) {
  if (VAR_6 && VAR_6->conf.cipher != VAR_3->conf.cipher)
   goto out;
 }





 if (FUNC_4(VAR_4, VAR_6, VAR_3)) {
  FUNC_3(VAR_3);
  VAR_10 = 0;
  goto out;
 }

 VAR_3->local = VAR_4->local;
 VAR_3->sdata = VAR_4;
 VAR_3->sta = VAR_5;

 FUNC_6(VAR_4);

 VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_8, VAR_6, VAR_3);

 if (!VAR_10) {
  FUNC_0(VAR_3);
  FUNC_1(VAR_6, VAR_9);
 } else {
  FUNC_2(VAR_3, VAR_9);
 }

 out:
 FUNC_9(&VAR_4->local->key_mtx);

 return VAR_10;
}
