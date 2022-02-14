
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; TYPE_1__* ops; } ;
struct disasm_line {int al; TYPE_2__ ins; int ops; } ;
struct TYPE_3__ {int (* free ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct disasm_line *VAR_0)
{
 if (VAR_0->ins.ops && VAR_0->ins.ops->free)
  VAR_0->ins.ops->free(&VAR_0->ops);
 else
  FUNC_1(&VAR_0->ops);
 FUNC_3(&VAR_0->ins.name);
 FUNC_0(&VAR_0->al);
}
