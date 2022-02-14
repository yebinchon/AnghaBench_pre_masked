
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int q; } ;
struct htb_class {int block; int rate_est; TYPE_1__ leaf; int level; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct htb_class*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct Qdisc *VAR_0, struct htb_class *VAR_1)
{
 if (!VAR_1->level) {
  FUNC_0(!VAR_1->leaf.q);
  FUNC_3(VAR_1->leaf.q);
 }
 FUNC_1(&VAR_1->rate_est);
 FUNC_4(VAR_1->block);
 FUNC_2(VAR_1);
}
