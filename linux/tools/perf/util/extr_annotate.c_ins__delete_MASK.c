
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; int raw; } ;
struct TYPE_3__ {int name; int raw; } ;
struct ins_operands {TYPE_2__ target; TYPE_1__ source; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ins_operands *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 FUNC_0(&VAR_0->source.raw);
 FUNC_0(&VAR_0->source.name);
 FUNC_0(&VAR_0->target.raw);
 FUNC_0(&VAR_0->target.name);
}
