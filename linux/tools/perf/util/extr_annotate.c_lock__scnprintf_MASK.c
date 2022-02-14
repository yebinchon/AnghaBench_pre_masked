
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * ops; } ;
struct TYPE_3__ {int ops; TYPE_2__ ins; } ;
struct ins_operands {TYPE_1__ locked; } ;
struct ins {int name; } ;


 int FUNC_0 (struct ins*,char*,size_t,struct ins_operands*,int) ;
 int FUNC_1 (TYPE_2__*,char*,size_t,int ,int) ;
 int FUNC_2 (char*,size_t,char*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct ins *VAR_0, char *VAR_1, size_t VAR_2,
      struct ins_operands *VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_3->locked.ins.ops == ((void*)0))
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 VAR_5 = FUNC_2(VAR_1, VAR_2, "%-*s ", VAR_4, VAR_0->name);
 return VAR_5 + FUNC_1(&VAR_3->locked.ins, VAR_1 + VAR_5,
     VAR_2 - VAR_5, VAR_3->locked.ops, VAR_4);
}
