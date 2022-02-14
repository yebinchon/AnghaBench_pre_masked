
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_wakeup ) (int *,int) ;} ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline void FUNC_3(struct cfg80211_registered_device *VAR_0,
       bool VAR_1)
{
 FUNC_2(&VAR_0->wiphy, VAR_1);
 VAR_0->ops->set_wakeup(&VAR_0->wiphy, VAR_1);
 FUNC_1(&VAR_0->wiphy);
}
