
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct inet6_dev {int lock; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 struct inet6_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct inet6_dev*,struct in6_addr*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct net_device *VAR_1, struct in6_addr *VAR_2,
      u32 VAR_3)
{
 struct inet6_dev *VAR_4;
 int VAR_5 = -VAR_0;

 FUNC_2();
 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4) {
  FUNC_4(&VAR_4->lock);
  VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3);
  FUNC_5(&VAR_4->lock);
 }
 FUNC_3();
 return VAR_5;
}
