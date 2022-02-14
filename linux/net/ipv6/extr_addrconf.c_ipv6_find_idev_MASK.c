
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct inet6_dev {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct inet6_dev*) ;
 struct inet6_dev* FUNC_2 (struct net_device*) ;
 struct inet6_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct inet6_dev*) ;

__attribute__((used)) static struct inet6_dev *FUNC_5(struct net_device *VAR_1)
{
 struct inet6_dev *VAR_2;

 FUNC_0();

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2) {
  VAR_2 = FUNC_3(VAR_1);
  if (FUNC_1(VAR_2))
   return VAR_2;
 }

 if (VAR_1->flags&VAR_0)
  FUNC_4(VAR_2);
 return VAR_2;
}
