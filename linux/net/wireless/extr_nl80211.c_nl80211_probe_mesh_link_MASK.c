
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {scalar_t__ iftype; } ;
struct station_info {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int * dev_addr; TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct ethhdr {int dummy; } ;
struct cfg80211_registered_device {int * dev_addr; TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct TYPE_2__ {int get_station; int probe_mesh_link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct genl_info*,char*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int const*,int *) ;
 scalar_t__ FUNC_2 (int const*) ;
 void* FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,struct net_device*,int *,struct station_info*) ;
 int FUNC_6 (struct net_device*,struct net_device*,int *,int const*,size_t) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct cfg80211_registered_device *VAR_8 = VAR_7->user_ptr[0];
 struct net_device *VAR_9 = VAR_7->user_ptr[1];
 struct wireless_dev *VAR_10 = VAR_9->ieee80211_ptr;
 struct station_info VAR_11 = {};
 const u8 *VAR_12;
 size_t VAR_13;
 u8 *VAR_14;
 int VAR_15;

 if (!VAR_8->ops->probe_mesh_link || !VAR_8->ops->get_station)
  return -VAR_1;

 if (!VAR_7->attrs[VAR_4] ||
     !VAR_7->attrs[VAR_3]) {
  FUNC_0(VAR_7, "Frame or MAC missing");
  return -VAR_0;
 }

 if (VAR_10->iftype != VAR_5)
  return -VAR_1;

 VAR_14 = FUNC_3(VAR_7->attrs[VAR_4]);
 VAR_12 = FUNC_3(VAR_7->attrs[VAR_3]);
 VAR_13 = FUNC_4(VAR_7->attrs[VAR_3]);

 if (VAR_13 < sizeof(struct ethhdr))
  return -VAR_0;

 if (!FUNC_1(VAR_12, VAR_14) || FUNC_2(VAR_12) ||
     !FUNC_1(VAR_12 + VAR_2, VAR_9->dev_addr))
  return -VAR_0;

 VAR_15 = FUNC_5(VAR_8, VAR_9, VAR_14, &VAR_11);
 if (VAR_15)
  return VAR_15;

 return FUNC_6(VAR_8, VAR_9, VAR_14, VAR_12, VAR_13);
}
