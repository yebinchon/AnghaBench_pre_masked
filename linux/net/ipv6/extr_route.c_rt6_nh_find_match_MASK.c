
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_nh_frl_arg {int do_rr; int mpri; int strict; int oif; int flags; struct fib6_nh* nh; } ;
struct fib6_nh {int dummy; } ;


 int FUNC_0 (struct fib6_nh*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct fib6_nh *VAR_0, void *VAR_1)
{
 struct fib6_nh_frl_arg *VAR_2 = VAR_1;

 VAR_2->nh = VAR_0;
 return FUNC_0(VAR_0, VAR_2->flags, VAR_2->oif, VAR_2->strict,
     VAR_2->mpri, VAR_2->do_rr);
}
