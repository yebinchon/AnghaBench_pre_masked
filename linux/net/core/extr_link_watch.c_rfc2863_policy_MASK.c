
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned char operstate; int link_mode; } ;




 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 unsigned char VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 == VAR_3->operstate)
  return;

 FUNC_1(&VAR_2);

 switch(VAR_3->link_mode) {
 case 128:
  if (VAR_4 == VAR_1)
   VAR_4 = VAR_0;
  break;

 case 129:
 default:
  break;
 }

 VAR_3->operstate = VAR_4;

 FUNC_2(&VAR_2);
}
