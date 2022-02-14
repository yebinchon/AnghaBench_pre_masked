
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt6_info {int dummy; } ;
struct fib6_result {TYPE_1__* nh; } ;
struct TYPE_2__ {int * rt6i_pcpu; } ;


 struct rt6_info* FUNC_0 (int ) ;

__attribute__((used)) static struct rt6_info *FUNC_1(const struct fib6_result *VAR_0)
{
 struct rt6_info *VAR_1;

 VAR_1 = FUNC_0(*VAR_0->nh->rt6i_pcpu);

 return VAR_1;
}
