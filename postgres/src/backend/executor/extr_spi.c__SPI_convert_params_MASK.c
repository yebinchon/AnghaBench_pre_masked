
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ptype; int pflags; int isnull; int value; } ;
struct TYPE_5__ {TYPE_2__* params; } ;
typedef TYPE_1__* ParamListInfo ;
typedef TYPE_2__ ParamExternData ;
typedef int Oid ;
typedef int Datum ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static ParamListInfo
FUNC_1(int VAR_1, Oid *VAR_2,
     Datum *VAR_3, const char *VAR_4)
{
 ParamListInfo VAR_5;

 if (VAR_1 > 0)
 {
  VAR_5 = FUNC_0(VAR_1);

  for (int VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  {
   ParamExternData *VAR_7 = &VAR_5->params[VAR_6];

   VAR_7->value = VAR_3[VAR_6];
   VAR_7->isnull = (VAR_4 && VAR_4[VAR_6] == 'n');
   VAR_7->pflags = VAR_0;
   VAR_7->ptype = VAR_2[VAR_6];
  }
 }
 else
  VAR_5 = ((void*)0);
 return VAR_5;
}
