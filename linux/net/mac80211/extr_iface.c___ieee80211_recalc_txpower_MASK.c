
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int txpower; } ;
struct TYPE_4__ {TYPE_1__ bss_conf; int chanctx_conf; } ;
struct ieee80211_sub_if_data {int local; TYPE_2__ vif; int ap_power_level; int user_power_level; } ;
struct ieee80211_chanctx_conf {int def; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 struct ieee80211_chanctx_conf* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

bool FUNC_6(struct ieee80211_sub_if_data *VAR_1)
{
 struct ieee80211_chanctx_conf *VAR_2;
 int VAR_3;

 FUNC_4();
 VAR_2 = FUNC_3(VAR_1->vif.chanctx_conf);
 if (!VAR_2) {
  FUNC_5();
  return 0;
 }

 VAR_3 = FUNC_0(&VAR_2->def);
 FUNC_5();

 if (VAR_1->user_power_level != VAR_0)
  VAR_3 = FUNC_2(VAR_3, VAR_1->user_power_level);

 if (VAR_1->ap_power_level != VAR_0)
  VAR_3 = FUNC_2(VAR_3, VAR_1->ap_power_level);

 if (VAR_3 != VAR_1->vif.bss_conf.txpower) {
  VAR_1->vif.bss_conf.txpower = VAR_3;
  FUNC_1(VAR_1->local, 0);
  return 1;
 }

 return 0;
}
