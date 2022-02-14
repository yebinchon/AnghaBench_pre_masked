
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_nh_del_cached_rt_arg {struct fib6_info* f6i; struct fib6_config* cfg; } ;
struct fib6_info {int nh; } ;
struct fib6_config {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct fib6_nh_del_cached_rt_arg*) ;

__attribute__((used)) static int FUNC_1(struct fib6_config *VAR_1, struct fib6_info *VAR_2)
{
 struct fib6_nh_del_cached_rt_arg VAR_3 = {
  .cfg = VAR_1,
  .f6i = VAR_2
 };

 return FUNC_0(VAR_2->nh, VAR_0, &VAR_3);
}
