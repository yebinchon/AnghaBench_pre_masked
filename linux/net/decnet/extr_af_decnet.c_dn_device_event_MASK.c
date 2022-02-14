
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;
 struct net_device* FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_2, unsigned long VAR_3,
      void *VAR_4)
{
 struct net_device *VAR_5 = FUNC_4(VAR_4);

 if (!FUNC_3(FUNC_0(VAR_5), &VAR_1))
  return VAR_0;

 switch (VAR_3) {
 case 128:
  FUNC_2(VAR_5);
  break;
 case 129:
  FUNC_1(VAR_5);
  break;
 default:
  break;
 }

 return VAR_0;
}
