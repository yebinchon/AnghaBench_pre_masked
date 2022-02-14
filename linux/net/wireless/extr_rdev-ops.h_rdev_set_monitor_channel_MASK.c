
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_2__ {int (* set_monitor_channel ) (int *,struct cfg80211_chan_def*) ;} ;


 int FUNC_0 (int *,struct cfg80211_chan_def*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct cfg80211_chan_def*) ;

__attribute__((used)) static inline int
FUNC_3(struct cfg80211_registered_device *VAR_0,
    struct cfg80211_chan_def *VAR_1)
{
 int VAR_2;
 FUNC_2(&VAR_0->wiphy, VAR_1);
 VAR_2 = VAR_0->ops->set_monitor_channel(&VAR_0->wiphy, VAR_1);
 FUNC_1(&VAR_0->wiphy, VAR_2);
 return VAR_2;
}
