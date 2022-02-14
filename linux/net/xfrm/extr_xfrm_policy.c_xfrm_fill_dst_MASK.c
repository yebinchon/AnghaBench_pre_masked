
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfrm_policy_afinfo {int (* fill_dst ) (struct xfrm_dst*,struct net_device*,struct flowi const*) ;} ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_6__ {TYPE_2__ dst; } ;
struct xfrm_dst {TYPE_3__ u; } ;
struct net_device {int dummy; } ;
struct flowi {int dummy; } ;
struct TYPE_4__ {int family; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct xfrm_dst*,struct net_device*,struct flowi const*) ;
 struct xfrm_policy_afinfo* FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct xfrm_dst *VAR_1, struct net_device *VAR_2,
    const struct flowi *VAR_3)
{
 const struct xfrm_policy_afinfo *VAR_4 =
  FUNC_2(VAR_1->u.dst.ops->family);
 int VAR_5;

 if (!VAR_4)
  return -VAR_0;

 VAR_5 = VAR_4->fill_dst(VAR_1, VAR_2, VAR_3);

 FUNC_0();

 return VAR_5;
}
