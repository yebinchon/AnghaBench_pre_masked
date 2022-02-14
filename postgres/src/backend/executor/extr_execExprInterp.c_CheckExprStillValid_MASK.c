
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_14__ {int * ecxt_scantuple; int * ecxt_outertuple; int * ecxt_innertuple; } ;
struct TYPE_10__ {int attnum; int vartype; } ;
struct TYPE_11__ {TYPE_1__ var; } ;
struct TYPE_13__ {TYPE_2__ d; } ;
struct TYPE_12__ {int steps_len; TYPE_4__* steps; } ;
typedef TYPE_3__ ExprState ;
typedef TYPE_4__ ExprEvalStep ;
typedef TYPE_5__ ExprContext ;


 int FUNC_0 (int *,int,int ) ;



 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;

void
FUNC_2(ExprState *VAR_0, ExprContext *VAR_1)
{
 int VAR_2 = 0;
 TupleTableSlot *VAR_3;
 TupleTableSlot *VAR_4;
 TupleTableSlot *VAR_5;

 VAR_3 = VAR_1->ecxt_innertuple;
 VAR_4 = VAR_1->ecxt_outertuple;
 VAR_5 = VAR_1->ecxt_scantuple;

 for (VAR_2 = 0; VAR_2 < VAR_0->steps_len; VAR_2++)
 {
  ExprEvalStep *VAR_6 = &VAR_0->steps[VAR_2];

  switch (FUNC_1(VAR_0, VAR_6))
  {
   case 130:
    {
     int VAR_7 = VAR_6->d.var.attnum;

     FUNC_0(VAR_3, VAR_7 + 1, VAR_6->d.var.vartype);
     break;
    }

   case 129:
    {
     int VAR_8 = VAR_6->d.var.attnum;

     FUNC_0(VAR_4, VAR_8 + 1, VAR_6->d.var.vartype);
     break;
    }

   case 128:
    {
     int VAR_9 = VAR_6->d.var.attnum;

     FUNC_0(VAR_5, VAR_9 + 1, VAR_6->d.var.vartype);
     break;
    }
   default:
    break;
  }
 }
}
