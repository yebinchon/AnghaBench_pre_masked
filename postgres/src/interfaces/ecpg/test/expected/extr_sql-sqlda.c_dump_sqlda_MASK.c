
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int sqld; TYPE_2__* sqlvar; } ;
typedef TYPE_3__ sqlda_t ;
typedef int numeric ;
struct TYPE_5__ {char* data; } ;
struct TYPE_6__ {int* sqlind; int sqltype; char* sqldata; TYPE_1__ sqlname; } ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(sqlda_t *VAR_0)
{
 int VAR_1;

 if (VAR_0 == ((void*)0))
 {
  FUNC_2("dump_sqlda called with NULL sqlda\n");
  return;
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->sqld; VAR_1++)
 {
  if (VAR_0->sqlvar[VAR_1].sqlind && *(VAR_0->sqlvar[VAR_1].sqlind) == -1)
   FUNC_2("name sqlda descriptor: '%s' value NULL'\n", VAR_0->sqlvar[VAR_1].sqlname.data);
  else
  switch (VAR_0->sqlvar[VAR_1].sqltype)
  {
  case 133:
   FUNC_2("name sqlda descriptor: '%s' value '%s'\n", VAR_0->sqlvar[VAR_1].sqlname.data, VAR_0->sqlvar[VAR_1].sqldata);
   break;
  case 131:
   FUNC_2("name sqlda descriptor: '%s' value %d\n", VAR_0->sqlvar[VAR_1].sqlname.data, *(int *)VAR_0->sqlvar[VAR_1].sqldata);
   break;
  case 130:
   FUNC_2("name sqlda descriptor: '%s' value %ld\n", VAR_0->sqlvar[VAR_1].sqlname.data, *(long int *)VAR_0->sqlvar[VAR_1].sqldata);
   break;
  case 129:
   FUNC_2(



    "name sqlda descriptor: '%s' value %lld\n",

    VAR_0->sqlvar[VAR_1].sqlname.data, *(long long int *)VAR_0->sqlvar[VAR_1].sqldata);
   break;
  case 132:
   FUNC_2("name sqlda descriptor: '%s' value %f\n", VAR_0->sqlvar[VAR_1].sqlname.data, *(double *)VAR_0->sqlvar[VAR_1].sqldata);
   break;
  case 128:
   {
    char *VAR_2;

    VAR_2 = FUNC_1((numeric*)VAR_0->sqlvar[VAR_1].sqldata, -1);
    FUNC_2("name sqlda descriptor: '%s' value NUMERIC '%s'\n", VAR_0->sqlvar[VAR_1].sqlname.data, VAR_2);
    FUNC_0(VAR_2);
    break;
   }
  }
 }
}
