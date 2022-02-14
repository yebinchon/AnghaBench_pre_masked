
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ntups; scalar_t__ is_prim_bucket_same_wrt; } ;
typedef TYPE_1__ xl_hash_move_page_contents ;
typedef size_t uint16 ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_9__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef int Size ;
typedef scalar_t__ Page ;
typedef scalar_t__ OffsetNumber ;
typedef int Item ;
typedef scalar_t__ IndexTuple ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int,scalar_t__,int,int) ;
 int FUNC_7 (scalar_t__,scalar_t__*,int) ;
 int FUNC_8 (scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int,int ,int,int *) ;
 char* FUNC_12 (TYPE_2__*,int,int*) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_15(XLogReaderState *VAR_5)
{
 XLogRecPtr VAR_6 = VAR_5->EndRecPtr;
 xl_hash_move_page_contents *VAR_7 = (xl_hash_move_page_contents *) FUNC_13(VAR_5);
 Buffer VAR_8 = VAR_2;
 Buffer VAR_9 = VAR_2;
 Buffer VAR_10 = VAR_2;
 XLogRedoAction VAR_11;
 if (VAR_7->is_prim_bucket_same_wrt)
  VAR_11 = FUNC_11(VAR_5, 1, VAR_4, 1, &VAR_9);
 else
 {




  (void) FUNC_11(VAR_5, 0, VAR_4, 1, &VAR_8);

  VAR_11 = FUNC_10(VAR_5, 1, &VAR_9);
 }


 if (VAR_11 == VAR_0)
 {
  Page VAR_12;
  char *VAR_13;
  char *VAR_14;
  Size VAR_15;
  uint16 VAR_16 = 0;

  VAR_14 = VAR_13 = FUNC_12(VAR_5, 1, &VAR_15);

  VAR_12 = (Page) FUNC_1(VAR_9);

  if (VAR_7->ntups > 0)
  {
   OffsetNumber *VAR_17 = (OffsetNumber *) VAR_14;

   VAR_14 += sizeof(OffsetNumber) * VAR_7->ntups;

   while (VAR_14 - VAR_13 < VAR_15)
   {
    IndexTuple VAR_18 = (IndexTuple) VAR_14;
    Size VAR_19;
    OffsetNumber VAR_20;

    VAR_19 = FUNC_3(VAR_18);
    VAR_19 = FUNC_4(VAR_19);

    VAR_14 += VAR_19;

    VAR_20 = FUNC_6(VAR_12, (Item) VAR_18, VAR_19, VAR_17[VAR_16], 0, 0);
    if (VAR_20 == VAR_3)
     FUNC_14(VAR_1, "hash_xlog_move_page_contents: failed to add item to hash index page, size %d bytes",
       (int) VAR_19);

    VAR_16++;
   }
  }




  FUNC_0(VAR_16 == VAR_7->ntups);

  FUNC_8(VAR_12, VAR_6);
  FUNC_5(VAR_9);
 }


 if (FUNC_10(VAR_5, 2, &VAR_10) == VAR_0)
 {
  Page VAR_21;
  char *VAR_22;
  Size VAR_23;

  VAR_22 = FUNC_12(VAR_5, 2, &VAR_23);

  VAR_21 = (Page) FUNC_1(VAR_10);

  if (VAR_23 > 0)
  {
   OffsetNumber *VAR_24;
   OffsetNumber *VAR_25;

   VAR_24 = (OffsetNumber *) VAR_22;
   VAR_25 = (OffsetNumber *) ((char *) VAR_22 + VAR_23);

   if ((VAR_25 - VAR_24) > 0)
    FUNC_7(VAR_21, VAR_24, VAR_25 - VAR_24);
  }

  FUNC_8(VAR_21, VAR_6);
  FUNC_5(VAR_10);
 }
 if (FUNC_2(VAR_10))
  FUNC_9(VAR_10);

 if (FUNC_2(VAR_9))
  FUNC_9(VAR_9);

 if (FUNC_2(VAR_8))
  FUNC_9(VAR_8);
}
