
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {scalar_t__ attisdropped; } ;
struct TYPE_7__ {int natts; } ;
typedef int RewriteState ;
typedef int Relation ;
typedef int HeapTuple ;
typedef int Datum ;


 TYPE_1__* FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,TYPE_1__*,int *,int*) ;
 int FUNC_3 (TYPE_1__*,int *,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(HeapTuple VAR_0,
       Relation VAR_1, Relation VAR_2,
       Datum *VAR_3, bool *VAR_4, RewriteState VAR_5)
{
 TupleDesc VAR_6 = FUNC_0(VAR_1);
 TupleDesc VAR_7 = FUNC_0(VAR_2);
 HeapTuple VAR_8;
 int VAR_9;

 FUNC_2(VAR_0, VAR_6, VAR_3, VAR_4);


 for (VAR_9 = 0; VAR_9 < VAR_7->natts; VAR_9++)
 {
  if (FUNC_1(VAR_7, VAR_9)->attisdropped)
   VAR_4[VAR_9] = 1;
 }

 VAR_8 = FUNC_3(VAR_7, VAR_3, VAR_4);


 FUNC_5(VAR_5, VAR_0, VAR_8);

 FUNC_4(VAR_8);
}
