
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 struct inet6_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct inet6_dev*,struct in6_addr const*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, const struct in6_addr *VAR_2)
{
 struct inet6_dev *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3)
  return -VAR_0;
 return FUNC_1(VAR_3, VAR_2);
}
