
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {TYPE_1__* l3mdev_ops; } ;
struct TYPE_2__ {int (* l3mdev_fib_table ) (struct net_device const*) ;} ;


 struct net_device* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device const*) ;
 scalar_t__ FUNC_2 (struct net_device const*) ;
 int FUNC_3 (struct net_device const*) ;
 int FUNC_4 (struct net_device const*) ;

u32 FUNC_5(const struct net_device *VAR_0)
{
 u32 VAR_1 = 0;

 if (!VAR_0)
  return 0;

 if (FUNC_1(VAR_0)) {
  if (VAR_0->l3mdev_ops->l3mdev_fib_table)
   VAR_1 = VAR_0->l3mdev_ops->l3mdev_fib_table(VAR_0);
 } else if (FUNC_2(VAR_0)) {



  struct net_device *VAR_2 = (struct net_device *) VAR_0;
  const struct net_device *VAR_3;

  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 &&
      VAR_3->l3mdev_ops->l3mdev_fib_table)
   VAR_1 = VAR_3->l3mdev_ops->l3mdev_fib_table(VAR_3);
 }

 return VAR_1;
}
