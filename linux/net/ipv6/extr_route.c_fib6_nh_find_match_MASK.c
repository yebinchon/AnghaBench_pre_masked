
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_nh_match_arg {scalar_t__ dev; struct fib6_nh* match; scalar_t__ gw; } ;
struct fib6_nh {scalar_t__ fib_nh_dev; int fib_nh_gw6; scalar_t__ fib_nh_gw_family; } ;


 int FUNC_0 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_1(struct fib6_nh *VAR_0, void *VAR_1)
{
 struct fib6_nh_match_arg *VAR_2 = VAR_1;

 if (VAR_2->dev != VAR_0->fib_nh_dev ||
     (VAR_2->gw && !VAR_0->fib_nh_gw_family) ||
     (!VAR_2->gw && VAR_0->fib_nh_gw_family) ||
     (VAR_2->gw && !FUNC_0(VAR_2->gw, &VAR_0->fib_nh_gw6)))
  return 0;

 VAR_2->match = VAR_0;


 return 1;
}
