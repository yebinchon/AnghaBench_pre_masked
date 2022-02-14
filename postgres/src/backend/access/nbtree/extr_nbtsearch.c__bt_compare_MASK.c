
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
typedef int TupleDesc ;
struct TYPE_5__ {int keysz; int * scantid; int pivotsearch; scalar_t__ heapkeyspace; TYPE_1__* scankeys; } ;
struct TYPE_4__ {int sk_flags; int sk_argument; int sk_collation; int sk_func; int sk_attno; } ;
typedef TYPE_1__* ScanKey ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int * ItemPointer ;
typedef scalar_t__ IndexTuple ;
typedef int Datum ;
typedef TYPE_2__* BTScanInsert ;
typedef int BTPageOpaque ;


 int FUNC_0 (int) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_15 (int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_16 (scalar_t__,int ,int ,int*) ;

int32
FUNC_17(Relation VAR_3,
   BTScanInsert VAR_4,
   Page VAR_5,
   OffsetNumber VAR_6)
{
 TupleDesc VAR_7 = FUNC_14(VAR_3);
 BTPageOpaque VAR_8 = (BTPageOpaque) FUNC_13(VAR_5);
 IndexTuple VAR_9;
 ItemPointer VAR_10;
 ScanKey VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_0(FUNC_15(VAR_3, VAR_4->heapkeyspace, VAR_5, VAR_6));
 FUNC_0(VAR_4->keysz <= FUNC_6(VAR_3));
 FUNC_0(VAR_4->heapkeyspace || VAR_4->scantid == ((void*)0));





 if (!FUNC_10(VAR_8) && VAR_6 == FUNC_9(VAR_8))
  return 1;

 VAR_9 = (IndexTuple) FUNC_11(VAR_5, FUNC_12(VAR_5, VAR_6));
 VAR_13 = FUNC_2(VAR_9, VAR_3);
 VAR_12 = FUNC_8(VAR_13, VAR_4->keysz);
 FUNC_0(VAR_4->heapkeyspace || VAR_12 == VAR_4->keysz);
 VAR_11 = VAR_4->scankeys;
 for (int VAR_14 = 1; VAR_14 <= VAR_12; VAR_14++)
 {
  Datum VAR_15;
  bool VAR_16;
  int32 VAR_17;

  VAR_15 = FUNC_16(VAR_9, VAR_11->sk_attno, VAR_7, &VAR_16);


  if (VAR_11->sk_flags & VAR_2)
  {
   if (VAR_16)
    VAR_17 = 0;
   else if (VAR_11->sk_flags & VAR_1)
    VAR_17 = -1;
   else
    VAR_17 = 1;
  }
  else if (VAR_16)
  {
   if (VAR_11->sk_flags & VAR_1)
    VAR_17 = 1;
   else
    VAR_17 = -1;
  }
  else
  {
   VAR_17 = FUNC_3(FUNC_4(&VAR_11->sk_func,
              VAR_11->sk_collation,
              VAR_15,
              VAR_11->sk_argument));

   if (!(VAR_11->sk_flags & VAR_0))
    FUNC_5(VAR_17);
  }


  if (VAR_17 != 0)
   return VAR_17;

  VAR_11++;
 }
 if (VAR_4->keysz > VAR_13)
  return 1;






 VAR_10 = FUNC_1(VAR_9);
 if (VAR_4->scantid == ((void*)0))
 {
  if (VAR_4->heapkeyspace && !VAR_4->pivotsearch &&
   VAR_4->keysz == VAR_13 && VAR_10 == ((void*)0))
   return 1;


  return 0;
 }





 FUNC_0(VAR_4->keysz == FUNC_6(VAR_3));
 if (VAR_10 == ((void*)0))
  return 1;

 FUNC_0(VAR_13 >= FUNC_6(VAR_3));
 return FUNC_7(VAR_4->scantid, VAR_10);
}
