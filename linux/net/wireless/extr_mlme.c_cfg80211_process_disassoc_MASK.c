
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wireless_dev {TYPE_5__* netdev; TYPE_4__* current_bss; int wiphy; } ;
struct TYPE_7__ {int reason_code; } ;
struct TYPE_8__ {TYPE_1__ disassoc; } ;
struct ieee80211_mgmt {int sa; TYPE_2__ u; int * bssid; } ;
struct cfg80211_registered_device {int dummy; } ;
struct TYPE_11__ {int const* dev_addr; } ;
struct TYPE_9__ {int bssid; } ;
struct TYPE_10__ {TYPE_3__ pub; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int *,int ,int ,int) ;
 int FUNC_2 (struct wireless_dev*) ;
 int FUNC_3 (int ,int const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cfg80211_registered_device*,TYPE_5__*,int const*,size_t,int ) ;
 struct cfg80211_registered_device* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct wireless_dev *VAR_1,
          const u8 *VAR_2, size_t VAR_3)
{
 struct cfg80211_registered_device *VAR_4 = FUNC_6(VAR_1->wiphy);
 struct ieee80211_mgmt *VAR_5 = (struct ieee80211_mgmt *)VAR_2;
 const u8 *VAR_6 = VAR_5->bssid;
 u16 VAR_7 = FUNC_4(VAR_5->u.disassoc.reason_code);
 bool VAR_8 = !FUNC_3(VAR_5->sa, VAR_1->netdev->dev_addr);

 FUNC_5(VAR_4, VAR_1->netdev, VAR_2, VAR_3, VAR_0);

 if (FUNC_0(!VAR_1->current_bss ||
      !FUNC_3(VAR_1->current_bss->pub.bssid, VAR_6)))
  return;

 FUNC_1(VAR_1->netdev, ((void*)0), 0, VAR_7, VAR_8);
 FUNC_2(VAR_1);
}
