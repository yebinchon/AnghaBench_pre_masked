
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct map_symbol {int dummy; } ;
struct TYPE_3__ {TYPE_2__* ops; int name; } ;
struct disasm_line {TYPE_1__ ins; int ops; } ;
struct arch {int dummy; } ;
struct TYPE_4__ {scalar_t__ (* parse ) (struct arch*,int *,struct map_symbol*) ;} ;


 TYPE_2__* FUNC_0 (struct arch*,int ) ;
 scalar_t__ FUNC_1 (struct arch*,int *,struct map_symbol*) ;

__attribute__((used)) static void FUNC_2(struct disasm_line *VAR_0, struct arch *VAR_1, struct map_symbol *VAR_2)
{
 VAR_0->ins.ops = FUNC_0(VAR_1, VAR_0->ins.name);

 if (!VAR_0->ins.ops)
  return;

 if (VAR_0->ins.ops->parse && VAR_0->ins.ops->parse(VAR_1, &VAR_0->ops, VAR_2) < 0)
  VAR_0->ins.ops = ((void*)0);
}
