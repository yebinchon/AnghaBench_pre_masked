
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wireless_dev {int iftype; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int e; int m; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct cfg80211_chan_def {TYPE_2__* chan; } ;
struct TYPE_4__ {int center_freq; } ;
struct TYPE_3__ {int get_channel; } ;


 int VAR_0 ;



 int FUNC_0 (struct net_device*,struct iw_request_info*,struct iw_freq*,char*) ;
 int FUNC_1 (struct net_device*,struct iw_request_info*,struct iw_freq*,char*) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct wireless_dev*,struct cfg80211_chan_def*) ;
 struct cfg80211_registered_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
     struct iw_request_info *VAR_2,
     struct iw_freq *VAR_3, char *VAR_4)
{
 struct wireless_dev *VAR_5 = VAR_1->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_6 = FUNC_3(VAR_5->wiphy);
 struct cfg80211_chan_def VAR_7 = {};
 int VAR_8;

 switch (VAR_5->iftype) {
 case 128:
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 case 130:
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 case 129:
  if (!VAR_6->ops->get_channel)
   return -VAR_0;

  VAR_8 = FUNC_2(VAR_6, VAR_5, &VAR_7);
  if (VAR_8)
   return VAR_8;
  VAR_3->m = VAR_7.chan->center_freq;
  VAR_3->e = 6;
  return 0;
 default:
  return -VAR_0;
 }
}
