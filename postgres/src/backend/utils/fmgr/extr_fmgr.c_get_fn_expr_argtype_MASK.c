
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fn_expr; } ;
typedef int Oid ;
typedef TYPE_1__ FmgrInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

Oid
FUNC_1(FmgrInfo *VAR_1, int VAR_2)
{




 if (!VAR_1 || !VAR_1->fn_expr)
  return VAR_0;

 return FUNC_0(VAR_1->fn_expr, VAR_2);
}
