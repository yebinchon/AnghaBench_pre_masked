
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* TupleDesc ;
struct TYPE_14__ {TYPE_1__* rd_rel; } ;
struct TYPE_13__ {int natts; } ;
struct TYPE_12__ {char relreplident; } ;
typedef TYPE_3__* Relation ;
typedef int * HeapTuple ;
typedef int Datum ;
typedef int Bitmapset ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__,int *) ;
 int FUNC_8 (int *,TYPE_2__*,int *,int*) ;
 int * FUNC_9 (TYPE_2__*,int *,int*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,TYPE_2__*) ;

__attribute__((used)) static HeapTuple
FUNC_12(Relation VAR_5, HeapTuple VAR_6, bool VAR_7,
        bool *VAR_8)
{
 TupleDesc VAR_9 = FUNC_2(VAR_5);
 char VAR_10 = VAR_5->rd_rel->relreplident;
 Bitmapset *VAR_11;
 HeapTuple VAR_12;
 bool VAR_13[VAR_2];
 Datum VAR_14[VAR_2];

 *VAR_8 = 0;

 if (!FUNC_4(VAR_5))
  return ((void*)0);

 if (VAR_10 == VAR_4)
  return ((void*)0);

 if (VAR_10 == VAR_3)
 {




  if (FUNC_1(VAR_6))
  {
   *VAR_8 = 1;
   VAR_6 = FUNC_11(VAR_6, VAR_9);
  }
  return VAR_6;
 }


 if (!VAR_7)
  return ((void*)0);


 VAR_11 = FUNC_3(VAR_5,
           VAR_1);







 if (FUNC_6(VAR_11))
  return ((void*)0);






 FUNC_8(VAR_6, VAR_9, VAR_14, VAR_13);

 for (int VAR_15 = 0; VAR_15 < VAR_9->natts; VAR_15++)
 {
  if (FUNC_7(VAR_15 + 1 - VAR_0,
        VAR_11))
   FUNC_0(!VAR_13[VAR_15]);
  else
   VAR_13[VAR_15] = 1;
 }

 VAR_12 = FUNC_9(VAR_9, VAR_14, VAR_13);
 *VAR_8 = 1;

 FUNC_5(VAR_11);
 if (FUNC_1(VAR_12))
 {
  HeapTuple VAR_16 = VAR_12;

  VAR_12 = FUNC_11(VAR_16, VAR_9);
  FUNC_10(VAR_16);
 }

 return VAR_12;
}
