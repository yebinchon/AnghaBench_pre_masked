
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int raw; } ;
struct TYPE_3__ {int name; int ops; } ;
struct disasm_line {TYPE_2__ ops; TYPE_1__ ins; } ;


 int FUNC_0 (TYPE_1__*,char*,size_t,TYPE_2__*,int) ;
 int FUNC_1 (char*,size_t,char*,int,int ,int ) ;

int FUNC_2(struct disasm_line *VAR_0, char *VAR_1, size_t VAR_2, bool VAR_3, int VAR_4)
{
 if (VAR_3 || !VAR_0->ins.ops)
  return FUNC_1(VAR_1, VAR_2, "%-*s %s", VAR_4, VAR_0->ins.name, VAR_0->ops.raw);

 return FUNC_0(&VAR_0->ins, VAR_1, VAR_2, &VAR_0->ops, VAR_4);
}
