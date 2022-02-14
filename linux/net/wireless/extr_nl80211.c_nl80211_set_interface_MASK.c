
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int iftype; int use_4addr; int mesh_id_up_len; int ssid; } ;
struct vif_params {int use_4addr; } ;
struct sk_buff {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {struct wireless_dev* ieee80211_ptr; } ;
typedef int params ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct net_device*,struct net_device*,int,struct vif_params*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct vif_params*,int ,int) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,struct wireless_dev*,int ) ;
 int FUNC_6 (struct net_device*,int,struct genl_info*,struct vif_params*) ;
 int FUNC_7 (struct net_device*,struct net_device*,int,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct wireless_dev*) ;
 int FUNC_13 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct cfg80211_registered_device *VAR_11 = VAR_10->user_ptr[0];
 struct vif_params VAR_12;
 int VAR_13;
 enum nl80211_iftype VAR_14, VAR_15;
 struct net_device *VAR_16 = VAR_10->user_ptr[1];
 bool VAR_17 = 0;

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));

 VAR_14 = VAR_15 = VAR_16->ieee80211_ptr->iftype;

 if (VAR_10->attrs[VAR_5]) {
  VAR_15 = FUNC_9(VAR_10->attrs[VAR_5]);
  if (VAR_14 != VAR_15)
   VAR_17 = 1;
 }

 if (VAR_10->attrs[VAR_6]) {
  struct wireless_dev *VAR_18 = VAR_16->ieee80211_ptr;

  if (VAR_15 != VAR_8)
   return -VAR_1;
  if (FUNC_4(VAR_16))
   return -VAR_0;

  FUNC_12(VAR_18);
  FUNC_0(VAR_3 !=
        VAR_2);
  VAR_18->mesh_id_up_len =
   FUNC_11(VAR_10->attrs[VAR_6]);
  FUNC_2(VAR_18->ssid, FUNC_8(VAR_10->attrs[VAR_6]),
         VAR_18->mesh_id_up_len);
  FUNC_13(VAR_18);
 }

 if (VAR_10->attrs[VAR_4]) {
  VAR_12.use_4addr = !!FUNC_10(VAR_10->attrs[VAR_4]);
  VAR_17 = 1;
  VAR_13 = FUNC_7(VAR_11, VAR_16, VAR_12.use_4addr, VAR_15);
  if (VAR_13)
   return VAR_13;
 } else {
  VAR_12.use_4addr = -1;
 }

 VAR_13 = FUNC_6(VAR_11, VAR_15, VAR_10, &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;
 if (VAR_13 > 0)
  VAR_17 = 1;

 if (VAR_17)
  VAR_13 = FUNC_1(VAR_11, VAR_16, VAR_15, &VAR_12);
 else
  VAR_13 = 0;

 if (!VAR_13 && VAR_12.use_4addr != -1)
  VAR_16->ieee80211_ptr->use_4addr = VAR_12.use_4addr;

 if (VAR_17 && !VAR_13) {
  struct wireless_dev *VAR_19 = VAR_16->ieee80211_ptr;

  FUNC_5(VAR_11, VAR_19, VAR_7);
 }

 return VAR_13;
}
