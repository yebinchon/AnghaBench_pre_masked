
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int nargs; TYPE_1__* args; } ;
struct TYPE_14__ {int ptype; scalar_t__ pflags; int isnull; int value; } ;
struct TYPE_13__ {int numParams; TYPE_5__* params; } ;
struct TYPE_12__ {TYPE_4__* paramLI; TYPE_2__* pinfo; } ;
struct TYPE_11__ {int * argtypes; } ;
struct TYPE_10__ {int isnull; int value; } ;
typedef TYPE_3__* SQLFunctionCachePtr ;
typedef TYPE_4__* ParamListInfo ;
typedef TYPE_5__ ParamExternData ;
typedef TYPE_6__* FunctionCallInfo ;


 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(SQLFunctionCachePtr VAR_0,
     FunctionCallInfo VAR_1)
{
 int VAR_2 = VAR_1->nargs;

 if (VAR_2 > 0)
 {
  ParamListInfo VAR_3;

  if (VAR_0->paramLI == ((void*)0))
  {
   VAR_3 = FUNC_1(VAR_2);
   VAR_0->paramLI = VAR_3;
  }
  else
  {
   VAR_3 = VAR_0->paramLI;
   FUNC_0(VAR_3->numParams == VAR_2);
  }

  for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  {
   ParamExternData *VAR_5 = &VAR_3->params[VAR_4];

   VAR_5->value = VAR_1->args[VAR_4].value;
   VAR_5->isnull = VAR_1->args[VAR_4].isnull;
   VAR_5->pflags = 0;
   VAR_5->ptype = VAR_0->pinfo->argtypes[VAR_4];
  }
 }
 else
  VAR_0->paramLI = ((void*)0);
}
