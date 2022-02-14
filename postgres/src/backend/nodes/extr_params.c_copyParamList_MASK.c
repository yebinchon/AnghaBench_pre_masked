
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_10__ {int value; int ptype; scalar_t__ isnull; } ;
struct TYPE_9__ {scalar_t__ numParams; TYPE_2__* params; TYPE_2__* (* paramFetch ) (TYPE_1__*,int,int,TYPE_2__*) ;} ;
typedef TYPE_1__* ParamListInfo ;
typedef TYPE_2__ ParamExternData ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int *,int*) ;
 TYPE_1__* FUNC_3 (scalar_t__) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,int,int,TYPE_2__*) ;

ParamListInfo
FUNC_5(ParamListInfo VAR_0)
{
 ParamListInfo VAR_1;

 if (VAR_0 == ((void*)0) || VAR_0->numParams <= 0)
  return ((void*)0);

 VAR_1 = FUNC_3(VAR_0->numParams);

 for (int VAR_2 = 0; VAR_2 < VAR_0->numParams; VAR_2++)
 {
  ParamExternData *VAR_3;
  ParamExternData *VAR_4 = &VAR_1->params[VAR_2];
  ParamExternData VAR_5;
  int16 VAR_6;
  bool VAR_7;


  if (VAR_0->paramFetch != ((void*)0))
   VAR_3 = VAR_0->paramFetch(VAR_0, VAR_2 + 1, 0, &VAR_5);
  else
   VAR_3 = &VAR_0->params[VAR_2];


  *VAR_4 = *VAR_3;


  if (VAR_4->isnull || !FUNC_0(VAR_4->ptype))
   continue;
  FUNC_2(VAR_4->ptype, &VAR_6, &VAR_7);
  VAR_4->value = FUNC_1(VAR_4->value, VAR_7, VAR_6);
 }

 return VAR_1;
}
