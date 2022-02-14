
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_nh_pcpu_arg {int table; int from; } ;
struct fib6_nh {int dummy; } ;


 int FUNC_0 (struct fib6_nh*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct fib6_nh *VAR_0, void *VAR_1)
{
 struct fib6_nh_pcpu_arg *VAR_2 = VAR_1;

 FUNC_0(VAR_0, VAR_2->from, VAR_2->table);
 return 0;
}
