
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;





 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, unsigned long VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1) {
 case 130:
  FUNC_1(VAR_0);
  VAR_2 = FUNC_0(VAR_0);
  break;
 case 129:
  VAR_2 = FUNC_0(VAR_0);
  break;
 case 128:
  FUNC_1(VAR_0);
  break;
 }

 return VAR_2;
}
