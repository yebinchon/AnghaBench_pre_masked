
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__** bd_info; TYPE_1__* bd_tupdesc; } ;
struct TYPE_12__ {TYPE_2__* bt_columns; int bt_context; } ;
struct TYPE_11__ {int oi_nstored; } ;
struct TYPE_10__ {int bv_allnulls; int bv_hasnulls; int bv_attno; int * bv_values; } ;
struct TYPE_9__ {int natts; } ;
typedef int Datum ;
typedef int BrinValues ;
typedef TYPE_4__ BrinMemTuple ;
typedef TYPE_5__ BrinDesc ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

BrinMemTuple *
FUNC_2(BrinMemTuple *VAR_0, BrinDesc *VAR_1)
{
 int VAR_2;
 char *VAR_3;

 FUNC_1(VAR_0->bt_context);

 VAR_3 = (char *) VAR_0 +
  FUNC_0(sizeof(BrinMemTuple) +
     sizeof(BrinValues) * VAR_1->bd_tupdesc->natts);
 for (VAR_2 = 0; VAR_2 < VAR_1->bd_tupdesc->natts; VAR_2++)
 {
  VAR_0->bt_columns[VAR_2].bv_allnulls = 1;
  VAR_0->bt_columns[VAR_2].bv_hasnulls = 0;

  VAR_0->bt_columns[VAR_2].bv_attno = VAR_2 + 1;
  VAR_0->bt_columns[VAR_2].bv_allnulls = 1;
  VAR_0->bt_columns[VAR_2].bv_hasnulls = 0;
  VAR_0->bt_columns[VAR_2].bv_values = (Datum *) VAR_3;
  VAR_3 += sizeof(Datum) * VAR_1->bd_info[VAR_2]->oi_nstored;
 }

 return VAR_0;
}
