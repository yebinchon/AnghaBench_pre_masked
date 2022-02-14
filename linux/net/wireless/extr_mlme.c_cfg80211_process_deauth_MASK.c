
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
struct TYPE_8__ {TYPE_1__ deauth; } ;
struct ieee80211_mgmt {int sa; TYPE_2__ u; int * bssid; } ;
struct cfg80211_registered_device {int dummy; } ;
struct TYPE_11__ {int const* dev_addr; } ;
struct TYPE_9__ {int bssid; } ;
struct TYPE_10__ {TYPE_3__ pub; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *,int ,int ,int) ;
 int FUNC_1 (struct wireless_dev*) ;
 int FUNC_2 (int ,int const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cfg80211_registered_device*,TYPE_5__*,int const*,size_t,int ) ;
 struct cfg80211_registered_device* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct wireless_dev *VAR_1,
        const u8 *VAR_2, size_t VAR_3)
{
 struct cfg80211_registered_device *VAR_4 = FUNC_5(VAR_1->wiphy);
 struct ieee80211_mgmt *VAR_5 = (struct ieee80211_mgmt *)VAR_2;
 const u8 *VAR_6 = VAR_5->bssid;
 u16 VAR_7 = FUNC_3(VAR_5->u.deauth.reason_code);
 bool VAR_8 = !FUNC_2(VAR_5->sa, VAR_1->netdev->dev_addr);

 FUNC_4(VAR_4, VAR_1->netdev, VAR_2, VAR_3, VAR_0);

 if (!VAR_1->current_bss ||
     !FUNC_2(VAR_1->current_bss->pub.bssid, VAR_6))
  return;

 FUNC_0(VAR_1->netdev, ((void*)0), 0, VAR_7, VAR_8);
 FUNC_1(VAR_1);
}
