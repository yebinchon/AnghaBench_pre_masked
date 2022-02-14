
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {int dummy; } ;
struct fib6_result {struct fib6_nh* nh; struct fib6_info* f6i; } ;
struct fib6_nh {int dummy; } ;
struct fib6_info {int dummy; } ;
struct fib6_config {int fc_src; int fc_dst; } ;


 int FUNC_0 (struct rt6_info*,struct fib6_config*) ;
 struct rt6_info* FUNC_1 (struct fib6_result*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct fib6_config *VAR_0, struct fib6_info *VAR_1,
        struct fib6_nh *VAR_2)
{
 struct fib6_result VAR_3 = {
  .f6i = VAR_1,
  .nh = VAR_2,
 };
 struct rt6_info *VAR_4;

 VAR_4 = FUNC_1(&VAR_3, &VAR_0->fc_dst, &VAR_0->fc_src);
 if (VAR_4)
  return FUNC_0(VAR_4, VAR_0);

 return 0;
}
