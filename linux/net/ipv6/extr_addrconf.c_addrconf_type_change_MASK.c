
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct inet6_dev {int dummy; } ;


 int FUNC_0 () ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct inet6_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct inet6_dev*) ;
 int FUNC_3 (struct inet6_dev*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2, unsigned long VAR_3)
{
 struct inet6_dev *VAR_4;
 FUNC_0();

 VAR_4 = FUNC_1(VAR_2);

 if (VAR_3 == VAR_0)
  FUNC_2(VAR_4);
 else if (VAR_3 == VAR_1)
  FUNC_3(VAR_4);
}
