
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sub_if_data {int dec_tailroom_needed_wk; int crypto_tx_tailroom_pending_dec; } ;
struct ieee80211_key {struct ieee80211_sub_if_data* sdata; scalar_t__ local; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_1 (struct ieee80211_key*) ;
 int FUNC_2 (struct ieee80211_key*) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_key *VAR_1,
        bool VAR_2)
{
 if (VAR_1->local) {
  struct ieee80211_sub_if_data *VAR_3 = VAR_1->sdata;

  FUNC_1(VAR_1);

  if (VAR_2) {

   VAR_3->crypto_tx_tailroom_pending_dec++;
   FUNC_3(&VAR_3->dec_tailroom_needed_wk,
           VAR_0/2);
  } else {
   FUNC_0(VAR_3, 1);
  }
 }

 FUNC_2(VAR_1);
}
