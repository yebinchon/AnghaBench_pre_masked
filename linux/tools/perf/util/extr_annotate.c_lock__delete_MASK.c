
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; int raw; } ;
struct ins {TYPE_3__* ops; } ;
struct TYPE_5__ {int ops; struct ins ins; } ;
struct ins_operands {TYPE_1__ target; TYPE_2__ locked; } ;
struct TYPE_6__ {int (* free ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ins_operands *VAR_0)
{
 struct ins *VAR_1 = &VAR_0->locked.ins;

 if (VAR_1->ops && VAR_1->ops->free)
  VAR_1->ops->free(VAR_0->locked.ops);
 else
  FUNC_0(VAR_0->locked.ops);

 FUNC_2(&VAR_0->locked.ops);
 FUNC_2(&VAR_0->target.raw);
 FUNC_2(&VAR_0->target.name);
}
