
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int scan_req; scalar_t__ scan_msg; TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct genl_info {struct wireless_dev** user_ptr; } ;
struct cfg80211_registered_device {int scan_req; scalar_t__ scan_msg; TYPE_1__* ops; } ;
struct TYPE_2__ {int abort_scan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wireless_dev*,struct wireless_dev*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_2, struct genl_info *VAR_3)
{
 struct cfg80211_registered_device *VAR_4 = VAR_3->user_ptr[0];
 struct wireless_dev *VAR_5 = VAR_3->user_ptr[1];

 if (!VAR_4->ops->abort_scan)
  return -VAR_1;

 if (VAR_4->scan_msg)
  return 0;

 if (!VAR_4->scan_req)
  return -VAR_0;

 FUNC_0(VAR_4, VAR_5);
 return 0;
}
