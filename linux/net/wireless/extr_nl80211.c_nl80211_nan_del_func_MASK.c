
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wireless_dev {scalar_t__ iftype; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int * attrs; struct wireless_dev** user_ptr; } ;
struct cfg80211_registered_device {scalar_t__ iftype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wireless_dev*,struct wireless_dev*,int ) ;
 int FUNC_2 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_5,
          struct genl_info *VAR_6)
{
 struct cfg80211_registered_device *VAR_7 = VAR_6->user_ptr[0];
 struct wireless_dev *VAR_8 = VAR_6->user_ptr[1];
 u64 VAR_9;

 if (VAR_8->iftype != VAR_4)
  return -VAR_2;

 if (!FUNC_2(VAR_8))
  return -VAR_1;

 if (!VAR_6->attrs[VAR_3])
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_6->attrs[VAR_3]);

 FUNC_1(VAR_7, VAR_8, VAR_9);

 return 0;
}
