
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int * dst; } ;
struct inet_cork_full {int fl; TYPE_1__ base; } ;
struct inet6_cork {TYPE_2__* opt; } ;
struct TYPE_4__ {struct TYPE_4__* srcrt; struct TYPE_4__* hopopt; struct TYPE_4__* dst1opt; struct TYPE_4__* dst0opt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct inet_cork_full *VAR_1,
        struct inet6_cork *VAR_2)
{
 if (VAR_2->opt) {
  FUNC_1(VAR_2->opt->dst0opt);
  FUNC_1(VAR_2->opt->dst1opt);
  FUNC_1(VAR_2->opt->hopopt);
  FUNC_1(VAR_2->opt->srcrt);
  FUNC_1(VAR_2->opt);
  VAR_2->opt = ((void*)0);
 }

 if (VAR_1->base.dst) {
  FUNC_0(VAR_1->base.dst);
  VAR_1->base.dst = ((void*)0);
  VAR_1->base.flags &= ~VAR_0;
 }
 FUNC_2(&VAR_1->fl, 0, sizeof(VAR_1->fl));
}
