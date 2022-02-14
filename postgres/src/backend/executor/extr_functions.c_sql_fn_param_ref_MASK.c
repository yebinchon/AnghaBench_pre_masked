
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int number; int location; } ;
struct TYPE_8__ {int p_ref_hook_state; } ;
struct TYPE_7__ {int nargs; } ;
typedef TYPE_1__* SQLFunctionParseInfoPtr ;
typedef TYPE_2__ ParseState ;
typedef TYPE_3__ ParamRef ;
typedef int Node ;


 int * FUNC_0 (TYPE_1__*,int,int ) ;

__attribute__((used)) static Node *
FUNC_1(ParseState *VAR_0, ParamRef *VAR_1)
{
 SQLFunctionParseInfoPtr VAR_2 = (SQLFunctionParseInfoPtr) VAR_0->p_ref_hook_state;
 int VAR_3 = VAR_1->number;


 if (VAR_3 <= 0 || VAR_3 > VAR_2->nargs)
  return ((void*)0);

 return FUNC_0(VAR_2, VAR_3, VAR_1->location);
}
