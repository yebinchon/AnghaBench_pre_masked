
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wireless_dev {TYPE_2__* current_bss; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;
struct cfg80211_disassoc_request {int local_state_change; int ie_len; TYPE_1__* bss; int const* ie; int reason_code; } ;
struct TYPE_3__ {int bssid; } ;
struct TYPE_4__ {TYPE_1__ pub; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int const*) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct net_device*,struct cfg80211_disassoc_request*) ;

int FUNC_4(struct cfg80211_registered_device *VAR_1,
      struct net_device *VAR_2, const u8 *VAR_3,
      const u8 *VAR_4, int VAR_5, u16 VAR_6,
      bool VAR_7)
{
 struct wireless_dev *VAR_8 = VAR_2->ieee80211_ptr;
 struct cfg80211_disassoc_request VAR_9 = {
  .reason_code = VAR_6,
  .local_state_change = VAR_7,
  .ie = VAR_4,
  .ie_len = VAR_5,
 };
 int VAR_10;

 FUNC_0(VAR_8);

 if (!VAR_8->current_bss)
  return -VAR_0;

 if (FUNC_2(VAR_8->current_bss->pub.bssid, VAR_3))
  VAR_9.bss = &VAR_8->current_bss->pub;
 else
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_1, VAR_2, &VAR_9);
 if (VAR_10)
  return VAR_10;


 FUNC_1(VAR_8->current_bss);
 return 0;
}
