
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16 ;
typedef int int16 ;
struct TYPE_8__ {int ptype; int pflags; int isnull; int value; } ;
struct TYPE_7__ {int numParams; TYPE_2__* params; TYPE_2__* (* paramFetch ) (TYPE_1__*,int,int,TYPE_2__*) ;} ;
typedef TYPE_1__* ParamListInfo ;
typedef TYPE_2__ ParamExternData ;
typedef int Oid ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int,char**) ;
 int FUNC_2 (int,int*,int*) ;
 int FUNC_3 (char*,int*,int) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,int,int,TYPE_2__*) ;

void
FUNC_5(ParamListInfo VAR_0, char **VAR_1)
{
 int VAR_2;
 int VAR_3;


 if (VAR_0 == ((void*)0) || VAR_0->numParams <= 0)
  VAR_2 = 0;
 else
  VAR_2 = VAR_0->numParams;
 FUNC_3(*VAR_1, &VAR_2, sizeof(int));
 *VAR_1 += sizeof(int);


 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  ParamExternData *VAR_4;
  ParamExternData VAR_5;
  Oid VAR_6;
  int16 VAR_7;
  bool VAR_8;


  if (VAR_0->paramFetch != ((void*)0))
   VAR_4 = VAR_0->paramFetch(VAR_0, VAR_3 + 1, 0, &VAR_5);
  else
   VAR_4 = &VAR_0->params[VAR_3];

  VAR_6 = VAR_4->ptype;


  FUNC_3(*VAR_1, &VAR_6, sizeof(Oid));
  *VAR_1 += sizeof(Oid);


  FUNC_3(*VAR_1, &VAR_4->pflags, sizeof(uint16));
  *VAR_1 += sizeof(uint16);


  if (FUNC_0(VAR_6))
   FUNC_2(VAR_6, &VAR_7, &VAR_8);
  else
  {

   VAR_7 = sizeof(Datum);
   VAR_8 = 1;
  }
  FUNC_1(VAR_4->value, VAR_4->isnull, VAR_8, VAR_7,
        VAR_1);
 }
}
