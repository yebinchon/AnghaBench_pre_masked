
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int* tts_isnull; int * tts_values; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_13__ {int* jf_cleanMap; TYPE_1__* jf_resultSlot; TYPE_2__* jf_cleanTupType; } ;
struct TYPE_12__ {int natts; } ;
typedef TYPE_3__ JunkFilter ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

TupleTableSlot *
FUNC_3(JunkFilter *VAR_0, TupleTableSlot *VAR_1)
{
 TupleTableSlot *VAR_2;
 AttrNumber *VAR_3;
 TupleDesc VAR_4;
 int VAR_5;
 int VAR_6;
 Datum *VAR_7;
 bool *VAR_8;
 Datum *VAR_9;
 bool *VAR_10;




 FUNC_2(VAR_1);
 VAR_9 = VAR_1->tts_values;
 VAR_10 = VAR_1->tts_isnull;




 VAR_4 = VAR_0->jf_cleanTupType;
 VAR_5 = VAR_4->natts;
 VAR_3 = VAR_0->jf_cleanMap;
 VAR_2 = VAR_0->jf_resultSlot;




 FUNC_0(VAR_2);
 VAR_7 = VAR_2->tts_values;
 VAR_8 = VAR_2->tts_isnull;




 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  int VAR_11 = VAR_3[VAR_6];

  if (VAR_11 == 0)
  {
   VAR_7[VAR_6] = (Datum) 0;
   VAR_8[VAR_6] = 1;
  }
  else
  {
   VAR_7[VAR_6] = VAR_9[VAR_11 - 1];
   VAR_8[VAR_6] = VAR_10[VAR_11 - 1];
  }
 }




 return FUNC_1(VAR_2);
}
