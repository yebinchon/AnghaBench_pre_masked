
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t sp; TYPE_2__* stack; } ;
typedef TYPE_3__ ps_stack ;
struct TYPE_6__ {int b; } ;
struct TYPE_7__ {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_1(ps_stack *VAR_1, int VAR_2)
{
 if (!FUNC_0(VAR_1, 1))
 {
  VAR_1->stack[VAR_1->sp].type = VAR_0;
  VAR_1->stack[VAR_1->sp].u.b = VAR_2;
  VAR_1->sp++;
 }
}
