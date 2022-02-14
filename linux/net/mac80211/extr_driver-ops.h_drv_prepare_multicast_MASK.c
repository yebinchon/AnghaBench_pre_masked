
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct netdev_hw_addr_list {int count; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* prepare_multicast ) (int *,struct netdev_hw_addr_list*) ;} ;


 int FUNC_0 (int *,struct netdev_hw_addr_list*) ;
 int FUNC_1 (struct ieee80211_local*,int ) ;
 int FUNC_2 (struct ieee80211_local*,int ) ;

__attribute__((used)) static inline u64 FUNC_3(struct ieee80211_local *VAR_0,
     struct netdev_hw_addr_list *VAR_1)
{
 u64 VAR_2 = 0;

 FUNC_1(VAR_0, VAR_1->count);

 if (VAR_0->ops->prepare_multicast)
  VAR_2 = VAR_0->ops->prepare_multicast(&VAR_0->hw, VAR_1);

 FUNC_2(VAR_0, VAR_2);

 return VAR_2;
}
