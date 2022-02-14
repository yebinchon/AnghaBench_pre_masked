
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bt_blkno; } ;
typedef int Size ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef int Buffer ;
typedef TYPE_1__ BrinTuple ;
typedef int BrinRevmap ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 TYPE_1__* FUNC_12 (TYPE_1__*,int ,TYPE_1__*,int *) ;
 int FUNC_13 (int ,int ,int *,int ,int ,scalar_t__,TYPE_1__*,int ,TYPE_1__*,int ,int) ;

void
FUNC_14(Relation VAR_4, BlockNumber VAR_5,
       BrinRevmap *VAR_6, Buffer VAR_7)
{
 OffsetNumber VAR_8;
 OffsetNumber VAR_9;
 Page VAR_10;
 BrinTuple *VAR_11 = ((void*)0);
 Size VAR_12 = 0;

 VAR_10 = FUNC_3(VAR_7);

 FUNC_0(FUNC_2(VAR_10) & VAR_0);

 VAR_9 = FUNC_10(VAR_10);
 for (VAR_8 = VAR_3; VAR_8 <= VAR_9; VAR_8++)
 {
  BrinTuple *VAR_13;
  Size VAR_14;
  ItemId VAR_15;

  FUNC_4();

  VAR_15 = FUNC_9(VAR_10, VAR_8);
  if (FUNC_6(VAR_15))
  {
   VAR_14 = FUNC_5(VAR_15);
   VAR_13 = (BrinTuple *) FUNC_8(VAR_10, VAR_15);
   VAR_13 = FUNC_12(VAR_13, VAR_14, VAR_11, &VAR_12);

   FUNC_7(VAR_7, VAR_2);

   if (!FUNC_13(VAR_4, VAR_5, VAR_6, VAR_13->bt_blkno,
          VAR_7, VAR_8, VAR_13, VAR_14, VAR_13, VAR_14, 0))
    VAR_8--;

   FUNC_7(VAR_7, VAR_1);


   if (!FUNC_1(VAR_10))
    break;
  }
 }

 FUNC_11(VAR_7);
}
