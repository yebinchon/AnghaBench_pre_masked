
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {int wiphy; } ;
struct station_info {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int get_station; } ;


 int VAR_0 ;
 int FUNC_0 (struct station_info*,int ,int) ;
 int FUNC_1 (struct cfg80211_registered_device*,struct net_device*,int const*,struct station_info*) ;
 struct cfg80211_registered_device* FUNC_2 (int ) ;

int FUNC_3(struct net_device *VAR_1, const u8 *VAR_2,
    struct station_info *VAR_3)
{
 struct cfg80211_registered_device *VAR_4;
 struct wireless_dev *VAR_5;

 VAR_5 = VAR_1->ieee80211_ptr;
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_5->wiphy);
 if (!VAR_4->ops->get_station)
  return -VAR_0;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));

 return FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3);
}
