
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct mpath_info {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* dump_mpath ) (int *,struct net_device*,int,int *,int *,struct mpath_info*) ;} ;


 int FUNC_0 (int *,struct net_device*,int,int *,int *,struct mpath_info*) ;
 int FUNC_1 (int *,struct net_device*,int,int *,int *) ;
 int FUNC_2 (int *,int,struct mpath_info*) ;

__attribute__((used)) static inline int FUNC_3(struct cfg80211_registered_device *VAR_0,
      struct net_device *VAR_1, int VAR_2, u8 *VAR_3,
      u8 *VAR_4, struct mpath_info *VAR_5)

{
 int VAR_6;
 FUNC_1(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_6 = VAR_0->ops->dump_mpath(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_5);
 FUNC_2(&VAR_0->wiphy, VAR_6, VAR_5);
 return VAR_6;
}
