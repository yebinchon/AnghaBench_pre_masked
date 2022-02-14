
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt6_info {int dst; } ;
struct TYPE_2__ {int mtu6; } ;
struct inet6_dev {TYPE_1__ cnf; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct inet6_dev *VAR_0,
      struct rt6_info *VAR_1, int VAR_2)
{
 if (FUNC_0(&VAR_1->dst) >= VAR_2)
  return 1;

 if (FUNC_0(&VAR_1->dst) == VAR_0->cnf.mtu6)
  return 1;

 return 0;
}
