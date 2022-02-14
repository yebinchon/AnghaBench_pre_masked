
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
 int FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int
FUNC_6(struct notifier_block *VAR_1, unsigned long VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = FUNC_4(VAR_3);


 if (FUNC_5(VAR_4))
  return VAR_0;

 switch (VAR_2) {
 case 130:
  return FUNC_2(VAR_4);
 case 129:
  return FUNC_3(VAR_4);
 case 128:
 case 131:
 case 133:
  return FUNC_0(VAR_4);
 case 132:
  return FUNC_1(VAR_4);
 default:
  return VAR_0;
 }
}
