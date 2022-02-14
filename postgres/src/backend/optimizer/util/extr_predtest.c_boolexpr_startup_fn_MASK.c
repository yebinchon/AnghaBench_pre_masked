
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int args; } ;
struct TYPE_4__ {int state_list; void* state; } ;
typedef TYPE_1__* PredIterInfo ;
typedef int Node ;
typedef TYPE_2__ BoolExpr ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(Node *VAR_0, PredIterInfo VAR_1)
{
 VAR_1->state_list = ((BoolExpr *) VAR_0)->args;
 VAR_1->state = (void *) FUNC_0(VAR_1->state_list);
}
