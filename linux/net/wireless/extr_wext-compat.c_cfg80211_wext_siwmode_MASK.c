
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vifparams ;
typedef int u32 ;
struct wireless_dev {int iftype; int wiphy; } ;
struct vif_params {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct cfg80211_registered_device {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,int,struct vif_params*) ;
 int FUNC_1 (struct vif_params*,int ,int) ;
 struct cfg80211_registered_device* FUNC_2 (int ) ;

int FUNC_3(struct net_device *VAR_5, struct iw_request_info *VAR_6,
     u32 *VAR_7, char *VAR_8)
{
 struct wireless_dev *VAR_9 = VAR_5->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_10;
 struct vif_params VAR_11;
 enum nl80211_iftype VAR_12;

 VAR_10 = FUNC_2(VAR_9->wiphy);

 switch (*VAR_7) {
 case 130:
  VAR_12 = VAR_3;
  break;
 case 131:
  VAR_12 = VAR_1;
  break;
 case 128:
  VAR_12 = VAR_4;
  break;
 case 129:
  VAR_12 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_12 == VAR_9->iftype)
  return 0;

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));

 return FUNC_0(VAR_10, VAR_5, VAR_12, &VAR_11);
}
