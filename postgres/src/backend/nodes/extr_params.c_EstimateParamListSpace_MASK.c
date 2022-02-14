
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16 ;
typedef int int16 ;
struct TYPE_8__ {int isnull; int value; int ptype; } ;
struct TYPE_7__ {int numParams; TYPE_2__* params; TYPE_2__* (* paramFetch ) (TYPE_1__*,int,int,TYPE_2__*) ;} ;
typedef int Size ;
typedef TYPE_1__* ParamListInfo ;
typedef TYPE_2__ ParamExternData ;
typedef int Oid ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int*,int*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,int,int,TYPE_2__*) ;

Size
FUNC_5(ParamListInfo VAR_0)
{
 int VAR_1;
 Size VAR_2 = sizeof(int);

 if (VAR_0 == ((void*)0) || VAR_0->numParams <= 0)
  return VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->numParams; VAR_1++)
 {
  ParamExternData *VAR_3;
  ParamExternData VAR_4;
  Oid VAR_5;
  int16 VAR_6;
  bool VAR_7;


  if (VAR_0->paramFetch != ((void*)0))
   VAR_3 = VAR_0->paramFetch(VAR_0, VAR_1 + 1, 0, &VAR_4);
  else
   VAR_3 = &VAR_0->params[VAR_1];

  VAR_5 = VAR_3->ptype;

  VAR_2 = FUNC_1(VAR_2, sizeof(Oid));
  VAR_2 = FUNC_1(VAR_2, sizeof(uint16));


  if (FUNC_0(VAR_5))
   FUNC_3(VAR_5, &VAR_6, &VAR_7);
  else
  {

   VAR_6 = sizeof(Datum);
   VAR_7 = 1;
  }
  VAR_2 = FUNC_1(VAR_2,
       FUNC_2(VAR_3->value, VAR_3->isnull, VAR_7, VAR_6));
 }

 return VAR_2;
}
