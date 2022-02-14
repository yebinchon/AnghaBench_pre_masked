
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sta_info {int sta; scalar_t__ uploaded; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_expected_throughput ) (int *,int *) ;} ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211_local*,int ) ;

__attribute__((used)) static inline u32 FUNC_3(struct ieee80211_local *VAR_0,
           struct sta_info *VAR_1)
{
 u32 VAR_2 = 0;

 FUNC_1(&VAR_1->sta);
 if (VAR_0->ops->get_expected_throughput && VAR_1->uploaded)
  VAR_2 = VAR_0->ops->get_expected_throughput(&VAR_0->hw, &VAR_1->sta);
 FUNC_2(VAR_0, VAR_2);

 return VAR_2;
}
