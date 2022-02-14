
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int func; TYPE_1__* paramLI; } ;
struct TYPE_8__ {int func; scalar_t__ paramnos; int * plan; } ;
struct TYPE_7__ {void* parserSetupArg; } ;
typedef TYPE_1__* ParamListInfo ;
typedef TYPE_2__ PLpgSQL_expr ;
typedef TYPE_3__ PLpgSQL_execstate ;


 int FUNC_0 (int ) ;

__attribute__((used)) static ParamListInfo
FUNC_1(PLpgSQL_execstate *VAR_0, PLpgSQL_expr *VAR_1)
{
 ParamListInfo VAR_2;





 FUNC_0(VAR_1->plan != ((void*)0));







 if (VAR_1->paramnos)
 {

  VAR_2 = VAR_0->paramLI;






  VAR_2->parserSetupArg = (void *) VAR_1;






  VAR_1->func = VAR_0->func;
 }
 else
 {





  VAR_2 = ((void*)0);
 }
 return VAR_2;
}
