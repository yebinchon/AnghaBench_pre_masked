
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct survey_info {int dummy; } ;
struct net_device {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* dump_survey ) (int *,struct net_device*,int,struct survey_info*) ;} ;


 int FUNC_0 (int *,struct net_device*,int,struct survey_info*) ;
 int FUNC_1 (int *,struct net_device*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,struct survey_info*) ;

__attribute__((used)) static inline int FUNC_4(struct cfg80211_registered_device *VAR_0,
       struct net_device *VAR_1, int VAR_2,
       struct survey_info *VAR_3)
{
 int VAR_4;
 FUNC_1(&VAR_0->wiphy, VAR_1, VAR_2);
 VAR_4 = VAR_0->ops->dump_survey(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  FUNC_2(&VAR_0->wiphy, VAR_4);
 else
  FUNC_3(&VAR_0->wiphy, VAR_4, VAR_3);
 return VAR_4;
}
