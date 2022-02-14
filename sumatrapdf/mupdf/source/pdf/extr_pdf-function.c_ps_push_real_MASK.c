
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t sp; TYPE_2__* stack; } ;
typedef TYPE_3__ ps_stack ;
struct TYPE_6__ {int f; } ;
struct TYPE_7__ {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float,int ,int ) ;
 scalar_t__ FUNC_1 (float) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_3(ps_stack *VAR_2, float VAR_3)
{
 if (!FUNC_2(VAR_2, 1))
 {
  VAR_2->stack[VAR_2->sp].type = VAR_1;
  if (FUNC_1(VAR_3))
  {


   VAR_3 = 1.0f;
  }
  VAR_2->stack[VAR_2->sp].u.f = FUNC_0(VAR_3, -VAR_0, VAR_0);
  VAR_2->sp++;
 }
}
