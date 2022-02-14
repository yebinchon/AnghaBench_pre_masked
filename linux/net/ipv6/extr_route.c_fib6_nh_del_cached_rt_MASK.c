
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_nh_del_cached_rt_arg {int f6i; int cfg; } ;
struct fib6_nh {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct fib6_nh*) ;

__attribute__((used)) static int FUNC_1(struct fib6_nh *VAR_1, void *VAR_2)
{
 struct fib6_nh_del_cached_rt_arg *VAR_3 = VAR_2;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->cfg, VAR_3->f6i, VAR_1);
 return VAR_4 != -VAR_0 ? VAR_4 : 0;
}
