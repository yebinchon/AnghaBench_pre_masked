
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; } ;
struct sum {TYPE_3__ rsc; } ;
struct hw {int (* amixer_set_sadr ) (int ,int ) ;int (* amixer_set_se ) (int ,int) ;} ;
struct TYPE_5__ {int ctrl_blk; struct hw* hw; } ;
struct amixer {TYPE_2__ rsc; struct sum* sum; } ;
struct TYPE_4__ {int (* index ) (TYPE_3__*) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct amixer *VAR_0, struct sum *VAR_1)
{
 struct hw *VAR_2;

 VAR_2 = VAR_0->rsc.hw;
 VAR_0->sum = VAR_1;
 if (!VAR_1) {
  VAR_2->amixer_set_se(VAR_0->rsc.ctrl_blk, 0);
 } else {
  VAR_2->amixer_set_se(VAR_0->rsc.ctrl_blk, 1);
  VAR_2->amixer_set_sadr(VAR_0->rsc.ctrl_blk,
     VAR_1->rsc.ops->index(&VAR_1->rsc));
 }

 return 0;
}
