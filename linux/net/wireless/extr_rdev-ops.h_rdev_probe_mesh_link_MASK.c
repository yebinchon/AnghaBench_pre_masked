
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* probe_mesh_link ) (int *,struct net_device*,void const*,size_t) ;} ;


 int FUNC_0 (int *,struct net_device*,void const*,size_t) ;
 int FUNC_1 (int *,struct net_device*,int const*,void const*,size_t) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline int
FUNC_3(struct cfg80211_registered_device *VAR_0,
       struct net_device *VAR_1, const u8 *VAR_2,
       const void *VAR_3, size_t VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_5 = VAR_0->ops->probe_mesh_link(&VAR_0->wiphy, VAR_1, VAR_3, VAR_4);
 FUNC_2(&VAR_0->wiphy, VAR_5);
 return VAR_5;
}
