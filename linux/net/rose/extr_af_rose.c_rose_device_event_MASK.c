
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int type; } ;




 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 struct net_device* FUNC_2 (void*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_3,
        unsigned long VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = FUNC_2(VAR_5);

 if (!FUNC_1(FUNC_0(VAR_6), &VAR_2))
  return VAR_1;

 if (VAR_4 != VAR_0)
  return VAR_1;

 switch (VAR_6->type) {
 case 128:
  FUNC_3(VAR_6);
  break;
 case 129:
  FUNC_4(VAR_6);
  FUNC_5(VAR_6);
  break;
 }

 return VAR_1;
}
