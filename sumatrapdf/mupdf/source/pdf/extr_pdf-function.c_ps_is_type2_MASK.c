
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sp; TYPE_1__* stack; } ;
typedef TYPE_2__ ps_stack ;
struct TYPE_5__ {int type; } ;


 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static inline int FUNC_1(ps_stack *VAR_0, int VAR_1)
{
 return !FUNC_0(VAR_0, 2) && VAR_0->stack[VAR_0->sp - 1].type == VAR_1 && VAR_0->stack[VAR_0->sp - 2].type == VAR_1;
}
