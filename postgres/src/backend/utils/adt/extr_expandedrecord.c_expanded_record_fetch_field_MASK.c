
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nfields; int* dnulls; int * fvalue; int * dvalues; } ;
typedef TYPE_1__ ExpandedRecordHeader ;
typedef int Datum ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int,int *,int*) ;
 scalar_t__ FUNC_3 (int) ;

Datum
FUNC_4(ExpandedRecordHeader *VAR_0, int VAR_1,
       bool *VAR_2)
{
 if (VAR_1 > 0)
 {

  if (FUNC_0(VAR_0))
  {
   *VAR_2 = 1;
   return (Datum) 0;
  }

  FUNC_1(VAR_0);

  if (FUNC_3(VAR_1 > VAR_0->nfields))
  {
   *VAR_2 = 1;
   return (Datum) 0;
  }
  *VAR_2 = VAR_0->dnulls[VAR_1 - 1];
  return VAR_0->dvalues[VAR_1 - 1];
 }
 else
 {

  if (VAR_0->fvalue == ((void*)0))
  {
   *VAR_2 = 1;
   return (Datum) 0;
  }

  return FUNC_2(VAR_0->fvalue, VAR_1, ((void*)0), VAR_2);
 }
}
