
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {scalar_t__ type; int * netdev_ops; } ;
struct TYPE_2__ {int number; } ;


 scalar_t__ VAR_0 ;



 unsigned long VAR_1 ;

 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct net_device*) ;
 int VAR_7 ;
 int FUNC_2 (int ,int *) ;
 struct net_device* FUNC_3 (void*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_8, unsigned long VAR_9,
        void *VAR_10)
{
 struct net_device *VAR_11 = FUNC_3(VAR_10);

 if (!FUNC_2(FUNC_1(VAR_11), &VAR_7))
  return VAR_2;

 if (VAR_9 == VAR_1)
  return VAR_2;


 if (VAR_11->type != VAR_0 || VAR_11->netdev_ops != &VAR_6)
  return VAR_2;

 switch (VAR_9) {
 case 128:
  FUNC_4("NETDEV_UP\n");
  FUNC_5(VAR_5, FUNC_0(VAR_11)->number, 0);
  break;
 case 129:
  FUNC_4("NETDEV_DOWN\n");
  FUNC_5(VAR_4, FUNC_0(VAR_11)->number, 0);
  break;
 case 131:
 case 130:
  FUNC_4("NETDEV_CHANGE*\n");
  FUNC_5(VAR_3, FUNC_0(VAR_11)->number, 0);
  break;
 }
 return VAR_2;
}
