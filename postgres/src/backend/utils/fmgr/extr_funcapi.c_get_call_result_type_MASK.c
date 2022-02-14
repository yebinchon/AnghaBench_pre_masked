
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TypeFuncClass ;
typedef int TupleDesc ;
struct TYPE_5__ {scalar_t__ resultinfo; TYPE_1__* flinfo; } ;
struct TYPE_4__ {int fn_expr; int fn_oid; } ;
typedef int ReturnSetInfo ;
typedef int Oid ;
typedef TYPE_2__* FunctionCallInfo ;


 int FUNC_0 (int ,int ,int *,int *,int *) ;

TypeFuncClass
FUNC_1(FunctionCallInfo VAR_0,
      Oid *VAR_1,
      TupleDesc *VAR_2)
{
 return FUNC_0(VAR_0->flinfo->fn_oid,
         VAR_0->flinfo->fn_expr,
         (ReturnSetInfo *) VAR_0->resultinfo,
         VAR_1,
         VAR_2);
}
