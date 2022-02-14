
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct TYPE_6__ {scalar_t__ ssid_len; int ssid; } ;
struct cfg80211_external_auth_params {int pmkid; int status; int bssid; TYPE_3__ ssid; } ;
typedef int params ;
struct TYPE_5__ {scalar_t__ iftype; } ;
struct TYPE_4__ {int external_auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct cfg80211_external_auth_params*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct net_device*,struct net_device*,struct cfg80211_external_auth_params*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_10, struct genl_info *VAR_11)
{
 struct cfg80211_registered_device *VAR_12 = VAR_11->user_ptr[0];
 struct net_device *VAR_13 = VAR_11->user_ptr[1];
 struct cfg80211_external_auth_params VAR_14;

 if (!VAR_12->ops->external_auth)
  return -VAR_1;

 if (!VAR_11->attrs[VAR_6] &&
     VAR_13->ieee80211_ptr->iftype != VAR_8 &&
     VAR_13->ieee80211_ptr->iftype != VAR_9)
  return -VAR_0;

 if (!VAR_11->attrs[VAR_4])
  return -VAR_0;

 if (!VAR_11->attrs[VAR_7])
  return -VAR_0;

 FUNC_1(&VAR_14, 0, sizeof(VAR_14));

 if (VAR_11->attrs[VAR_6]) {
  VAR_14.ssid.ssid_len = FUNC_4(VAR_11->attrs[VAR_6]);
  if (VAR_14.ssid.ssid_len == 0 ||
      VAR_14.ssid.ssid_len > VAR_3)
   return -VAR_0;
  FUNC_0(VAR_14.ssid.ssid,
         FUNC_2(VAR_11->attrs[VAR_6]),
         VAR_14.ssid.ssid_len);
 }

 FUNC_0(VAR_14.bssid, FUNC_2(VAR_11->attrs[VAR_4]),
        VAR_2);

 VAR_14.status = FUNC_3(VAR_11->attrs[VAR_7]);

 if (VAR_11->attrs[VAR_5])
  VAR_14.pmkid = FUNC_2(VAR_11->attrs[VAR_5]);

 return FUNC_5(VAR_12, VAR_13, &VAR_14);
}
