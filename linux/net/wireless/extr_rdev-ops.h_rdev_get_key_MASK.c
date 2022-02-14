
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_key ) (int *,struct net_device*,int ,int,int const*,void*,void (*) (void*,struct key_params*)) ;} ;


 int FUNC_0 (int *,struct net_device*,int ,int,int const*,void*,void (*) (void*,struct key_params*)) ;
 int FUNC_1 (int *,struct net_device*,int ,int,int const*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline int
FUNC_3(struct cfg80211_registered_device *VAR_0, struct net_device *VAR_1,
      u8 VAR_2, bool VAR_3, const u8 *VAR_4, void *VAR_5,
      void (*VAR_6)(void *VAR_7, struct key_params*))
{
 int VAR_8;
 FUNC_1(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_8 = VAR_0->ops->get_key(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6);
 FUNC_2(&VAR_0->wiphy, VAR_8);
 return VAR_8;
}
