
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct dn_ifaddr {TYPE_1__* ifa_dev; } ;
struct TYPE_2__ {int dev; int * ifa_list; } ;




 int VAR_0 ;
 int FUNC_0 (struct dn_ifaddr*) ;
 int FUNC_1 (struct dn_ifaddr*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_1, unsigned long VAR_2, void *VAR_3)
{
 struct dn_ifaddr *VAR_4 = (struct dn_ifaddr *)VAR_3;

 switch (VAR_2) {
 case 128:
  FUNC_0(VAR_4);
  FUNC_3(VAR_4->ifa_dev->dev);
  FUNC_4(-1);
  break;
 case 129:
  FUNC_1(VAR_4);
  if (VAR_4->ifa_dev && VAR_4->ifa_dev->ifa_list == ((void*)0)) {
   FUNC_2(VAR_4->ifa_dev->dev, 1);
  } else {
   FUNC_4(-1);
  }
  break;
 }
 return VAR_0;
}
