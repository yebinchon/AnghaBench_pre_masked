
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int * bssid; } ;
struct TYPE_4__ {TYPE_1__ connect; int * bssid; } ;
struct wireless_dev {scalar_t__ iftype; TYPE_2__ wext; scalar_t__ conn; int wiphy; } ;
struct sockaddr {scalar_t__ sa_family; int * sa_data; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct cfg80211_registered_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct cfg80211_registered_device*,struct net_device*,int ,int) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (struct wireless_dev*) ;
 int FUNC_8 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_9 (int ) ;

int FUNC_10(struct net_device *VAR_5,
       struct iw_request_info *VAR_6,
       struct sockaddr *VAR_7, char *VAR_8)
{
 struct wireless_dev *VAR_9 = VAR_5->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_10 = FUNC_9(VAR_9->wiphy);
 u8 *VAR_11 = VAR_7->sa_data;
 int VAR_12;


 if (FUNC_0(VAR_9->iftype != VAR_3))
  return -VAR_1;

 if (VAR_7->sa_family != VAR_0)
  return -VAR_1;


 if (FUNC_5(VAR_11) || FUNC_4(VAR_11))
  VAR_11 = ((void*)0);

 FUNC_7(VAR_9);

 if (VAR_9->conn) {
  VAR_12 = 0;

  if (!VAR_11 && !VAR_9->wext.connect.bssid)
   goto out;


  if (VAR_9->wext.connect.bssid && VAR_11 &&
      FUNC_3(VAR_11, VAR_9->wext.connect.bssid))
   goto out;

  VAR_12 = FUNC_1(VAR_10, VAR_5,
       VAR_4, 0);
  if (VAR_12)
   goto out;
 }

 if (VAR_11) {
  FUNC_6(VAR_9->wext.bssid, VAR_11, VAR_2);
  VAR_9->wext.connect.bssid = VAR_9->wext.bssid;
 } else
  VAR_9->wext.connect.bssid = ((void*)0);

 VAR_12 = FUNC_2(VAR_10, VAR_9);
 out:
 FUNC_8(VAR_9);
 return VAR_12;
}
