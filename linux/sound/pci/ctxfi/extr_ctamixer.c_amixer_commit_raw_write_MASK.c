
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hw {int (* amixer_commit_write ) (struct hw*,unsigned int,int ) ;} ;
struct TYPE_4__ {int ctrl_blk; TYPE_1__* ops; struct hw* hw; } ;
struct amixer {TYPE_2__ rsc; } ;
struct TYPE_3__ {unsigned int (* output_slot ) (TYPE_2__*) ;} ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct hw*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct amixer *VAR_0)
{
 struct hw *VAR_1;
 unsigned int VAR_2;

 VAR_1 = VAR_0->rsc.hw;
 VAR_2 = VAR_0->rsc.ops->output_slot(&VAR_0->rsc);
 VAR_1->amixer_commit_write(VAR_1, VAR_2, VAR_0->rsc.ctrl_blk);

 return 0;
}
