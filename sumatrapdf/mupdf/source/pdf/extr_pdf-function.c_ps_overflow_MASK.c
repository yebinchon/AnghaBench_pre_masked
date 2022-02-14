
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sp; int stack; } ;
typedef TYPE_1__ ps_stack ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(ps_stack *VAR_0, int VAR_1)
{
 return VAR_1 < 0 || VAR_0->sp + VAR_1 >= (int)FUNC_0(VAR_0->stack);
}
