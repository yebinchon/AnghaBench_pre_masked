
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* ecxt_param_list_info; } ;
struct TYPE_9__ {scalar_t__ ptype; int value; int isnull; } ;
struct TYPE_8__ {int numParams; TYPE_2__* params; TYPE_2__* (* paramFetch ) (TYPE_1__*,int,int,TYPE_2__*) ;} ;
typedef TYPE_1__* ParamListInfo ;
typedef TYPE_2__ ParamExternData ;
typedef TYPE_3__ ExprContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,int,int,TYPE_2__*) ;

__attribute__((used)) static char *
FUNC_7(ExprContext *VAR_4, int VAR_5)
{
 ParamListInfo VAR_6 = VAR_4->ecxt_param_list_info;

 if (VAR_6 &&
  VAR_5 > 0 && VAR_5 <= VAR_6->numParams)
 {
  ParamExternData *VAR_7;
  ParamExternData VAR_8;


  if (VAR_6->paramFetch != ((void*)0))
   VAR_7 = VAR_6->paramFetch(VAR_6, VAR_5, 0, &VAR_8);
  else
   VAR_7 = &VAR_6->params[VAR_5 - 1];

  if (FUNC_0(VAR_7->ptype) && !VAR_7->isnull)
  {

   if (VAR_7->ptype != VAR_3)
    FUNC_2(VAR_2,
      (FUNC_3(VAR_0),
       FUNC_4("type of parameter %d (%s) does not match that when preparing the plan (%s)",
        VAR_5,
        FUNC_5(VAR_7->ptype),
        FUNC_5(VAR_3))));


   return FUNC_1(VAR_7->value);
  }
 }

 FUNC_2(VAR_2,
   (FUNC_3(VAR_1),
    FUNC_4("no value found for parameter %d", VAR_5)));
 return ((void*)0);
}
