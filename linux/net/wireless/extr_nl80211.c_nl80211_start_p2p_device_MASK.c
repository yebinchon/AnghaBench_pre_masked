
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; int is_running; int opencount; int rfkill; TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct genl_info {struct wireless_dev** user_ptr; } ;
struct cfg80211_registered_device {scalar_t__ iftype; int is_running; int opencount; int rfkill; TYPE_1__* ops; } ;
struct TYPE_2__ {int start_p2p_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct wireless_dev*,struct wireless_dev*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct cfg80211_registered_device *VAR_5 = VAR_4->user_ptr[0];
 struct wireless_dev *VAR_6 = VAR_4->user_ptr[1];
 int VAR_7;

 if (!VAR_5->ops->start_p2p_device)
  return -VAR_0;

 if (VAR_6->iftype != VAR_2)
  return -VAR_0;

 if (FUNC_2(VAR_6))
  return 0;

 if (FUNC_1(VAR_5->rfkill))
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_6->is_running = 1;
 VAR_5->opencount++;

 return 0;
}
