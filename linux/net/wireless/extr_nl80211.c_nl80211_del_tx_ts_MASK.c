
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wireless_dev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {struct wireless_dev* ieee80211_ptr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,struct net_device*,int ,int const*) ;
 int FUNC_3 (struct wireless_dev*) ;
 int FUNC_4 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct cfg80211_registered_device *VAR_5 = VAR_4->user_ptr[0];
 struct net_device *VAR_6 = VAR_4->user_ptr[1];
 struct wireless_dev *VAR_7 = VAR_6->ieee80211_ptr;
 const u8 *VAR_8;
 u8 VAR_9;
 int VAR_10;

 if (!VAR_4->attrs[VAR_2] || !VAR_4->attrs[VAR_1])
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_4->attrs[VAR_2]);
 VAR_8 = FUNC_0(VAR_4->attrs[VAR_1]);

 FUNC_3(VAR_7);
 VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_9, VAR_8);
 FUNC_4(VAR_7);

 return VAR_10;
}
