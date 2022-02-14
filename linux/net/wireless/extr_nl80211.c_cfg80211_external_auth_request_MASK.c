
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int conn_owner_nlportid; int wiphy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; } ;
struct TYPE_2__ {int ssid; int ssid_len; } ;
struct cfg80211_external_auth_params {TYPE_1__ ssid; int bssid; int action; int key_mgmt_suite; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int ,struct sk_buff*,int ) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 struct cfg80211_registered_device* FUNC_8 (int ) ;

int FUNC_9(struct net_device *VAR_12,
       struct cfg80211_external_auth_params *VAR_13,
       gfp_t VAR_14)
{
 struct wireless_dev *VAR_15 = VAR_12->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_16 = FUNC_8(VAR_15->wiphy);
 struct sk_buff *VAR_17;
 void *VAR_18;

 if (!VAR_15->conn_owner_nlportid)
  return -VAR_0;

 VAR_17 = FUNC_6(VAR_11, VAR_14);
 if (!VAR_17)
  return -VAR_2;

 VAR_18 = FUNC_2(VAR_17, 0, 0, 0, VAR_10);
 if (!VAR_18)
  goto nla_put_failure;

 if (FUNC_4(VAR_17, VAR_9, VAR_16->wiphy_idx) ||
     FUNC_4(VAR_17, VAR_7, VAR_12->ifindex) ||
     FUNC_4(VAR_17, VAR_4, VAR_13->key_mgmt_suite) ||
     FUNC_4(VAR_17, VAR_6,
   VAR_13->action) ||
     FUNC_3(VAR_17, VAR_5, VAR_3, VAR_13->bssid) ||
     FUNC_3(VAR_17, VAR_8, VAR_13->ssid.ssid_len,
      VAR_13->ssid.ssid))
  goto nla_put_failure;

 FUNC_0(VAR_17, VAR_18);
 FUNC_1(FUNC_7(&VAR_16->wiphy), VAR_17,
   VAR_15->conn_owner_nlportid);
 return 0;

 nla_put_failure:
 FUNC_5(VAR_17);
 return -VAR_1;
}
