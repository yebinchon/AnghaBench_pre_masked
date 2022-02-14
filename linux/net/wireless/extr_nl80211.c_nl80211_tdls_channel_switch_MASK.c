
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {int iftype; int wiphy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int features; } ;
struct net_device {TYPE_3__ wiphy; struct wireless_dev* ieee80211_ptr; TYPE_1__* ops; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_3__ wiphy; struct wireless_dev* ieee80211_ptr; TYPE_1__* ops; } ;
struct cfg80211_chan_def {scalar_t__ width; TYPE_2__* chan; } ;
struct TYPE_5__ {scalar_t__ band; } ;
struct TYPE_4__ {int tdls_channel_switch; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;


 scalar_t__ FUNC_0 (int ,struct cfg80211_chan_def*,int) ;
 int FUNC_1 (TYPE_3__*,struct cfg80211_chan_def*,int) ;
 int FUNC_2 (struct net_device*,struct genl_info*,struct cfg80211_chan_def*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,struct net_device*,int const*,int ,struct cfg80211_chan_def*) ;
 int FUNC_6 (struct wireless_dev*) ;
 int FUNC_7 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_8,
           struct genl_info *VAR_9)
{
 struct cfg80211_registered_device *VAR_10 = VAR_9->user_ptr[0];
 struct net_device *VAR_11 = VAR_9->user_ptr[1];
 struct wireless_dev *VAR_12 = VAR_11->ieee80211_ptr;
 struct cfg80211_chan_def VAR_13 = {};
 const u8 *VAR_14;
 u8 VAR_15;
 int VAR_16;

 if (!VAR_10->ops->tdls_channel_switch ||
     !(VAR_10->wiphy.features & VAR_7))
  return -VAR_1;

 switch (VAR_11->ieee80211_ptr->iftype) {
 case 128:
 case 129:
  break;
 default:
  return -VAR_1;
 }

 if (!VAR_9->attrs[VAR_2] ||
     !VAR_9->attrs[VAR_3])
  return -VAR_0;

 VAR_16 = FUNC_2(VAR_10, VAR_9, &VAR_13);
 if (VAR_16)
  return VAR_16;






 if (VAR_13.chan->band == VAR_4 &&
     VAR_13.width != VAR_6 &&
     VAR_13.width != VAR_5)
  return -VAR_0;


 if (!FUNC_1(&VAR_10->wiphy, &VAR_13,
        VAR_12->iftype))
  return -VAR_0;


 if (FUNC_0(VAR_12->wiphy, &VAR_13, VAR_12->iftype))
  return -VAR_0;

 VAR_14 = FUNC_3(VAR_9->attrs[VAR_2]);
 VAR_15 = FUNC_4(VAR_9->attrs[VAR_3]);

 FUNC_6(VAR_12);
 VAR_16 = FUNC_5(VAR_10, VAR_11, VAR_14, VAR_15, &VAR_13);
 FUNC_7(VAR_12);

 return VAR_16;
}
