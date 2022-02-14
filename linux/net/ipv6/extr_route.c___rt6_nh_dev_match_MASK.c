
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_nh_dm_arg {int flags; int oif; int saddr; int net; struct fib6_nh* nh; } ;
struct fib6_nh {int dummy; } ;


 int FUNC_0 (int ,struct fib6_nh*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct fib6_nh *VAR_0, void *VAR_1)
{
 struct fib6_nh_dm_arg *VAR_2 = VAR_1;

 VAR_2->nh = VAR_0;
 return FUNC_0(VAR_2->net, VAR_0, VAR_2->saddr, VAR_2->oif,
      VAR_2->flags);
}
