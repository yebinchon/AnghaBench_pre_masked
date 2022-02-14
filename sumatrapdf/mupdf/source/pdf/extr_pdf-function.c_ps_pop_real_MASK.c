
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {size_t sp; TYPE_2__* stack; } ;
typedef TYPE_3__ ps_stack ;
struct TYPE_7__ {float i; float f; } ;
struct TYPE_8__ {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static float
FUNC_2(ps_stack *VAR_2)
{
 if (!FUNC_1(VAR_2, 1))
 {
  if (FUNC_0(VAR_2, VAR_0))
   return VAR_2->stack[--VAR_2->sp].u.i;
  if (FUNC_0(VAR_2, VAR_1))
   return VAR_2->stack[--VAR_2->sp].u.f;
 }
 return 0;
}
