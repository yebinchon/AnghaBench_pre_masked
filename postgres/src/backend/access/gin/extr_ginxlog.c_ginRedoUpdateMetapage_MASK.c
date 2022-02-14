
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ntuples; scalar_t__ prevTail; int newRightlink; int metadata; } ;
typedef TYPE_1__ ginxlogUpdateMeta ;
typedef int XLogRecPtr ;
struct TYPE_10__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_11__ {int rightlink; int maxoff; } ;
typedef int Size ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int Item ;
typedef scalar_t__ IndexTuple ;
typedef int GinMetaPageData ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_8__* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,int,int ,int,int) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_16 (TYPE_2__*,int,int *) ;
 char* FUNC_17 (TYPE_2__*,int,int*) ;
 scalar_t__ FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_21(XLogReaderState *VAR_6)
{
 XLogRecPtr VAR_7 = VAR_6->EndRecPtr;
 ginxlogUpdateMeta *VAR_8 = (ginxlogUpdateMeta *) FUNC_18(VAR_6);
 Buffer VAR_9;
 Page VAR_10;
 Buffer VAR_11;






 VAR_9 = FUNC_15(VAR_6, 0);
 FUNC_0(FUNC_1(VAR_9) == VAR_3);
 VAR_10 = FUNC_2(VAR_9);

 FUNC_4(VAR_9);
 FUNC_20(FUNC_5(VAR_10), &VAR_8->metadata, sizeof(GinMetaPageData));
 FUNC_13(VAR_10, VAR_7);
 FUNC_8(VAR_9);

 if (VAR_8->ntuples > 0)
 {



  if (FUNC_16(VAR_6, 1, &VAR_11) == VAR_0)
  {
   Page VAR_12 = FUNC_2(VAR_11);
   OffsetNumber VAR_13;
   int VAR_14;
   Size VAR_15;
   char *VAR_16;
   IndexTuple VAR_17;
   Size VAR_18;

   VAR_16 = FUNC_17(VAR_6, 1, &VAR_18);
   VAR_17 = (IndexTuple) VAR_16;

   if (FUNC_12(VAR_12))
    VAR_13 = VAR_2;
   else
    VAR_13 = FUNC_9(FUNC_11(VAR_12));

   for (VAR_14 = 0; VAR_14 < VAR_8->ntuples; VAR_14++)
   {
    VAR_15 = FUNC_7(VAR_17);

    if (FUNC_10(VAR_12, (Item) VAR_17, VAR_15, VAR_13,
        0, 0) == VAR_5)
     FUNC_19(VAR_1, "failed to add item to index page");

    VAR_17 = (IndexTuple) (((char *) VAR_17) + VAR_15);

    VAR_13++;
   }
   FUNC_0(VAR_16 + VAR_18 == (char *) VAR_17);




   FUNC_6(VAR_12)->maxoff++;

   FUNC_13(VAR_12, VAR_7);
   FUNC_8(VAR_11);
  }
  if (FUNC_3(VAR_11))
   FUNC_14(VAR_11);
 }
 else if (VAR_8->prevTail != VAR_4)
 {



  if (FUNC_16(VAR_6, 1, &VAR_11) == VAR_0)
  {
   Page VAR_19 = FUNC_2(VAR_11);

   FUNC_6(VAR_19)->rightlink = VAR_8->newRightlink;

   FUNC_13(VAR_19, VAR_7);
   FUNC_8(VAR_11);
  }
  if (FUNC_3(VAR_11))
   FUNC_14(VAR_11);
 }

 FUNC_14(VAR_9);
}
