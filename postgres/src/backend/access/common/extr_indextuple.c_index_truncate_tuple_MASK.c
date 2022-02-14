
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_19__ {int t_tid; } ;
struct TYPE_18__ {int natts; } ;
typedef TYPE_2__* IndexTuple ;
typedef int Datum ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int *,int*) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,int *,int*) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;

IndexTuple
FUNC_9(TupleDesc VAR_1, IndexTuple VAR_2,
      int VAR_3)
{
 TupleDesc VAR_4;
 Datum VAR_5[VAR_0];
 bool VAR_6[VAR_0];
 IndexTuple VAR_7;

 FUNC_0(VAR_3 <= VAR_1->natts);


 if (VAR_3 == VAR_1->natts)
  return FUNC_1(VAR_2);


 VAR_4 = FUNC_7(FUNC_4(VAR_1));
 FUNC_3(VAR_4, VAR_1);
 VAR_4->natts = VAR_3;


 FUNC_5(VAR_2, VAR_4, VAR_5, VAR_6);
 VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_6);
 VAR_7->t_tid = VAR_2->t_tid;
 FUNC_0(FUNC_2(VAR_7) <= FUNC_2(VAR_2));





 FUNC_8(VAR_4);

 return VAR_7;
}
