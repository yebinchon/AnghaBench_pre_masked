
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int position; int membership; } ;
struct ieee80211_bss_conf {TYPE_1__ mu_group; } ;
struct ieee80211_vif {int mu_mimo_owner; struct ieee80211_bss_conf bss_conf; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int const*,int ) ;

void FUNC_2(struct ieee80211_vif *VAR_2,
    const u8 *VAR_3, const u8 *VAR_4)
{
 struct ieee80211_bss_conf *VAR_5 = &VAR_2->bss_conf;

 if (FUNC_0(!VAR_2->mu_mimo_owner))
  return;

 FUNC_1(VAR_5->mu_group.membership, VAR_3, VAR_0);
 FUNC_1(VAR_5->mu_group.position, VAR_4, VAR_1);
}
