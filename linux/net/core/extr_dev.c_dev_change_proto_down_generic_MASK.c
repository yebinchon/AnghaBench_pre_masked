
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int proto_down; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_0, bool VAR_1)
{
 if (VAR_1)
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);
 VAR_0->proto_down = VAR_1;
 return 0;
}
