
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * plan; } ;
typedef TYPE_1__ PLpgSQL_expr ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(PLpgSQL_expr *VAR_0)
{
 if (VAR_0 && VAR_0->plan)
 {
  FUNC_0(VAR_0->plan);
  VAR_0->plan = ((void*)0);
 }
}
