
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int num_tc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*) ;

int FUNC_1(struct net_device *VAR_3, u16 VAR_4)
{

 if (FUNC_0(VAR_3))
  return -VAR_1;






 if (VAR_4 > VAR_2)
  return -VAR_0;

 VAR_3->num_tc = -VAR_4;

 return 0;
}
