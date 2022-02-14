
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rsc {TYPE_1__* ops; } ;
struct hw {int (* amixer_set_x ) (int ,int ) ;int (* amixer_set_mode ) (int ,int ) ;} ;
struct TYPE_4__ {int ctrl_blk; struct hw* hw; } ;
struct amixer {TYPE_2__ rsc; struct rsc* input; } ;
struct TYPE_3__ {int (* output_slot ) (struct rsc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct rsc*) ;

__attribute__((used)) static int FUNC_4(struct amixer *VAR_2, struct rsc *VAR_3)
{
 struct hw *VAR_4;

 VAR_4 = VAR_2->rsc.hw;
 VAR_4->amixer_set_mode(VAR_2->rsc.ctrl_blk, VAR_0);
 VAR_2->input = VAR_3;
 if (!VAR_3)
  VAR_4->amixer_set_x(VAR_2->rsc.ctrl_blk, VAR_1);
 else
  VAR_4->amixer_set_x(VAR_2->rsc.ctrl_blk,
     VAR_3->ops->output_slot(VAR_3));

 return 0;
}
