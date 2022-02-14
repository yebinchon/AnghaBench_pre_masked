
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sta_info {int dummy; } ;
struct ieee802_11_elems {int dummy; } ;
struct TYPE_3__ {int twt_requester; } ;
struct TYPE_4__ {TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;


 int VAR_0 ;
 int FUNC_0 (struct sta_info*,struct ieee802_11_elems*) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_sub_if_data *VAR_1,
        struct sta_info *VAR_2,
        struct ieee802_11_elems *VAR_3)
{
 bool VAR_4 = FUNC_0(VAR_2, VAR_3);

 if (VAR_1->vif.bss_conf.twt_requester != VAR_4) {
  VAR_1->vif.bss_conf.twt_requester = VAR_4;
  return VAR_0;
 }
 return 0;
}
