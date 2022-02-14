
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* attrMap; int* inisnull; int* outisnull; TYPE_2__* outdesc; int indesc; int * outvalues; int * invalues; } ;
typedef TYPE_1__ TupleConversionMap ;
struct TYPE_5__ {int natts; } ;
typedef int HeapTuple ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (int ,int ,int *,int*) ;
 int FUNC_1 (TYPE_2__*,int *,int*) ;

HeapTuple
FUNC_2(HeapTuple VAR_0, TupleConversionMap *VAR_1)
{
 AttrNumber *VAR_2 = VAR_1->attrMap;
 Datum *VAR_3 = VAR_1->invalues;
 bool *VAR_4 = VAR_1->inisnull;
 Datum *VAR_5 = VAR_1->outvalues;
 bool *VAR_6 = VAR_1->outisnull;
 int VAR_7 = VAR_1->outdesc->natts;
 int VAR_8;






 FUNC_0(VAR_0, VAR_1->indesc, VAR_3 + 1, VAR_4 + 1);




 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
  int VAR_9 = VAR_2[VAR_8];

  VAR_5[VAR_8] = VAR_3[VAR_9];
  VAR_6[VAR_8] = VAR_4[VAR_9];
 }




 return FUNC_1(VAR_1->outdesc, VAR_5, VAR_6);
}
