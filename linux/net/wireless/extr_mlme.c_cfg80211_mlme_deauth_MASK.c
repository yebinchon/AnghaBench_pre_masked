
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wireless_dev {scalar_t__ conn_owner_nlportid; TYPE_2__* current_bss; int disconnect_bssid; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;
struct cfg80211_deauth_request {int ie_len; int local_state_change; int const* ie; int reason_code; int const* bssid; } ;
struct TYPE_3__ {int bssid; } ;
struct TYPE_4__ {TYPE_1__ pub; } ;


 int FUNC_0 (struct wireless_dev*) ;
 scalar_t__ FUNC_1 (int ,int const*) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct net_device*,struct cfg80211_deauth_request*) ;

int FUNC_3(struct cfg80211_registered_device *VAR_0,
    struct net_device *VAR_1, const u8 *VAR_2,
    const u8 *VAR_3, int VAR_4, u16 VAR_5,
    bool VAR_6)
{
 struct wireless_dev *VAR_7 = VAR_1->ieee80211_ptr;
 struct cfg80211_deauth_request VAR_8 = {
  .bssid = VAR_2,
  .reason_code = VAR_5,
  .ie = VAR_3,
  .ie_len = VAR_4,
  .local_state_change = VAR_6,
 };

 FUNC_0(VAR_7);

 if (VAR_6 &&
     (!VAR_7->current_bss ||
      !FUNC_1(VAR_7->current_bss->pub.bssid, VAR_2)))
  return 0;

 if (FUNC_1(VAR_7->disconnect_bssid, VAR_2) ||
     (VAR_7->current_bss &&
      FUNC_1(VAR_7->current_bss->pub.bssid, VAR_2)))
  VAR_7->conn_owner_nlportid = 0;

 return FUNC_2(VAR_0, VAR_1, &VAR_8);
}
