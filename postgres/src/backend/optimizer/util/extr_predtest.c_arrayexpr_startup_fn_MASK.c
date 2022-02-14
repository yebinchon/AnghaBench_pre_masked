
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int elements; } ;
struct TYPE_8__ {int type; } ;
struct TYPE_9__ {int opretset; int args; int inputcollid; int opcollid; int opresulttype; int opfuncid; int opno; TYPE_1__ xpr; } ;
struct TYPE_12__ {int next; TYPE_2__ opexpr; } ;
struct TYPE_11__ {int state_list; void* state; } ;
struct TYPE_10__ {int args; int inputcollid; int opfuncid; int opno; } ;
typedef TYPE_3__ ScalarArrayOpExpr ;
typedef TYPE_4__* PredIterInfo ;
typedef int Node ;
typedef TYPE_5__ ArrayExprIterState ;
typedef TYPE_6__ ArrayExpr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(Node *VAR_3, PredIterInfo VAR_4)
{
 ScalarArrayOpExpr *VAR_5 = (ScalarArrayOpExpr *) VAR_3;
 ArrayExprIterState *VAR_6;
 ArrayExpr *VAR_7;


 VAR_6 = (ArrayExprIterState *) FUNC_3(sizeof(ArrayExprIterState));
 VAR_4->state = (void *) VAR_6;


 VAR_6->opexpr.xpr.type = VAR_2;
 VAR_6->opexpr.opno = VAR_5->opno;
 VAR_6->opexpr.opfuncid = VAR_5->opfuncid;
 VAR_6->opexpr.opresulttype = VAR_0;
 VAR_6->opexpr.opretset = 0;
 VAR_6->opexpr.opcollid = VAR_1;
 VAR_6->opexpr.inputcollid = VAR_5->inputcollid;
 VAR_6->opexpr.args = FUNC_0(VAR_5->args);


 VAR_7 = (ArrayExpr *) FUNC_2(VAR_5->args);
 VAR_4->state_list = VAR_7->elements;
 VAR_6->next = FUNC_1(VAR_7->elements);
}
