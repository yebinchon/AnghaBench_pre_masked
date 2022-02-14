
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wireless_dev {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ieee80211_mgmt {int frame_control; } ;


 int FUNC_0 (struct wireless_dev*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct wireless_dev*,int const*,size_t) ;
 int FUNC_3 (struct wireless_dev*,int const*,size_t) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,int const*,size_t) ;

void FUNC_6(struct net_device *VAR_0, const u8 *VAR_1, size_t VAR_2)
{
 struct wireless_dev *VAR_3 = VAR_0->ieee80211_ptr;
 struct ieee80211_mgmt *VAR_4 = (void *)VAR_1;

 FUNC_0(VAR_3);

 FUNC_5(VAR_0, VAR_1, VAR_2);

 if (FUNC_1(VAR_2 < 2))
  return;

 if (FUNC_4(VAR_4->frame_control))
  FUNC_2(VAR_3, VAR_1, VAR_2);
 else
  FUNC_3(VAR_3, VAR_1, VAR_2);
}
