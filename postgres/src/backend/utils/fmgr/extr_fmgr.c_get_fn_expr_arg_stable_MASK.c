
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fn_expr; } ;
typedef TYPE_1__ FmgrInfo ;


 int FUNC_0 (int ,int) ;

bool
FUNC_1(FmgrInfo *VAR_0, int VAR_1)
{




 if (!VAR_0 || !VAR_0->fn_expr)
  return 0;

 return FUNC_0(VAR_0->fn_expr, VAR_1);
}
