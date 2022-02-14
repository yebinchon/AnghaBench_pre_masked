
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* l3mdev_ops; } ;
struct net {int dummy; } ;
struct flowi {int flowi_iif; int flowi_oif; } ;
struct fib_lookup_arg {int table; } ;
struct TYPE_2__ {int (* l3mdev_fib_table ) (struct net_device*) ;} ;


 struct net_device* FUNC_0 (struct net*,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

int FUNC_6(struct net *VAR_0, struct flowi *VAR_1,
     struct fib_lookup_arg *VAR_2)
{
 struct net_device *VAR_3;
 int VAR_4 = 0;

 FUNC_2();

 VAR_3 = FUNC_0(VAR_0, VAR_1->flowi_oif);
 if (VAR_3 && FUNC_1(VAR_3) &&
     VAR_3->l3mdev_ops->l3mdev_fib_table) {
  VAR_2->table = VAR_3->l3mdev_ops->l3mdev_fib_table(VAR_3);
  VAR_4 = 1;
  goto out;
 }

 VAR_3 = FUNC_0(VAR_0, VAR_1->flowi_iif);
 if (VAR_3 && FUNC_1(VAR_3) &&
     VAR_3->l3mdev_ops->l3mdev_fib_table) {
  VAR_2->table = VAR_3->l3mdev_ops->l3mdev_fib_table(VAR_3);
  VAR_4 = 1;
  goto out;
 }

out:
 FUNC_3();

 return VAR_4;
}
