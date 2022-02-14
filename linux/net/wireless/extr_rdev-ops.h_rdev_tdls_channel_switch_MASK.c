
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_2__ {int (* tdls_channel_switch ) (int *,struct net_device*,int const*,int ,struct cfg80211_chan_def*) ;} ;


 int FUNC_0 (int *,struct net_device*,int const*,int ,struct cfg80211_chan_def*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct net_device*,int const*,int ,struct cfg80211_chan_def*) ;

__attribute__((used)) static inline int
FUNC_3(struct cfg80211_registered_device *VAR_0,
    struct net_device *VAR_1, const u8 *VAR_2,
    u8 VAR_3, struct cfg80211_chan_def *VAR_4)
{
 int VAR_5;

 FUNC_2(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3,
           VAR_4);
 VAR_5 = VAR_0->ops->tdls_channel_switch(&VAR_0->wiphy, VAR_1, VAR_2,
          VAR_3, VAR_4);
 FUNC_1(&VAR_0->wiphy, VAR_5);
 return VAR_5;
}
