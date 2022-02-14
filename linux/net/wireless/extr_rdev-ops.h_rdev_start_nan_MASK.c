
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct cfg80211_nan_conf {int dummy; } ;
struct TYPE_2__ {int (* start_nan ) (int *,struct wireless_dev*,struct cfg80211_nan_conf*) ;} ;


 int FUNC_0 (int *,struct wireless_dev*,struct cfg80211_nan_conf*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct wireless_dev*,struct cfg80211_nan_conf*) ;

__attribute__((used)) static inline int FUNC_3(struct cfg80211_registered_device *VAR_0,
     struct wireless_dev *VAR_1,
     struct cfg80211_nan_conf *VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_0->wiphy, VAR_1, VAR_2);
 VAR_3 = VAR_0->ops->start_nan(&VAR_0->wiphy, VAR_1, VAR_2);
 FUNC_1(&VAR_0->wiphy, VAR_3);
 return VAR_3;
}
