
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int lastuse; int lwtstate; int input; int output; scalar_t__ error; } ;
struct rt6_info {TYPE_3__ dst; } ;
struct fib6_result {int fib6_flags; scalar_t__ fib6_type; TYPE_2__* nh; struct fib6_info* f6i; } ;
struct TYPE_4__ {int addr; } ;
struct fib6_info {TYPE_1__ fib6_dst; } ;
struct TYPE_5__ {scalar_t__ fib_nh_lws; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rt6_info*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(struct rt6_info *VAR_9, const struct fib6_result *VAR_10)
{
 struct fib6_info *VAR_11 = VAR_10->f6i;

 if (VAR_10->fib6_flags & VAR_1) {
  FUNC_0(VAR_9, VAR_10->fib6_type);
  return;
 }

 VAR_9->dst.error = 0;
 VAR_9->dst.output = VAR_7;

 if (VAR_10->fib6_type == VAR_3 || VAR_10->fib6_type == VAR_2) {
  VAR_9->dst.input = VAR_5;
 } else if (FUNC_1(&VAR_11->fib6_dst.addr) & VAR_0) {
  VAR_9->dst.input = VAR_6;
 } else {
  VAR_9->dst.input = VAR_4;
 }

 if (VAR_10->nh->fib_nh_lws) {
  VAR_9->dst.lwtstate = FUNC_2(VAR_10->nh->fib_nh_lws);
  FUNC_3(&VAR_9->dst);
 }

 VAR_9->dst.lastuse = VAR_8;
}
