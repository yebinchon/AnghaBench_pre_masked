
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {size_t sp; TYPE_2__* stack; } ;
typedef TYPE_3__ ps_stack ;
struct TYPE_7__ {int b; } ;
struct TYPE_8__ {TYPE_1__ u; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_2(ps_stack *VAR_1)
{
 if (!FUNC_1(VAR_1, 1))
 {
  if (FUNC_0(VAR_1, VAR_0))
   return VAR_1->stack[--VAR_1->sp].u.b;
 }
 return 0;
}
