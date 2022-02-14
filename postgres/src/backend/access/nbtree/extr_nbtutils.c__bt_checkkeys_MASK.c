
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_8__ {int numberOfKeys; TYPE_1__* keyData; } ;
struct TYPE_7__ {scalar_t__ opaque; int indexRelation; } ;
struct TYPE_6__ {int sk_attno; int sk_flags; int sk_argument; int sk_collation; int sk_func; } ;
typedef TYPE_1__* ScanKey ;
typedef int ScanDirection ;
typedef int IndexTuple ;
typedef TYPE_2__* IndexScanDesc ;
typedef int Datum ;
typedef TYPE_3__* BTScanOpaque ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ,int,int ,int ,int*) ;
 int FUNC_8 (int ,int,int ,int*) ;

bool
FUNC_9(IndexScanDesc VAR_7, IndexTuple VAR_8, int VAR_9,
     ScanDirection VAR_10, bool *VAR_11)
{
 TupleDesc VAR_12;
 BTScanOpaque VAR_13;
 int VAR_14;
 int VAR_15;
 ScanKey VAR_16;

 FUNC_0(FUNC_1(VAR_8, VAR_7->indexRelation) == VAR_9);

 *VAR_11 = 1;

 VAR_12 = FUNC_4(VAR_7->indexRelation);
 VAR_13 = (BTScanOpaque) VAR_7->opaque;
 VAR_14 = VAR_13->numberOfKeys;

 for (VAR_16 = VAR_13->keyData, VAR_15 = 0; VAR_15 < VAR_14; VAR_16++, VAR_15++)
 {
  Datum VAR_17;
  bool VAR_18;
  Datum VAR_19;

  if (VAR_16->sk_attno > VAR_9)
  {






   FUNC_0(FUNC_6(VAR_10));
   continue;
  }


  if (VAR_16->sk_flags & VAR_4)
  {
   if (FUNC_7(VAR_16, VAR_8, VAR_9, VAR_12, VAR_10,
          VAR_11))
    continue;
   return 0;
  }

  VAR_17 = FUNC_8(VAR_8,
         VAR_16->sk_attno,
         VAR_12,
         &VAR_18);

  if (VAR_16->sk_flags & VAR_3)
  {

   if (VAR_16->sk_flags & VAR_6)
   {
    if (VAR_18)
     continue;
   }
   else
   {
    FUNC_0(VAR_16->sk_flags & VAR_5);
    if (!VAR_18)
     continue;
   }






   if ((VAR_16->sk_flags & VAR_2) &&
    FUNC_6(VAR_10))
    *VAR_11 = 0;
   else if ((VAR_16->sk_flags & VAR_1) &&
      FUNC_5(VAR_10))
    *VAR_11 = 0;




   return 0;
  }

  if (VAR_18)
  {
   if (VAR_16->sk_flags & VAR_0)
   {
    if ((VAR_16->sk_flags & (VAR_2 | VAR_1)) &&
     FUNC_5(VAR_10))
     *VAR_11 = 0;
   }
   else
   {
    if ((VAR_16->sk_flags & (VAR_2 | VAR_1)) &&
     FUNC_6(VAR_10))
     *VAR_11 = 0;
   }




   return 0;
  }

  VAR_19 = FUNC_3(&VAR_16->sk_func, VAR_16->sk_collation,
         VAR_17, VAR_16->sk_argument);

  if (!FUNC_2(VAR_19))
  {
   if ((VAR_16->sk_flags & VAR_2) &&
    FUNC_6(VAR_10))
    *VAR_11 = 0;
   else if ((VAR_16->sk_flags & VAR_1) &&
      FUNC_5(VAR_10))
    *VAR_11 = 0;




   return 0;
  }
 }


 return 1;
}
