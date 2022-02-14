
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bssid; } ;
struct wireless_dev {scalar_t__ iftype; TYPE_1__ wext; } ;
struct sockaddr {int sa_data; int sa_family; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4,
       struct iw_request_info *VAR_5,
       struct sockaddr *VAR_6, char *VAR_7)
{
 struct wireless_dev *VAR_8 = VAR_4->ieee80211_ptr;

 if (FUNC_0(VAR_8->iftype != VAR_3))
  return -VAR_1;

 VAR_6->sa_family = VAR_0;
 FUNC_1(&VAR_6->sa_data, VAR_8->wext.bssid, VAR_2);

 return 0;
}
