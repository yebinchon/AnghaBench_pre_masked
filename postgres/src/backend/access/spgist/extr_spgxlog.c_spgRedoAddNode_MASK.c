
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


struct TYPE_18__ {int parentBlk; scalar_t__ offnum; int offnumNew; int nodeI; int offnumParent; scalar_t__ newPage; int stateSrc; } ;
typedef TYPE_1__ spgxlogAddNode ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_19__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_22__ {int size; } ;
struct TYPE_21__ {int size; } ;
struct TYPE_20__ {scalar_t__ isBuild; } ;
struct TYPE_17__ {int nRedirection; int nPlaceholder; } ;
typedef TYPE_3__ SpGistState ;
typedef TYPE_4__ SpGistInnerTupleData ;
typedef scalar_t__ SpGistInnerTuple ;
typedef TYPE_5__* SpGistDeadTuple ;
typedef int Page ;
typedef int Item ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,scalar_t__,int,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ,int ) ;
 TYPE_16__* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*,int) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int,int *) ;
 int FUNC_14 (TYPE_2__*,int,int *,int *,int *) ;
 char* FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int) ;
 int FUNC_17 (int ,int ,int ,int ) ;
 int FUNC_18 (int ,char*,int ) ;
 int FUNC_19 (TYPE_3__*,int ) ;
 int FUNC_20 (TYPE_4__*,char*,int) ;
 TYPE_5__* FUNC_21 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_22 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_23(XLogReaderState *VAR_6)
{
 XLogRecPtr VAR_7 = VAR_6->EndRecPtr;
 char *VAR_8 = FUNC_15(VAR_6);
 spgxlogAddNode *VAR_9 = (spgxlogAddNode *) VAR_8;
 char *VAR_10;
 SpGistInnerTupleData VAR_11;
 SpGistState VAR_12;
 Buffer VAR_13;
 Page VAR_14;
 XLogRedoAction VAR_15;

 VAR_8 += sizeof(spgxlogAddNode);
 VAR_10 = VAR_8;

 FUNC_20(&VAR_11, VAR_10, sizeof(SpGistInnerTupleData));

 FUNC_19(&VAR_12, VAR_9->stateSrc);

 if (!FUNC_16(VAR_6, 1))
 {

  FUNC_0(VAR_9->parentBlk == -1);
  if (FUNC_13(VAR_6, 0, &VAR_13) == VAR_0)
  {
   VAR_14 = FUNC_1(VAR_13);

   FUNC_7(VAR_14, VAR_9->offnum);
   if (FUNC_4(VAR_14, (Item) VAR_10, VAR_11.size,
       VAR_9->offnum,
       0, 0) != VAR_9->offnum)
    FUNC_18(VAR_1, "failed to add item of size %u to SPGiST index page",
      VAR_11.size);

   FUNC_8(VAR_14, VAR_7);
   FUNC_3(VAR_13);
  }
  if (FUNC_2(VAR_13))
   FUNC_11(VAR_13);
 }
 else
 {
  BlockNumber VAR_16;
  BlockNumber VAR_17;

  FUNC_14(VAR_6, 0, ((void*)0), ((void*)0), &VAR_16);
  FUNC_14(VAR_6, 1, ((void*)0), ((void*)0), &VAR_17);
  if (VAR_9->newPage)
  {

   VAR_13 = FUNC_12(VAR_6, 1);
   FUNC_9(VAR_13, 0);
   VAR_15 = VAR_0;
  }
  else
   VAR_15 = FUNC_13(VAR_6, 1, &VAR_13);
  if (VAR_15 == VAR_0)
  {
   VAR_14 = FUNC_1(VAR_13);

   FUNC_17(VAR_14, (Item) VAR_10,
         VAR_11.size, VAR_9->offnumNew);




   if (VAR_9->parentBlk == 1)
   {
    SpGistInnerTuple VAR_18;

    VAR_18 = (SpGistInnerTuple) FUNC_5(VAR_14,
                FUNC_6(VAR_14, VAR_9->offnumParent));

    FUNC_22(VAR_18, VAR_9->nodeI,
          VAR_17, VAR_9->offnumNew);
   }
   FUNC_8(VAR_14, VAR_7);
   FUNC_3(VAR_13);
  }
  if (FUNC_2(VAR_13))
   FUNC_11(VAR_13);


  if (FUNC_13(VAR_6, 0, &VAR_13) == VAR_0)
  {
   SpGistDeadTuple VAR_19;

   VAR_14 = FUNC_1(VAR_13);

   if (VAR_12.isBuild)
    VAR_19 = FUNC_21(&VAR_12, VAR_4,
           VAR_2,
           VAR_3);
   else
    VAR_19 = FUNC_21(&VAR_12, VAR_5,
           VAR_17,
           VAR_9->offnumNew);

   FUNC_7(VAR_14, VAR_9->offnum);
   if (FUNC_4(VAR_14, (Item) VAR_19, VAR_19->size,
       VAR_9->offnum,
       0, 0) != VAR_9->offnum)
    FUNC_18(VAR_1, "failed to add item of size %u to SPGiST index page",
      VAR_19->size);

   if (VAR_12.isBuild)
    FUNC_10(VAR_14)->nPlaceholder++;
   else
    FUNC_10(VAR_14)->nRedirection++;




   if (VAR_9->parentBlk == 0)
   {
    SpGistInnerTuple VAR_20;

    VAR_20 = (SpGistInnerTuple) FUNC_5(VAR_14,
                FUNC_6(VAR_14, VAR_9->offnumParent));

    FUNC_22(VAR_20, VAR_9->nodeI,
          VAR_17, VAR_9->offnumNew);
   }
   FUNC_8(VAR_14, VAR_7);
   FUNC_3(VAR_13);
  }
  if (FUNC_2(VAR_13))
   FUNC_11(VAR_13);





  if (VAR_9->parentBlk == 2)
  {
   if (FUNC_13(VAR_6, 2, &VAR_13) == VAR_0)
   {
    SpGistInnerTuple VAR_21;

    VAR_14 = FUNC_1(VAR_13);

    VAR_21 = (SpGistInnerTuple) FUNC_5(VAR_14,
                FUNC_6(VAR_14, VAR_9->offnumParent));

    FUNC_22(VAR_21, VAR_9->nodeI,
          VAR_17, VAR_9->offnumNew);

    FUNC_8(VAR_14, VAR_7);
    FUNC_3(VAR_13);
   }
   if (FUNC_2(VAR_13))
    FUNC_11(VAR_13);
  }
 }
}
