
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct ieee80211_channel* channel; scalar_t__ ssid_len; } ;
struct TYPE_4__ {TYPE_1__ connect; } ;
struct wireless_dev {scalar_t__ iftype; TYPE_2__ wext; scalar_t__ conn; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int dummy; } ;
struct ieee80211_channel {int flags; } ;
struct cfg80211_registered_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct cfg80211_registered_device*,struct net_device*,int ,int) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_3 (struct iw_freq*) ;
 struct ieee80211_channel* FUNC_4 (int ,int) ;
 int FUNC_5 (struct wireless_dev*) ;
 int FUNC_6 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_7 (int ) ;

int FUNC_8(struct net_device *VAR_4,
         struct iw_request_info *VAR_5,
         struct iw_freq *VAR_6, char *VAR_7)
{
 struct wireless_dev *VAR_8 = VAR_4->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_9 = FUNC_7(VAR_8->wiphy);
 struct ieee80211_channel *VAR_10 = ((void*)0);
 int VAR_11, VAR_12;


 if (FUNC_0(VAR_8->iftype != VAR_2))
  return -VAR_0;

 VAR_12 = FUNC_3(VAR_6);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_12) {
  VAR_10 = FUNC_4(VAR_8->wiphy, VAR_12);
  if (!VAR_10)
   return -VAR_0;
  if (VAR_10->flags & VAR_1)
   return -VAR_0;
 }

 FUNC_5(VAR_8);

 if (VAR_8->conn) {
  bool VAR_13 = 1;

  if (VAR_8->wext.connect.channel == VAR_10) {
   VAR_11 = 0;
   goto out;
  }


  if (VAR_8->wext.connect.ssid_len)
   VAR_13 = 0;
  VAR_11 = FUNC_1(VAR_9, VAR_4,
       VAR_3, VAR_13);
  if (VAR_11)
   goto out;
 }

 VAR_8->wext.connect.channel = VAR_10;
 VAR_11 = FUNC_2(VAR_9, VAR_8);
 out:
 FUNC_6(VAR_8);
 return VAR_11;
}
