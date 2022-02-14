
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int psobj ;
struct TYPE_5__ {scalar_t__ sp; scalar_t__ stack; } ;
typedef TYPE_1__ ps_stack ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3(ps_stack *VAR_0, int VAR_1)
{
 if (!FUNC_2(VAR_0, VAR_1) && !FUNC_1(VAR_0, VAR_1))
 {
  FUNC_0(VAR_0->stack + VAR_0->sp, VAR_0->stack + VAR_0->sp - VAR_1, VAR_1 * sizeof(psobj));
  VAR_0->sp += VAR_1;
 }
}
