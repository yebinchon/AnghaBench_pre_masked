
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wireless_dev {int iftype; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







int FUNC_0(struct net_device *VAR_8, struct iw_request_info *VAR_9,
     u32 *VAR_10, char *VAR_11)
{
 struct wireless_dev *VAR_12 = VAR_8->ieee80211_ptr;

 if (!VAR_12)
  return -VAR_0;

 switch (VAR_12->iftype) {
 case 132:
  *VAR_10 = VAR_4;
  break;
 case 129:
  *VAR_10 = VAR_3;
  break;
 case 133:
  *VAR_10 = VAR_1;
  break;
 case 130:
  *VAR_10 = VAR_5;
  break;
 case 128:
  *VAR_10 = VAR_6;
  break;
 case 131:
  *VAR_10 = VAR_7;
  break;
 default:
  *VAR_10 = VAR_2;
  break;
 }
 return 0;
}
