
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct wireless_dev {int iftype; TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int * attrs; struct wireless_dev** user_ptr; } ;
struct cfg80211_registered_device {int iftype; TYPE_1__* ops; } ;
struct TYPE_2__ {int mgmt_tx_cancel_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wireless_dev*,struct wireless_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct cfg80211_registered_device *VAR_5 = VAR_4->user_ptr[0];
 struct wireless_dev *VAR_6 = VAR_4->user_ptr[1];
 u64 VAR_7;

 if (!VAR_4->attrs[VAR_2])
  return -VAR_0;

 if (!VAR_5->ops->mgmt_tx_cancel_wait)
  return -VAR_1;

 switch (VAR_6->iftype) {
 case 128:
 case 135:
 case 131:
 case 134:
 case 133:
 case 129:
 case 130:
  break;
 case 132:
 default:
  return -VAR_1;
 }

 VAR_7 = FUNC_0(VAR_4->attrs[VAR_2]);

 return FUNC_1(VAR_5, VAR_6, VAR_7);
}
