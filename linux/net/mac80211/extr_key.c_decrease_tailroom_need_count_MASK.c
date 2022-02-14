
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sub_if_data {int crypto_tx_tailroom_needed_cnt; int local; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_sub_if_data *VAR_0,
      int VAR_1)
{
 FUNC_1(VAR_0->local);

 FUNC_0(VAR_0->crypto_tx_tailroom_needed_cnt < VAR_1);

 FUNC_2(VAR_0, -VAR_1);
 VAR_0->crypto_tx_tailroom_needed_cnt -= VAR_1;
}
