
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct key_params {int mode; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* add_key ) (int *,struct net_device*,int ,int,int const*,struct key_params*) ;} ;


 int FUNC_0 (int *,struct net_device*,int ,int,int const*,struct key_params*) ;
 int FUNC_1 (int *,struct net_device*,int ,int,int const*,int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline int FUNC_3(struct cfg80211_registered_device *VAR_0,
          struct net_device *VAR_1, u8 VAR_2,
          bool VAR_3, const u8 *VAR_4,
          struct key_params *VAR_5)
{
 int VAR_6;
 FUNC_1(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5->mode);
 VAR_6 = VAR_0->ops->add_key(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5);
 FUNC_2(&VAR_0->wiphy, VAR_6);
 return VAR_6;
}
