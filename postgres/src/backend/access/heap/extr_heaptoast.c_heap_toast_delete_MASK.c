
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* TupleDesc ;
struct TYPE_9__ {TYPE_2__* rd_att; TYPE_1__* rd_rel; } ;
struct TYPE_8__ {int natts; } ;
struct TYPE_7__ {scalar_t__ relkind; } ;
typedef TYPE_3__* Relation ;
typedef int HeapTuple ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,TYPE_2__*,int *,int*) ;
 int FUNC_2 (TYPE_3__*,int *,int*,int) ;

void
FUNC_3(Relation VAR_3, HeapTuple VAR_4, bool VAR_5)
{
 TupleDesc VAR_6;
 Datum VAR_7[VAR_0];
 bool VAR_8[VAR_0];





 FUNC_0(VAR_3->rd_rel->relkind == VAR_2 ||
     VAR_3->rd_rel->relkind == VAR_1);
 VAR_6 = VAR_3->rd_att;

 FUNC_0(VAR_6->natts <= VAR_0);
 FUNC_1(VAR_4, VAR_6, VAR_7, VAR_8);


 FUNC_2(VAR_3, VAR_7, VAR_8, VAR_5);
}
