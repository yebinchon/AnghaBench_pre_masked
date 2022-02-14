
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fib6_nh_rd_arg {int ret; int gw; int fl6; TYPE_1__* res; } ;
struct fib6_nh {int dummy; } ;
struct TYPE_2__ {struct fib6_nh* nh; } ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct fib6_nh *VAR_0, void *VAR_1)
{
 struct fib6_nh_rd_arg *VAR_2 = VAR_1;

 VAR_2->res->nh = VAR_0;
 return FUNC_0(VAR_2->res, VAR_2->fl6, VAR_2->gw, VAR_2->ret);
}
