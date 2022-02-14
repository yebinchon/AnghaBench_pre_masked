
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
struct TYPE_2__ {int ie_len; char* ie; } ;
struct wireless_dev {scalar_t__ iftype; scalar_t__ conn; TYPE_1__ wext; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
struct cfg80211_registered_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,int ,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int,int ) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct wireless_dev*) ;
 int FUNC_5 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_6 (int ) ;

int FUNC_7(struct net_device *VAR_5,
      struct iw_request_info *VAR_6,
      struct iw_point *VAR_7, char *VAR_8)
{
 struct wireless_dev *VAR_9 = VAR_5->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_10 = FUNC_6(VAR_9->wiphy);
 u8 *VAR_11 = VAR_8;
 int VAR_12 = VAR_7->length, VAR_13;

 if (VAR_9->iftype != VAR_3)
  return -VAR_1;

 if (!VAR_12)
  VAR_11 = ((void*)0);

 FUNC_4(VAR_9);


 VAR_13 = 0;
 if (VAR_9->wext.ie_len == VAR_12 &&
     FUNC_3(VAR_9->wext.ie, VAR_11, VAR_12) == 0)
  goto out;

 if (VAR_12) {
  VAR_11 = FUNC_2(VAR_8, VAR_12, VAR_2);
  if (!VAR_11) {
   VAR_13 = -VAR_0;
   goto out;
  }
 } else
  VAR_11 = ((void*)0);

 FUNC_1(VAR_9->wext.ie);
 VAR_9->wext.ie = VAR_11;
 VAR_9->wext.ie_len = VAR_12;

 if (VAR_9->conn) {
  VAR_13 = FUNC_0(VAR_10, VAR_5,
       VAR_4, 0);
  if (VAR_13)
   goto out;
 }


 VAR_13 = 0;
 out:
 FUNC_5(VAR_9);
 return VAR_13;
}
