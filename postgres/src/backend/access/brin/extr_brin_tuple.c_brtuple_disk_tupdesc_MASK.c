
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * TupleDesc ;
struct TYPE_9__ {int * bd_disktdesc; TYPE_3__** bd_info; TYPE_1__* bd_tupdesc; int bd_totalstored; int bd_context; } ;
struct TYPE_8__ {int oi_nstored; TYPE_2__** oi_typcache; } ;
struct TYPE_7__ {int type_id; } ;
struct TYPE_6__ {int natts; } ;
typedef int MemoryContext ;
typedef TYPE_4__ BrinDesc ;
typedef int AttrNumber ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *,int ,int,int ) ;

__attribute__((used)) static TupleDesc
FUNC_3(BrinDesc *VAR_0)
{

 if (VAR_0->bd_disktdesc == ((void*)0))
 {
  int VAR_1;
  int VAR_2;
  AttrNumber VAR_3 = 1;
  TupleDesc VAR_4;
  MemoryContext VAR_5;


  VAR_5 = FUNC_1(VAR_0->bd_context);

  VAR_4 = FUNC_0(VAR_0->bd_totalstored);

  for (VAR_1 = 0; VAR_1 < VAR_0->bd_tupdesc->natts; VAR_1++)
  {
   for (VAR_2 = 0; VAR_2 < VAR_0->bd_info[VAR_1]->oi_nstored; VAR_2++)
    FUNC_2(VAR_4, VAR_3++, ((void*)0),
           VAR_0->bd_info[VAR_1]->oi_typcache[VAR_2]->type_id,
           -1, 0);
  }

  FUNC_1(VAR_5);

  VAR_0->bd_disktdesc = VAR_4;
 }

 return VAR_0->bd_disktdesc;
}
