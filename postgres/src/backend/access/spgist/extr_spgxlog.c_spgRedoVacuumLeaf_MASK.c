
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nDead; int nPlaceholder; int nMove; int nChain; int stateSrc; } ;
typedef TYPE_1__ spgxlogVacuumLeaf ;
typedef int XLogRecPtr ;
struct TYPE_8__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_9__ {scalar_t__ tupstate; int nextOffset; } ;
typedef int SpGistState ;
typedef TYPE_3__* SpGistLeafTuple ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemIdData ;
typedef int * ItemId ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,int *) ;
 char* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ,int *,int,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_12(XLogReaderState *VAR_7)
{
 XLogRecPtr VAR_8 = VAR_7->EndRecPtr;
 char *VAR_9 = FUNC_9(VAR_7);
 spgxlogVacuumLeaf *VAR_10 = (spgxlogVacuumLeaf *) VAR_9;
 OffsetNumber *VAR_11;
 OffsetNumber *VAR_12;
 OffsetNumber *VAR_13;
 OffsetNumber *VAR_14;
 OffsetNumber *VAR_15;
 OffsetNumber *VAR_16;
 SpGistState VAR_17;
 Buffer VAR_18;
 Page VAR_19;
 int VAR_20;

 FUNC_10(&VAR_17, VAR_10->stateSrc);

 VAR_9 += VAR_6;
 VAR_11 = (OffsetNumber *) VAR_9;
 VAR_9 += sizeof(OffsetNumber) * VAR_10->nDead;
 VAR_12 = (OffsetNumber *) VAR_9;
 VAR_9 += sizeof(OffsetNumber) * VAR_10->nPlaceholder;
 VAR_13 = (OffsetNumber *) VAR_9;
 VAR_9 += sizeof(OffsetNumber) * VAR_10->nMove;
 VAR_14 = (OffsetNumber *) VAR_9;
 VAR_9 += sizeof(OffsetNumber) * VAR_10->nMove;
 VAR_15 = (OffsetNumber *) VAR_9;
 VAR_9 += sizeof(OffsetNumber) * VAR_10->nChain;
 VAR_16 = (OffsetNumber *) VAR_9;

 if (FUNC_8(VAR_7, 0, &VAR_18) == VAR_0)
 {
  VAR_19 = FUNC_1(VAR_18);

  FUNC_11(&VAR_17, VAR_19,
        VAR_11, VAR_10->nDead,
        VAR_3, VAR_3,
        VAR_1,
        VAR_2);

  FUNC_11(&VAR_17, VAR_19,
        VAR_12, VAR_10->nPlaceholder,
        VAR_5, VAR_5,
        VAR_1,
        VAR_2);


  for (VAR_20 = 0; VAR_20 < VAR_10->nMove; VAR_20++)
  {
   ItemId VAR_21 = FUNC_5(VAR_19, VAR_13[VAR_20]);
   ItemId VAR_22 = FUNC_5(VAR_19, VAR_14[VAR_20]);
   ItemIdData VAR_23;

   VAR_23 = *VAR_21;
   *VAR_21 = *VAR_22;
   *VAR_22 = VAR_23;
  }

  FUNC_11(&VAR_17, VAR_19,
        VAR_13, VAR_10->nMove,
        VAR_5, VAR_5,
        VAR_1,
        VAR_2);

  for (VAR_20 = 0; VAR_20 < VAR_10->nChain; VAR_20++)
  {
   SpGistLeafTuple VAR_24;

   VAR_24 = (SpGistLeafTuple) FUNC_4(VAR_19,
              FUNC_5(VAR_19, VAR_15[VAR_20]));
   FUNC_0(VAR_24->tupstate == VAR_4);
   VAR_24->nextOffset = VAR_16[VAR_20];
  }

  FUNC_6(VAR_19, VAR_8);
  FUNC_3(VAR_18);
 }
 if (FUNC_2(VAR_18))
  FUNC_7(VAR_18);
}
