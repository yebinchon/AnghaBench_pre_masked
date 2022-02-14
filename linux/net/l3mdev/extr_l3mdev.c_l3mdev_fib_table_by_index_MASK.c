
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 struct net_device* FUNC_0 (struct net*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

u32 FUNC_4(struct net *VAR_0, int VAR_1)
{
 struct net_device *VAR_2;
 u32 VAR_3 = 0;

 if (!VAR_1)
  return 0;

 FUNC_2();

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  VAR_3 = FUNC_1(VAR_2);

 FUNC_3();

 return VAR_3;
}
