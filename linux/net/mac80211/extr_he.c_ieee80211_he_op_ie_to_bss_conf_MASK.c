
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_he_operation {int dummy; } ;
struct TYPE_2__ {struct ieee80211_he_operation he_operation; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;


 int FUNC_0 (struct ieee80211_he_operation*,int ,int) ;

void
FUNC_1(struct ieee80211_vif *VAR_0,
   const struct ieee80211_he_operation *VAR_1)
{
 struct ieee80211_he_operation *VAR_2 =
     &VAR_0->bss_conf.he_operation;

 if (!VAR_1) {
  FUNC_0(VAR_2, 0, sizeof(*VAR_2));
  return;
 }

 VAR_0->bss_conf.he_operation = *VAR_1;
}
