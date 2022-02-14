
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int features; TYPE_1__* tlsdev_ops; } ;
struct TYPE_2__ {int tls_dev_del; int tls_dev_add; int tls_dev_resync; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (void*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_4, unsigned long VAR_5,
    void *VAR_6)
{
 struct net_device *VAR_7 = FUNC_0(VAR_6);

 if (!VAR_7->tlsdev_ops &&
     !(VAR_7->features & (VAR_0 | VAR_1)))
  return VAR_3;

 switch (VAR_5) {
 case 128:
 case 129:
  if ((VAR_7->features & VAR_0) &&
      !VAR_7->tlsdev_ops->tls_dev_resync)
   return VAR_2;

  if (VAR_7->tlsdev_ops &&
       VAR_7->tlsdev_ops->tls_dev_add &&
       VAR_7->tlsdev_ops->tls_dev_del)
   return VAR_3;
  else
   return VAR_2;
 case 130:
  return FUNC_1(VAR_7);
 }
 return VAR_3;
}
