
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_5 (int ,int *) ;
 struct net_device* FUNC_6 (void*) ;

__attribute__((used)) static int FUNC_7(struct notifier_block *VAR_3, unsigned long VAR_4,
        void *VAR_5)
{
 struct net_device *VAR_6 = FUNC_6(VAR_5);

 if (!FUNC_5(FUNC_4(VAR_6), &VAR_2))
  return VAR_1;


 if (VAR_6->type != VAR_0)
  return VAR_1;

 switch (VAR_4) {
 case 128:
  FUNC_1(VAR_6);
  break;
 case 129:
  FUNC_2(VAR_6);
  FUNC_3(VAR_6);
  FUNC_0(VAR_6);
  break;
 default:
  break;
 }

 return VAR_1;
}
