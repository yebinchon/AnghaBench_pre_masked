
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sta_info {int ptk_idx; int * gtk; int * ptk; } ;
struct ieee80211_sub_if_data {int * keys; int default_mgmt_key; int local; int default_multicast_key; int default_unicast_key; int key_list; } ;
struct TYPE_4__ {int keyidx; int flags; } ;
struct ieee80211_key {int flags; int list; TYPE_2__ conf; TYPE_1__* local; } ;
struct TYPE_3__ {int wowlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int,int,int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_3 (struct sta_info*,int ) ;
 int FUNC_4 (struct sta_info*) ;
 int FUNC_5 (struct sta_info*) ;
 int FUNC_6 (struct ieee80211_key*) ;
 int FUNC_7 (struct ieee80211_key*) ;
 int FUNC_8 (struct ieee80211_key*,struct ieee80211_key*) ;
 struct ieee80211_key* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,struct ieee80211_key*) ;

__attribute__((used)) static int FUNC_13(struct ieee80211_sub_if_data *VAR_3,
      struct sta_info *VAR_4,
      bool VAR_5,
      struct ieee80211_key *VAR_6,
      struct ieee80211_key *VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;
 bool VAR_10, VAR_11, VAR_12;


 if (FUNC_0(!VAR_7 && !VAR_6))
  return 0;

 if (VAR_7)
  FUNC_10(&VAR_7->list, &VAR_3->key_list);

 FUNC_0(VAR_7 && VAR_6 && VAR_7->conf.keyidx != VAR_6->conf.keyidx);

 if (VAR_7 && VAR_4 && VAR_5) {



  FUNC_8(VAR_6, VAR_7);
 }

 if (VAR_6) {
  VAR_8 = VAR_6->conf.keyidx;

  if (VAR_6->flags & VAR_1) {
   FUNC_6(VAR_6);

   if (VAR_7)
    VAR_9 = FUNC_7(VAR_7);
  }
 } else {

  VAR_8 = VAR_7->conf.keyidx;
  if (!VAR_7->local->wowlan)
   VAR_9 = FUNC_7(VAR_7);
 }

 if (VAR_9)
  return VAR_9;

 if (VAR_4) {
  if (VAR_5) {
   FUNC_12(VAR_4->ptk[VAR_8], VAR_7);
   if (VAR_7 &&
       !(VAR_7->conf.flags & VAR_0)) {
    VAR_4->ptk_idx = VAR_8;
    FUNC_3(VAR_4, VAR_2);
    FUNC_5(VAR_4);
   }
  } else {
   FUNC_12(VAR_4->gtk[VAR_8], VAR_7);
  }




  if (VAR_7 && !VAR_6)
   FUNC_4(VAR_4);
 } else {
  VAR_10 = VAR_6 &&
   VAR_6 == FUNC_9(VAR_3->local,
      VAR_3->default_unicast_key);
  VAR_11 = VAR_6 &&
   VAR_6 == FUNC_9(VAR_3->local,
      VAR_3->default_multicast_key);
  VAR_12 = VAR_6 &&
   VAR_6 == FUNC_9(VAR_3->local,
      VAR_3->default_mgmt_key);

  if (VAR_10 && !VAR_7)
   FUNC_1(VAR_3, -1, 1, 0);
  if (VAR_11 && !VAR_7)
   FUNC_1(VAR_3, -1, 0, 1);
  if (VAR_12 && !VAR_7)
   FUNC_2(VAR_3, -1);

  FUNC_12(VAR_3->keys[VAR_8], VAR_7);
  if (VAR_10 && VAR_7)
   FUNC_1(VAR_3, VAR_7->conf.keyidx,
          1, 0);
  if (VAR_11 && VAR_7)
   FUNC_1(VAR_3, VAR_7->conf.keyidx,
          0, 1);
  if (VAR_12 && VAR_7)
   FUNC_2(VAR_3,
        VAR_7->conf.keyidx);
 }

 if (VAR_6)
  FUNC_11(&VAR_6->list);

 return 0;
}
