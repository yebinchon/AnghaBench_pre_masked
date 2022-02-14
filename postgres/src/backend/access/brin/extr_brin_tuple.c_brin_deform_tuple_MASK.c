
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int bits8 ;
struct TYPE_27__ {TYPE_3__** bd_info; TYPE_1__* bd_tupdesc; } ;
struct TYPE_26__ {int bt_placeholder; int* bt_allnulls; int* bt_hasnulls; TYPE_4__* bt_columns; int bt_context; int * bt_values; int bt_blkno; } ;
struct TYPE_25__ {int bt_blkno; } ;
struct TYPE_24__ {int bv_hasnulls; int bv_allnulls; int * bv_values; } ;
struct TYPE_23__ {int oi_nstored; TYPE_2__** oi_typcache; } ;
struct TYPE_22__ {int typlen; int typbyval; } ;
struct TYPE_21__ {int natts; } ;
typedef int MemoryContext ;
typedef int Datum ;
typedef TYPE_5__ BrinTuple ;
typedef TYPE_6__ BrinMemTuple ;
typedef TYPE_7__ BrinDesc ;


 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_7__*,char*,int *,scalar_t__,int *,int*,int*) ;
 TYPE_6__* FUNC_5 (TYPE_6__*,TYPE_7__*) ;
 TYPE_6__* FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (int ,int ,int ) ;

BrinMemTuple *
FUNC_8(BrinDesc *VAR_1, BrinTuple *VAR_2, BrinMemTuple *VAR_3)
{
 BrinMemTuple *VAR_4;
 Datum *VAR_5;
 bool *VAR_6;
 bool *VAR_7;
 char *VAR_8;
 bits8 *VAR_9;
 int VAR_10;
 int VAR_11;
 MemoryContext VAR_12;

 VAR_4 = VAR_3 ? FUNC_5(VAR_3, VAR_1) :
  FUNC_6(VAR_1);

 if (FUNC_2(VAR_2))
  VAR_4->bt_placeholder = 1;
 VAR_4->bt_blkno = VAR_2->bt_blkno;

 VAR_5 = VAR_4->bt_values;
 VAR_6 = VAR_4->bt_allnulls;
 VAR_7 = VAR_4->bt_hasnulls;

 VAR_8 = (char *) VAR_2 + FUNC_0(VAR_2);

 if (FUNC_1(VAR_2))
  VAR_9 = (bits8 *) ((char *) VAR_2 + VAR_0);
 else
  VAR_9 = ((void*)0);
 FUNC_4(VAR_1,
         VAR_8, VAR_9, FUNC_1(VAR_2),
         VAR_5, VAR_6, VAR_7);





 VAR_12 = FUNC_3(VAR_4->bt_context);
 for (VAR_11 = 0, VAR_10 = 0; VAR_10 < VAR_1->bd_tupdesc->natts; VAR_10++)
 {
  int VAR_13;

  if (VAR_6[VAR_10])
  {
   VAR_11 += VAR_1->bd_info[VAR_10]->oi_nstored;
   continue;
  }





  for (VAR_13 = 0; VAR_13 < VAR_1->bd_info[VAR_10]->oi_nstored; VAR_13++)
   VAR_4->bt_columns[VAR_10].bv_values[VAR_13] =
    FUNC_7(VAR_5[VAR_11++],
        VAR_1->bd_info[VAR_10]->oi_typcache[VAR_13]->typbyval,
        VAR_1->bd_info[VAR_10]->oi_typcache[VAR_13]->typlen);

  VAR_4->bt_columns[VAR_10].bv_hasnulls = VAR_7[VAR_10];
  VAR_4->bt_columns[VAR_10].bv_allnulls = 0;
 }

 FUNC_3(VAR_12);

 return VAR_4;
}
