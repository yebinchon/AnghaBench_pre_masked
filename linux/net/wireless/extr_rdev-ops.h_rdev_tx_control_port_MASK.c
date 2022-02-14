
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
typedef int __be16 ;
struct TYPE_2__ {int (* tx_control_port ) (int *,struct net_device*,void const*,size_t,int const*,int ,int const) ;} ;


 int FUNC_0 (int *,struct net_device*,void const*,size_t,int const*,int ,int const) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct net_device*,void const*,size_t,int const*,int ,int const) ;

__attribute__((used)) static inline int FUNC_3(struct cfg80211_registered_device *VAR_0,
           struct net_device *VAR_1,
           const void *VAR_2, size_t VAR_3,
           const u8 *VAR_4, __be16 VAR_5,
           const bool VAR_6)
{
 int VAR_7;
 FUNC_2(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_5, VAR_6);
 VAR_7 = VAR_0->ops->tx_control_port(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6);
 FUNC_1(&VAR_0->wiphy, VAR_7);
 return VAR_7;
}
