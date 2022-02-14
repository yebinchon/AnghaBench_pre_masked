
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int args; } ;
struct TYPE_8__ {TYPE_1__ opexpr; struct TYPE_8__* elem_nulls; struct TYPE_8__* elem_values; } ;
struct TYPE_7__ {scalar_t__ state; } ;
typedef TYPE_2__* PredIterInfo ;
typedef TYPE_3__ ArrayConstIterState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(PredIterInfo VAR_0)
{
 ArrayConstIterState *VAR_1 = (ArrayConstIterState *) VAR_0->state;

 FUNC_1(VAR_1->elem_values);
 FUNC_1(VAR_1->elem_nulls);
 FUNC_0(VAR_1->opexpr.args);
 FUNC_1(VAR_1);
}
