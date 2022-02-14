
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* tdls_mgmt ) (int *,struct net_device*,int *,int ,int ,int ,int ,int,int const*,size_t) ;} ;


 int FUNC_0 (int *,struct net_device*,int *,int ,int ,int ,int ,int,int const*,size_t) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct net_device*,int *,int ,int ,int ,int ,int,int const*,size_t) ;

__attribute__((used)) static inline int FUNC_3(struct cfg80211_registered_device *VAR_0,
     struct net_device *VAR_1, u8 *VAR_2,
     u8 VAR_3, u8 VAR_4,
     u16 VAR_5, u32 VAR_6,
     bool VAR_7, const u8 *VAR_8, size_t VAR_9)
{
 int VAR_10;
 FUNC_2(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3,
        VAR_4, VAR_5, VAR_6,
        VAR_7, VAR_8, VAR_9);
 VAR_10 = VAR_0->ops->tdls_mgmt(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_5, VAR_6,
       VAR_7, VAR_8, VAR_9);
 FUNC_1(&VAR_0->wiphy, VAR_10);
 return VAR_10;
}
