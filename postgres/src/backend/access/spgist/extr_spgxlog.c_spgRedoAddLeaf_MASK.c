
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ offnumLeaf; scalar_t__ offnumHeadLeaf; scalar_t__ offnumParent; int nodeI; scalar_t__ storesNulls; scalar_t__ newPage; } ;
typedef TYPE_1__ spgxlogAddLeaf ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_12__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_14__ {scalar_t__ nextOffset; } ;
struct TYPE_13__ {scalar_t__ nextOffset; int size; } ;
typedef TYPE_3__ SpGistLeafTupleData ;
typedef TYPE_4__* SpGistLeafTuple ;
typedef scalar_t__ SpGistInnerTuple ;
typedef int Page ;
typedef int Item ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,scalar_t__,int,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int,int *) ;
 int FUNC_13 (TYPE_2__*,int ,int *,int *,int *) ;
 char* FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int ,int ,int ,scalar_t__) ;
 int FUNC_16 (int ,char*,int ) ;
 int FUNC_17 (TYPE_3__*,char*,int) ;
 int FUNC_18 (scalar_t__,int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_19(XLogReaderState *VAR_5)
{
 XLogRecPtr VAR_6 = VAR_5->EndRecPtr;
 char *VAR_7 = FUNC_14(VAR_5);
 spgxlogAddLeaf *VAR_8 = (spgxlogAddLeaf *) VAR_7;
 char *VAR_9;
 SpGistLeafTupleData VAR_10;
 Buffer VAR_11;
 Page VAR_12;
 XLogRedoAction VAR_13;

 VAR_7 += sizeof(spgxlogAddLeaf);
 VAR_9 = VAR_7;

 FUNC_17(&VAR_10, VAR_9, sizeof(SpGistLeafTupleData));






 if (VAR_8->newPage)
 {
  VAR_11 = FUNC_11(VAR_5, 0);
  FUNC_9(VAR_11,
       VAR_3 | (VAR_8->storesNulls ? VAR_4 : 0));
  VAR_13 = VAR_0;
 }
 else
  VAR_13 = FUNC_12(VAR_5, 0, &VAR_11);

 if (VAR_13 == VAR_0)
 {
  VAR_12 = FUNC_1(VAR_11);


  if (VAR_8->offnumLeaf != VAR_8->offnumHeadLeaf)
  {

   FUNC_15(VAR_12, (Item) VAR_9, VAR_10.size,
         VAR_8->offnumLeaf);


   if (VAR_8->offnumHeadLeaf != VAR_2)
   {
    SpGistLeafTuple VAR_14;

    VAR_14 = (SpGistLeafTuple) FUNC_5(VAR_12,
              FUNC_6(VAR_12, VAR_8->offnumHeadLeaf));
    FUNC_0(VAR_14->nextOffset == VAR_10.nextOffset);
    VAR_14->nextOffset = VAR_8->offnumLeaf;
   }
  }
  else
  {

   FUNC_7(VAR_12, VAR_8->offnumLeaf);
   if (FUNC_4(VAR_12,
       (Item) VAR_9, VAR_10.size,
       VAR_8->offnumLeaf, 0, 0) != VAR_8->offnumLeaf)
    FUNC_16(VAR_1, "failed to add item of size %u to SPGiST index page",
      VAR_10.size);
  }

  FUNC_8(VAR_12, VAR_6);
  FUNC_3(VAR_11);
 }
 if (FUNC_2(VAR_11))
  FUNC_10(VAR_11);


 if (VAR_8->offnumParent != VAR_2)
 {
  if (FUNC_12(VAR_5, 1, &VAR_11) == VAR_0)
  {
   SpGistInnerTuple VAR_15;
   BlockNumber VAR_16;

   FUNC_13(VAR_5, 0, ((void*)0), ((void*)0), &VAR_16);

   VAR_12 = FUNC_1(VAR_11);

   VAR_15 = (SpGistInnerTuple) FUNC_5(VAR_12,
               FUNC_6(VAR_12, VAR_8->offnumParent));

   FUNC_18(VAR_15, VAR_8->nodeI,
         VAR_16, VAR_8->offnumLeaf);

   FUNC_8(VAR_12, VAR_6);
   FUNC_3(VAR_11);
  }
  if (FUNC_2(VAR_11))
   FUNC_10(VAR_11);
 }
}
