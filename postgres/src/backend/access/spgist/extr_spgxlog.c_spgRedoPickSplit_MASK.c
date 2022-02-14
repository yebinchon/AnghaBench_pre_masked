
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
struct TYPE_15__ {int nDelete; int nInsert; scalar_t__ isRootSplit; scalar_t__ innerIsParent; int offnumInner; int nodeI; int offnumParent; scalar_t__ storesNulls; scalar_t__ initInner; scalar_t__ initDest; scalar_t__ initSrc; int stateSrc; } ;
typedef TYPE_1__ spgxlogPickSplit ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_16__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_18__ {int size; } ;
struct TYPE_17__ {int isBuild; } ;
typedef TYPE_3__ SpGistState ;
typedef TYPE_4__ SpGistLeafTupleData ;
typedef TYPE_4__ SpGistInnerTupleData ;
typedef scalar_t__ SpGistInnerTuple ;
typedef int * Page ;
typedef int OffsetNumber ;
typedef int Item ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int,int *) ;
 int FUNC_11 (TYPE_2__*,int,int *,int *,int *) ;
 char* FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (int *,int ,int ,int ) ;
 int FUNC_15 (TYPE_3__*,int ) ;
 int FUNC_16 (TYPE_4__*,char*,int) ;
 int FUNC_17 (TYPE_3__*,int *,int *,int,int ,int ,int ,int ) ;
 int FUNC_18 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_19(XLogReaderState *VAR_9)
{
 XLogRecPtr VAR_10 = VAR_9->EndRecPtr;
 char *VAR_11 = FUNC_12(VAR_9);
 spgxlogPickSplit *VAR_12 = (spgxlogPickSplit *) VAR_11;
 char *VAR_13;
 SpGistInnerTupleData VAR_14;
 SpGistState VAR_15;
 OffsetNumber *VAR_16;
 OffsetNumber *VAR_17;
 uint8 *VAR_18;
 Buffer VAR_19;
 Buffer VAR_20;
 Buffer VAR_21;
 Page VAR_22;
 Page VAR_23;
 Page VAR_24;
 int VAR_25;
 BlockNumber VAR_26;
 XLogRedoAction VAR_27;

 FUNC_11(VAR_9, 2, ((void*)0), ((void*)0), &VAR_26);

 FUNC_15(&VAR_15, VAR_12->stateSrc);

 VAR_11 += VAR_8;
 VAR_16 = (OffsetNumber *) VAR_11;
 VAR_11 += sizeof(OffsetNumber) * VAR_12->nDelete;
 VAR_17 = (OffsetNumber *) VAR_11;
 VAR_11 += sizeof(OffsetNumber) * VAR_12->nInsert;
 VAR_18 = (uint8 *) VAR_11;
 VAR_11 += sizeof(uint8) * VAR_12->nInsert;

 VAR_13 = VAR_11;

 FUNC_16(&VAR_14, VAR_13, sizeof(SpGistInnerTupleData));
 VAR_11 += VAR_14.size;



 if (VAR_12->isRootSplit)
 {

  VAR_19 = VAR_2;
  VAR_22 = ((void*)0);
 }
 else if (VAR_12->initSrc)
 {

  VAR_19 = FUNC_9(VAR_9, 0);
  VAR_22 = (Page) FUNC_1(VAR_19);

  FUNC_7(VAR_19,
       VAR_4 | (VAR_12->storesNulls ? VAR_5 : 0));

 }
 else
 {






  VAR_22 = ((void*)0);
  if (FUNC_10(VAR_9, 0, &VAR_19) == VAR_0)
  {
   VAR_22 = FUNC_1(VAR_19);






   if (!VAR_15.isBuild)
    FUNC_17(&VAR_15, VAR_22,
          VAR_16, VAR_12->nDelete,
          VAR_7,
          VAR_6,
          VAR_26,
          VAR_12->offnumInner);
   else
    FUNC_17(&VAR_15, VAR_22,
          VAR_16, VAR_12->nDelete,
          VAR_6,
          VAR_6,
          VAR_1,
          VAR_3);


  }
 }


 if (!FUNC_13(VAR_9, 1))
 {
  VAR_20 = VAR_2;
  VAR_23 = ((void*)0);
 }
 else if (VAR_12->initDest)
 {

  VAR_20 = FUNC_9(VAR_9, 1);
  VAR_23 = (Page) FUNC_1(VAR_20);

  FUNC_7(VAR_20,
       VAR_4 | (VAR_12->storesNulls ? VAR_5 : 0));

 }
 else
 {




  if (FUNC_10(VAR_9, 1, &VAR_20) == VAR_0)
   VAR_23 = (Page) FUNC_1(VAR_20);
  else
   VAR_23 = ((void*)0);
 }


 for (VAR_25 = 0; VAR_25 < VAR_12->nInsert; VAR_25++)
 {
  char *VAR_28;
  SpGistLeafTupleData VAR_29;


  VAR_28 = VAR_11;
  FUNC_16(&VAR_29, VAR_28, sizeof(SpGistLeafTupleData));
  VAR_11 += VAR_29.size;

  VAR_24 = VAR_18[VAR_25] ? VAR_23 : VAR_22;
  if (VAR_24 == ((void*)0))
   continue;

  FUNC_14(VAR_24, (Item) VAR_28, VAR_29.size,
        VAR_17[VAR_25]);
 }


 if (VAR_22 != ((void*)0))
 {
  FUNC_6(VAR_22, VAR_10);
  FUNC_3(VAR_19);
 }
 if (VAR_23 != ((void*)0))
 {
  FUNC_6(VAR_23, VAR_10);
  FUNC_3(VAR_20);
 }


 if (VAR_12->initInner)
 {
  VAR_21 = FUNC_9(VAR_9, 2);
  FUNC_7(VAR_21, (VAR_12->storesNulls ? VAR_5 : 0));
  VAR_27 = VAR_0;
 }
 else
  VAR_27 = FUNC_10(VAR_9, 2, &VAR_21);

 if (VAR_27 == VAR_0)
 {
  VAR_24 = FUNC_1(VAR_21);

  FUNC_14(VAR_24, (Item) VAR_13, VAR_14.size,
        VAR_12->offnumInner);


  if (VAR_12->innerIsParent)
  {
   SpGistInnerTuple VAR_30;

   VAR_30 = (SpGistInnerTuple) FUNC_4(VAR_24,
             FUNC_5(VAR_24, VAR_12->offnumParent));
   FUNC_18(VAR_30, VAR_12->nodeI,
         VAR_26, VAR_12->offnumInner);
  }

  FUNC_6(VAR_24, VAR_10);
  FUNC_3(VAR_21);
 }
 if (FUNC_2(VAR_21))
  FUNC_8(VAR_21);





 if (FUNC_2(VAR_19))
  FUNC_8(VAR_19);
 if (FUNC_2(VAR_20))
  FUNC_8(VAR_20);


 if (FUNC_13(VAR_9, 3))
 {
  Buffer VAR_31;

  if (FUNC_10(VAR_9, 3, &VAR_31) == VAR_0)
  {
   SpGistInnerTuple VAR_32;

   VAR_24 = FUNC_1(VAR_31);

   VAR_32 = (SpGistInnerTuple) FUNC_4(VAR_24,
             FUNC_5(VAR_24, VAR_12->offnumParent));
   FUNC_18(VAR_32, VAR_12->nodeI,
         VAR_26, VAR_12->offnumInner);

   FUNC_6(VAR_24, VAR_10);
   FUNC_3(VAR_31);
  }
  if (FUNC_2(VAR_31))
   FUNC_8(VAR_31);
 }
 else
  FUNC_0(VAR_12->innerIsParent || VAR_12->isRootSplit);
}
