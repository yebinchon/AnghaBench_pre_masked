
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int nMoves; int nodeI; int offnumParent; scalar_t__ storesNulls; scalar_t__ newPage; scalar_t__ replaceDead; int stateSrc; } ;
typedef TYPE_1__ spgxlogMoveLeafs ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_14__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_16__ {int size; } ;
struct TYPE_15__ {scalar_t__ isBuild; } ;
typedef TYPE_3__ SpGistState ;
typedef TYPE_4__ SpGistLeafTupleData ;
typedef scalar_t__ SpGistInnerTuple ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int Item ;
typedef int Buffer ;
typedef int BlockNumber ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int,int *) ;
 int FUNC_10 (TYPE_2__*,int,int *,int *,int *) ;
 char* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (TYPE_3__*,int ) ;
 int FUNC_14 (TYPE_4__*,char*,int) ;
 int FUNC_15 (TYPE_3__*,int ,int *,int,int ,int ,int ,int ) ;
 int FUNC_16 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_17(XLogReaderState *VAR_6)
{
 XLogRecPtr VAR_7 = VAR_6->EndRecPtr;
 char *VAR_8 = FUNC_11(VAR_6);
 spgxlogMoveLeafs *VAR_9 = (spgxlogMoveLeafs *) VAR_8;
 SpGistState VAR_10;
 OffsetNumber *VAR_11;
 OffsetNumber *VAR_12;
 int VAR_13;
 Buffer VAR_14;
 Page VAR_15;
 XLogRedoAction VAR_16;
 BlockNumber VAR_17;

 FUNC_10(VAR_6, 1, ((void*)0), ((void*)0), &VAR_17);

 FUNC_13(&VAR_10, VAR_9->stateSrc);

 VAR_13 = VAR_9->replaceDead ? 1 : VAR_9->nMoves + 1;

 VAR_8 += VAR_5;
 VAR_11 = (OffsetNumber *) VAR_8;
 VAR_8 += sizeof(OffsetNumber) * VAR_9->nMoves;
 VAR_12 = (OffsetNumber *) VAR_8;
 VAR_8 += sizeof(OffsetNumber) * VAR_13;
 if (VAR_9->newPage)
 {
  VAR_14 = FUNC_8(VAR_6, 1);
  FUNC_6(VAR_14,
       VAR_1 | (VAR_9->storesNulls ? VAR_2 : 0));
  VAR_16 = VAR_0;
 }
 else
  VAR_16 = FUNC_9(VAR_6, 1, &VAR_14);

 if (VAR_16 == VAR_0)
 {
  int VAR_18;

  VAR_15 = FUNC_0(VAR_14);

  for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++)
  {
   char *VAR_19;
   SpGistLeafTupleData VAR_20;





   VAR_19 = VAR_8;
   FUNC_14(&VAR_20, VAR_19,
       sizeof(SpGistLeafTupleData));

   FUNC_12(VAR_15, (Item) VAR_19,
         VAR_20.size, VAR_12[VAR_18]);
   VAR_8 += VAR_20.size;
  }

  FUNC_5(VAR_15, VAR_7);
  FUNC_2(VAR_14);
 }
 if (FUNC_1(VAR_14))
  FUNC_7(VAR_14);


 if (FUNC_9(VAR_6, 0, &VAR_14) == VAR_0)
 {
  VAR_15 = FUNC_0(VAR_14);

  FUNC_15(&VAR_10, VAR_15, VAR_11, VAR_9->nMoves,
        VAR_10.isBuild ? VAR_3 : VAR_4,
        VAR_3,
        VAR_17,
        VAR_12[VAR_13 - 1]);

  FUNC_5(VAR_15, VAR_7);
  FUNC_2(VAR_14);
 }
 if (FUNC_1(VAR_14))
  FUNC_7(VAR_14);


 if (FUNC_9(VAR_6, 2, &VAR_14) == VAR_0)
 {
  SpGistInnerTuple VAR_21;

  VAR_15 = FUNC_0(VAR_14);

  VAR_21 = (SpGistInnerTuple) FUNC_3(VAR_15,
              FUNC_4(VAR_15, VAR_9->offnumParent));

  FUNC_16(VAR_21, VAR_9->nodeI,
        VAR_17, VAR_12[VAR_13 - 1]);

  FUNC_5(VAR_15, VAR_7);
  FUNC_2(VAR_14);
 }
 if (FUNC_1(VAR_14))
  FUNC_7(VAR_14);
}
