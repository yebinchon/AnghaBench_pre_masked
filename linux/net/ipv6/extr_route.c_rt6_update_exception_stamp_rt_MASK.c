
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct rt6_info {int rt6i_flags; int rt6i_gateway; TYPE_1__ dst; int from; } ;
struct fib6_nh_match_arg {struct fib6_nh* match; int * gw; int dev; } ;
struct fib6_nh {int dummy; } ;
struct TYPE_4__ {int plen; } ;
struct fib6_info {TYPE_2__ fib6_src; struct fib6_nh* fib6_nh; scalar_t__ nh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fib6_nh*,int ,struct rt6_info*) ;
 int FUNC_1 (scalar_t__,int ,struct fib6_nh_match_arg*) ;
 struct fib6_info* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct rt6_info *VAR_2)
{
 struct fib6_info *VAR_3;
 struct fib6_nh *VAR_4;

 FUNC_3();

 VAR_3 = FUNC_2(VAR_2->from);
 if (!VAR_3 || !(VAR_2->rt6i_flags & VAR_0))
  goto unlock;

 if (VAR_3->nh) {
  struct fib6_nh_match_arg VAR_5 = {
   .dev = VAR_2->dst.dev,
   .gw = &VAR_2->rt6i_gateway,
  };

  FUNC_1(VAR_3->nh, VAR_1, &VAR_5);

  if (!VAR_5.match)
   goto unlock;
  VAR_4 = VAR_5.match;
 } else {
  VAR_4 = VAR_3->fib6_nh;
 }
 FUNC_0(VAR_4, VAR_3->fib6_src.plen, VAR_2);
unlock:
 FUNC_4();
}
