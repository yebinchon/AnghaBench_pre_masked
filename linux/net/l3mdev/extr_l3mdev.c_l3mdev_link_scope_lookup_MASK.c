
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* l3mdev_ops; } ;
struct net {int dummy; } ;
struct flowi6 {scalar_t__ flowi6_oif; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {struct dst_entry* (* l3mdev_link_scope_lookup ) (struct net_device*,struct flowi6*) ;} ;


 int FUNC_0 (int) ;
 struct net_device* FUNC_1 (struct net*,scalar_t__) ;
 struct net_device* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 () ;
 struct dst_entry* FUNC_6 (struct net_device*,struct flowi6*) ;

struct dst_entry *FUNC_7(struct net *VAR_0,
        struct flowi6 *VAR_1)
{
 struct dst_entry *VAR_2 = ((void*)0);
 struct net_device *VAR_3;

 FUNC_0(!FUNC_5());
 if (VAR_1->flowi6_oif) {
  VAR_3 = FUNC_1(VAR_0, VAR_1->flowi6_oif);
  if (VAR_3 && FUNC_4(VAR_3))
   VAR_3 = FUNC_2(VAR_3);

  if (VAR_3 && FUNC_3(VAR_3) &&
      VAR_3->l3mdev_ops->l3mdev_link_scope_lookup)
   VAR_2 = VAR_3->l3mdev_ops->l3mdev_link_scope_lookup(VAR_3, VAR_1);
 }

 return VAR_2;
}
