
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sqld; TYPE_1__* sqlvar; } ;
typedef TYPE_2__ sqlda_t ;
typedef int decimal ;
struct TYPE_4__ {int* sqlind; char* sqlname; int sqltype; char* sqldata; } ;






 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(sqlda_t *VAR_0)
{
 int VAR_1;

 if (VAR_0 == ((void*)0))
 {
  FUNC_1("dump_sqlda called with NULL sqlda\n");
  return;
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->sqld; VAR_1++)
 {
  if (VAR_0->sqlvar[VAR_1].sqlind && *(VAR_0->sqlvar[VAR_1].sqlind) == -1)
   FUNC_1("name sqlda descriptor: '%s' value NULL'\n", VAR_0->sqlvar[VAR_1].sqlname);
  else
  switch (VAR_0->sqlvar[VAR_1].sqltype)
  {
  case 131:
   FUNC_1("name sqlda descriptor: '%s' value '%s'\n", VAR_0->sqlvar[VAR_1].sqlname, VAR_0->sqlvar[VAR_1].sqldata);
   break;
  case 128:
   FUNC_1("name sqlda descriptor: '%s' value %d\n", VAR_0->sqlvar[VAR_1].sqlname, *(int *)VAR_0->sqlvar[VAR_1].sqldata);
   break;
  case 129:
   FUNC_1("name sqlda descriptor: '%s' value %f\n", VAR_0->sqlvar[VAR_1].sqlname, *(double *)VAR_0->sqlvar[VAR_1].sqldata);
   break;
  case 130:
   {
    char VAR_2[64];
    FUNC_0((decimal *)VAR_0->sqlvar[VAR_1].sqldata, VAR_2, 64, -1);
    FUNC_1("name sqlda descriptor: '%s' value DECIMAL '%s'\n", VAR_0->sqlvar[VAR_1].sqlname, VAR_2);
    break;
   }
  }
 }
}
