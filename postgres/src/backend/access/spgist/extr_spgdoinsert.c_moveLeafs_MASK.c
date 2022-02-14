
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int nMoves; int replaceDead; int storesNulls; int offnumParent; scalar_t__ newPage; int nodeI; int stateSrc; } ;
typedef TYPE_1__ spgxlogMoveLeafs ;
typedef int XLogRecPtr ;
struct TYPE_17__ {scalar_t__ buffer; int offnum; scalar_t__ blkno; int page; int node; } ;
struct TYPE_16__ {int size; scalar_t__ tupstate; int nextOffset; } ;
struct TYPE_15__ {scalar_t__ isBuild; } ;
typedef TYPE_2__ SpGistState ;
typedef TYPE_3__* SpGistLeafTuple ;
typedef TYPE_4__ SPPageDesc ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemIdData ;
typedef int Item ;
typedef scalar_t__ Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_12 (int ,int,int,scalar_t__*) ;
 int FUNC_13 (TYPE_2__*,int ,int ,int,int*,int) ;
 int FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 int VAR_14 ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int,scalar_t__,int) ;
 int FUNC_19 (char*,int) ;
 int FUNC_20 (int ,char*,scalar_t__) ;
 int FUNC_21 (char*,TYPE_3__*,int) ;
 char* FUNC_22 (int) ;
 int FUNC_23 (int ,TYPE_4__*,scalar_t__,int) ;
 int FUNC_24 (TYPE_2__*,int ,int*,int,int ,int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_25(Relation VAR_15, SpGistState *VAR_16,
    SPPageDesc *VAR_17, SPPageDesc *VAR_18,
    SpGistLeafTuple VAR_19, bool VAR_20)
{
 int VAR_21,
    VAR_22,
    VAR_23,
    VAR_24;
 Buffer VAR_25;
 Page VAR_26;
 SpGistLeafTuple VAR_27;
 OffsetNumber VAR_28 = VAR_5,
    VAR_29 = VAR_5;
 bool VAR_30 = 0;
 OffsetNumber *VAR_31;
 OffsetNumber *VAR_32;
 BlockNumber VAR_33;
 spgxlogMoveLeafs VAR_34;
 char *VAR_35,
      *VAR_36;


 FUNC_0(VAR_18->buffer != VAR_4);
 FUNC_0(VAR_18->buffer != VAR_17->buffer);


 VAR_21 = FUNC_7(VAR_17->page);
 VAR_31 = (OffsetNumber *) FUNC_22(sizeof(OffsetNumber) * VAR_21);
 VAR_32 = (OffsetNumber *) FUNC_22(sizeof(OffsetNumber) * (VAR_21 + 1));

 VAR_24 = VAR_19->size + sizeof(ItemIdData);

 VAR_22 = 0;
 VAR_21 = VAR_17->offnum;
 while (VAR_21 != VAR_5)
 {
  SpGistLeafTuple VAR_37;

  FUNC_0(VAR_21 >= VAR_1 &&
      VAR_21 <= FUNC_7(VAR_17->page));
  VAR_37 = (SpGistLeafTuple) FUNC_5(VAR_17->page,
             FUNC_6(VAR_17->page, VAR_21));

  if (VAR_37->tupstate == VAR_10)
  {
   VAR_31[VAR_22] = VAR_21;
   VAR_24 += VAR_37->size + sizeof(ItemIdData);
   VAR_22++;
  }
  else if (VAR_37->tupstate == VAR_9)
  {

   FUNC_0(VAR_21 == VAR_17->offnum);
   FUNC_0(VAR_37->nextOffset == VAR_5);

   VAR_31[VAR_22] = VAR_21;
   VAR_22++;
   VAR_30 = 1;
  }
  else
   FUNC_20(VAR_0, "unexpected SPGiST tuple state: %d", VAR_37->tupstate);

  VAR_21 = VAR_37->nextOffset;
 }


 VAR_25 = FUNC_12(VAR_15, VAR_2 | (VAR_20 ? VAR_3 : 0),
         VAR_24, &VAR_34.newPage);
 VAR_26 = FUNC_2(VAR_25);
 VAR_33 = FUNC_1(VAR_25);
 FUNC_0(VAR_33 != VAR_17->blkno);

 VAR_35 = VAR_36 = FUNC_22(VAR_24);

 FUNC_10();


 VAR_23 = 0;
 if (!VAR_30)
 {
  for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++)
  {
   VAR_27 = (SpGistLeafTuple) FUNC_5(VAR_17->page,
              FUNC_6(VAR_17->page, VAR_31[VAR_21]));
   FUNC_0(VAR_27->tupstate == VAR_10);






   VAR_27->nextOffset = VAR_28;

   VAR_28 = FUNC_13(VAR_16, VAR_26, (Item) VAR_27, VAR_27->size,
          &VAR_29, 0);

   VAR_32[VAR_23] = VAR_28;
   VAR_23++;


   FUNC_21(VAR_36, VAR_27, VAR_27->size);
   VAR_36 += VAR_27->size;
  }
 }


 VAR_19->nextOffset = VAR_28;
 VAR_28 = FUNC_13(VAR_16, VAR_26,
        (Item) VAR_19, VAR_19->size,
        &VAR_29, 0);
 VAR_32[VAR_23] = VAR_28;
 VAR_23++;
 FUNC_21(VAR_36, VAR_19, VAR_19->size);
 VAR_36 += VAR_19->size;






 FUNC_24(VAR_16, VAR_17->page, VAR_31, VAR_22,
       VAR_16->isBuild ? VAR_11 : VAR_12,
       VAR_11,
       VAR_33, VAR_28);


 FUNC_23(VAR_15, VAR_18, VAR_33, VAR_28);


 FUNC_4(VAR_17->buffer);
 FUNC_4(VAR_25);

 if (FUNC_9(VAR_15) && !VAR_16->isBuild)
 {
  XLogRecPtr VAR_38;


  FUNC_11(VAR_16, VAR_34.stateSrc);

  VAR_34.nMoves = VAR_22;
  VAR_34.replaceDead = VAR_30;
  VAR_34.storesNulls = VAR_20;

  VAR_34.offnumParent = VAR_18->offnum;
  VAR_34.nodeI = VAR_18->node;

  FUNC_16();
  FUNC_19((char *) &VAR_34, VAR_13);
  FUNC_19((char *) VAR_31,
       sizeof(OffsetNumber) * VAR_22);
  FUNC_19((char *) VAR_32,
       sizeof(OffsetNumber) * VAR_23);
  FUNC_19((char *) VAR_35, VAR_36 - VAR_35);

  FUNC_18(0, VAR_17->buffer, VAR_6);
  FUNC_18(1, VAR_25, VAR_6 | (VAR_34.newPage ? VAR_7 : 0));
  FUNC_18(2, VAR_18->buffer, VAR_6);

  VAR_38 = FUNC_17(VAR_8, VAR_14);

  FUNC_8(VAR_17->page, VAR_38);
  FUNC_8(VAR_26, VAR_38);
  FUNC_8(VAR_18->page, VAR_38);
 }

 FUNC_3();


 FUNC_14(VAR_15, VAR_25);
 FUNC_15(VAR_25);
}
