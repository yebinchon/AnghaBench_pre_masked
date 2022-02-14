
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; } ;
struct TYPE_2__ {scalar_t__ disable_ipv6; } ;
struct inet6_dev {TYPE_1__ cnf; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct inet6_dev* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct inet6_dev*) ;
 int FUNC_3 (struct net_device*) ;
 struct inet6_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static struct inet6_dev *FUNC_6(struct net_device *VAR_2)
{
 struct inet6_dev *VAR_3;

 FUNC_0();

 VAR_3 = FUNC_4(VAR_2);
 if (FUNC_2(VAR_3))
  return VAR_3;

 if (VAR_3->cnf.disable_ipv6)
  return FUNC_1(-VAR_0);


 if (!(VAR_2->flags & VAR_1) && !FUNC_5(VAR_2))
  FUNC_3(VAR_2);

 return VAR_3;
}
