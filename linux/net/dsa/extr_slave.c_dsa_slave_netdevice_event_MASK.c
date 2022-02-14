
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,void*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,void*) ;
 struct net_device* FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_2,
         unsigned long VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = FUNC_3(VAR_4);

 if (VAR_3 == VAR_0) {
  if (!FUNC_1(VAR_5))
   return FUNC_2(VAR_5, VAR_4);

  return FUNC_0(VAR_5, VAR_4);
 }

 return VAR_1;
}
