
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct inet6_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct inet6_dev*,struct in6_addr const*) ;

int FUNC_3(struct net_device *VAR_1, const struct in6_addr *VAR_2)
{
 struct inet6_dev *VAR_3;
 int VAR_4;

 FUNC_0();

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  VAR_4 = -VAR_0;
 else
  VAR_4 = FUNC_2(VAR_3, VAR_2);

 return VAR_4;
}
