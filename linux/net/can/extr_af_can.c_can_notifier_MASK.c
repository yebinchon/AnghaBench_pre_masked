
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {scalar_t__ type; int ml_priv; } ;


 scalar_t__ VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 struct net_device* FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_2, unsigned long VAR_3,
   void *VAR_4)
{
 struct net_device *VAR_5 = FUNC_1(VAR_4);

 if (VAR_5->type != VAR_0)
  return VAR_1;

 switch (VAR_3) {
 case 128:
  FUNC_0(!VAR_5->ml_priv,
       "No CAN mid layer private allocated, please fix your driver and use alloc_candev()!\n");
  break;
 }

 return VAR_1;
}
