
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct cfg80211_pmsr_request {int cookie; } ;
struct TYPE_2__ {int (* abort_pmsr ) (int *,struct wireless_dev*,struct cfg80211_pmsr_request*) ;} ;


 int FUNC_0 (int *,struct wireless_dev*,struct cfg80211_pmsr_request*) ;
 int FUNC_1 (int *,struct wireless_dev*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(struct cfg80211_registered_device *VAR_0,
  struct wireless_dev *VAR_1,
  struct cfg80211_pmsr_request *VAR_2)
{
 FUNC_1(&VAR_0->wiphy, VAR_1, VAR_2->cookie);
 if (VAR_0->ops->abort_pmsr)
  VAR_0->ops->abort_pmsr(&VAR_0->wiphy, VAR_1, VAR_2);
 FUNC_2(&VAR_0->wiphy);
}
