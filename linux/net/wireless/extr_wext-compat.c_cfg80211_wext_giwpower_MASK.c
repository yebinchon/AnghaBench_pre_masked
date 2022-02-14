
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int ps; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int disabled; } ;



__attribute__((used)) static int FUNC_0(struct net_device *VAR_0,
      struct iw_request_info *VAR_1,
      struct iw_param *VAR_2, char *VAR_3)
{
 struct wireless_dev *VAR_4 = VAR_0->ieee80211_ptr;

 VAR_2->disabled = !VAR_4->ps;

 return 0;
}
