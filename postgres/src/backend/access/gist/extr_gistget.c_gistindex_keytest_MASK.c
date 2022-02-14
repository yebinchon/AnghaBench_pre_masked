
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int leafTupdesc; } ;
struct TYPE_11__ {TYPE_3__* distances; TYPE_5__* giststate; } ;
struct TYPE_10__ {double value; int isnull; } ;
struct TYPE_9__ {int numberOfKeys; int numberOfOrderBys; TYPE_1__* orderByData; int indexRelation; TYPE_1__* keyData; int opaque; } ;
struct TYPE_8__ {int sk_flags; int sk_subtype; int sk_strategy; int sk_argument; int sk_collation; int sk_func; scalar_t__ sk_attno; } ;
typedef TYPE_1__* ScanKey ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int IndexTuple ;
typedef TYPE_2__* IndexScanDesc ;
typedef TYPE_3__ IndexOrderByDistance ;
typedef TYPE_4__* GISTScanOpaque ;
typedef TYPE_5__ GISTSTATE ;
typedef int GISTENTRY ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 double FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ,char*) ;
 double FUNC_10 () ;
 int FUNC_11 (TYPE_5__*,scalar_t__,int*,int ,int ,int ,int ,int,int) ;
 int FUNC_12 (int ,scalar_t__,int ,int*) ;

__attribute__((used)) static bool
FUNC_13(IndexScanDesc VAR_4,
      IndexTuple VAR_5,
      Page VAR_6,
      OffsetNumber VAR_7,
      bool *VAR_8,
      bool *VAR_9)
{
 GISTScanOpaque VAR_10 = (GISTScanOpaque) VAR_4->opaque;
 GISTSTATE *VAR_11 = VAR_10->giststate;
 ScanKey VAR_12 = VAR_4->keyData;
 int VAR_13 = VAR_4->numberOfKeys;
 IndexOrderByDistance *VAR_14;
 Relation VAR_15 = VAR_4->indexRelation;

 *VAR_8 = 0;
 *VAR_9 = 0;






 if (FUNC_5(VAR_5))
 {
  int VAR_16;

  if (FUNC_4(VAR_6))
   FUNC_9(VAR_0, "invalid GiST tuple found on leaf page");
  for (VAR_16 = 0; VAR_16 < VAR_4->numberOfOrderBys; VAR_16++)
  {
   VAR_10->distances[VAR_16].value = -FUNC_10();
   VAR_10->distances[VAR_16].isnull = 0;
  }
  return 1;
 }


 while (VAR_13 > 0)
 {
  Datum VAR_17;
  bool VAR_18;

  VAR_17 = FUNC_12(VAR_5,
         VAR_12->sk_attno,
         VAR_11->leafTupdesc,
         &VAR_18);

  if (VAR_12->sk_flags & VAR_1)
  {






   if (VAR_12->sk_flags & VAR_3)
   {
    if (FUNC_4(VAR_6) && !VAR_18)
     return 0;
   }
   else
   {
    FUNC_0(VAR_12->sk_flags & VAR_2);
    if (VAR_18)
     return 0;
   }
  }
  else if (VAR_18)
  {
   return 0;
  }
  else
  {
   Datum VAR_19;
   bool VAR_20;
   GISTENTRY VAR_21;

   FUNC_11(VAR_11, VAR_12->sk_attno - 1, &VAR_21,
         VAR_17, VAR_15, VAR_6, VAR_7,
         0, VAR_18);
   VAR_20 = 1;

   VAR_19 = FUNC_3(&VAR_12->sk_func,
          VAR_12->sk_collation,
          FUNC_8(&VAR_21),
          VAR_12->sk_argument,
          FUNC_6(VAR_12->sk_strategy),
          FUNC_7(VAR_12->sk_subtype),
          FUNC_8(&VAR_20));

   if (!FUNC_1(VAR_19))
    return 0;
   *VAR_8 |= VAR_20;
  }

  VAR_12++;
  VAR_13--;
 }


 VAR_12 = VAR_4->orderByData;
 VAR_14 = VAR_10->distances;
 VAR_13 = VAR_4->numberOfOrderBys;
 while (VAR_13 > 0)
 {
  Datum VAR_22;
  bool VAR_23;

  VAR_22 = FUNC_12(VAR_5,
         VAR_12->sk_attno,
         VAR_11->leafTupdesc,
         &VAR_23);

  if ((VAR_12->sk_flags & VAR_1) || VAR_23)
  {

   VAR_14->value = 0.0;
   VAR_14->isnull = 1;
  }
  else
  {
   Datum VAR_24;
   bool VAR_25;
   GISTENTRY VAR_26;

   FUNC_11(VAR_11, VAR_12->sk_attno - 1, &VAR_26,
         VAR_22, VAR_15, VAR_6, VAR_7,
         0, VAR_23);
   VAR_25 = 0;
   VAR_24 = FUNC_3(&VAR_12->sk_func,
          VAR_12->sk_collation,
          FUNC_8(&VAR_26),
          VAR_12->sk_argument,
          FUNC_6(VAR_12->sk_strategy),
          FUNC_7(VAR_12->sk_subtype),
          FUNC_8(&VAR_25));
   *VAR_9 |= VAR_25;
   VAR_14->value = FUNC_2(VAR_24);
   VAR_14->isnull = 0;
  }

  VAR_12++;
  VAR_14++;
  VAR_13--;
 }

 return 1;
}
