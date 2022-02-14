
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct map_symbol {int dummy; } ;
struct TYPE_7__ {TYPE_6__* ops; int name; } ;
struct TYPE_8__ {TYPE_3__* ops; TYPE_1__ ins; } ;
struct ins_operands {TYPE_2__ locked; int raw; } ;
struct arch {int dummy; } ;
struct TYPE_10__ {scalar_t__ (* parse ) (struct arch*,TYPE_3__*,struct map_symbol*) ;} ;
struct TYPE_9__ {int raw; } ;


 scalar_t__ FUNC_0 (int ,int *,int *) ;
 TYPE_6__* FUNC_1 (struct arch*,int ) ;
 scalar_t__ FUNC_2 (struct arch*,TYPE_3__*,struct map_symbol*) ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__**) ;

__attribute__((used)) static int FUNC_5(struct arch *VAR_0, struct ins_operands *VAR_1, struct map_symbol *VAR_2)
{
 VAR_1->locked.ops = FUNC_3(sizeof(*VAR_1->locked.ops));
 if (VAR_1->locked.ops == ((void*)0))
  return 0;

 if (FUNC_0(VAR_1->raw, &VAR_1->locked.ins.name, &VAR_1->locked.ops->raw) < 0)
  goto out_free_ops;

 VAR_1->locked.ins.ops = FUNC_1(VAR_0, VAR_1->locked.ins.name);

 if (VAR_1->locked.ins.ops == ((void*)0))
  goto out_free_ops;

 if (VAR_1->locked.ins.ops->parse &&
     VAR_1->locked.ins.ops->parse(VAR_0, VAR_1->locked.ops, VAR_2) < 0)
  goto out_free_ops;

 return 0;

out_free_ops:
 FUNC_4(&VAR_1->locked.ops);
 return 0;
}
