
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* can_aggregate_in_amsdu ) (int *,struct sk_buff*,struct sk_buff*) ;} ;


 int FUNC_0 (int *,struct sk_buff*,struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_1(struct ieee80211_local *VAR_0,
          struct sk_buff *VAR_1,
          struct sk_buff *VAR_2)
{
 if (!VAR_0->ops->can_aggregate_in_amsdu)
  return 1;

 return VAR_0->ops->can_aggregate_in_amsdu(&VAR_0->hw, VAR_1, VAR_2);
}
