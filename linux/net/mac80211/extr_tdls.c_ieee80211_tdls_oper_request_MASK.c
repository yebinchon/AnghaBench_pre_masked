
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int assoc; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {int dev; } ;
typedef int gfp_t ;
typedef enum nl80211_tdls_operation { ____Placeholder_nl80211_tdls_operation } nl80211_tdls_operation ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int const*,int,int ,int ) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,char*,int) ;
 struct ieee80211_sub_if_data* FUNC_2 (struct ieee80211_vif*) ;

void FUNC_3(struct ieee80211_vif *VAR_1, const u8 *VAR_2,
     enum nl80211_tdls_operation VAR_3,
     u16 VAR_4, gfp_t VAR_5)
{
 struct ieee80211_sub_if_data *VAR_6 = FUNC_2(VAR_1);

 if (VAR_1->type != VAR_0 || !VAR_1->bss_conf.assoc) {
  FUNC_1(VAR_6, "Discarding TDLS oper %d - not STA or disconnected\n",
     VAR_3);
  return;
 }

 FUNC_0(VAR_6->dev, VAR_2, VAR_3, VAR_4, VAR_5);
}
