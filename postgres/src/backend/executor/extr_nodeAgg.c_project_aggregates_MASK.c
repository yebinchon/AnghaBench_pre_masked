
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_6__ {int ps_ProjInfo; int qual; int * ps_ExprContext; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;
struct TYPE_8__ {TYPE_2__ ss; } ;
typedef int ExprContext ;
typedef TYPE_3__ AggState ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static TupleTableSlot *
FUNC_3(AggState *VAR_0)
{
 ExprContext *VAR_1 = VAR_0->ss.ps.ps_ExprContext;




 if (FUNC_1(VAR_0->ss.ps.qual, VAR_1))
 {




  return FUNC_0(VAR_0->ss.ps.ps_ProjInfo);
 }
 else
  FUNC_2(VAR_0, 1);

 return ((void*)0);
}
