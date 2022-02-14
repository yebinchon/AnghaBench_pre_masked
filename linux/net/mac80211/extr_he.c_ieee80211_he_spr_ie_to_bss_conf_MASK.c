
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_he_obss_pd {int enable; int min_offset; int max_offset; } ;
struct TYPE_2__ {struct ieee80211_he_obss_pd he_obss_pd; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct ieee80211_he_spr {int he_sr_control; int * optional; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_he_obss_pd*,int ,int) ;

void
FUNC_1(struct ieee80211_vif *VAR_2,
    const struct ieee80211_he_spr *VAR_3)
{
 struct ieee80211_he_obss_pd *VAR_4 =
     &VAR_2->bss_conf.he_obss_pd;
 const u8 *VAR_5;

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));

 if (!VAR_3)
  return;
 VAR_5 = VAR_3->optional;

 if (VAR_3->he_sr_control &
     VAR_0)
  VAR_5++;
 if (VAR_3->he_sr_control &
     VAR_1) {
  VAR_4->max_offset = *VAR_5++;
  VAR_4->min_offset = *VAR_5++;
  VAR_4->enable = 1;
 }
}
