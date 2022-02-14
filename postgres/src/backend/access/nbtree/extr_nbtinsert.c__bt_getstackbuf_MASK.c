
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ btpo_next; } ;
struct TYPE_8__ {scalar_t__ bts_blkno; scalar_t__ bts_offset; int bts_parent; } ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef scalar_t__ IndexTuple ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_1__* BTStack ;
typedef TYPE_2__* BTPageOpaque ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,scalar_t__,int ) ;
 int FUNC_14 (int ,int ) ;

Buffer
FUNC_15(Relation VAR_3, BTStack VAR_4, BlockNumber VAR_5)
{
 BlockNumber VAR_6;
 OffsetNumber VAR_7;

 VAR_6 = VAR_4->bts_blkno;
 VAR_7 = VAR_4->bts_offset;

 for (;;)
 {
  Buffer VAR_8;
  Page VAR_9;
  BTPageOpaque VAR_10;

  VAR_8 = FUNC_13(VAR_3, VAR_6, VAR_0);
  VAR_9 = FUNC_1(VAR_8);
  VAR_10 = (BTPageOpaque) FUNC_11(VAR_9);

  if (FUNC_6(VAR_10))
  {
   FUNC_12(VAR_3, VAR_8, VAR_4->bts_parent);
   continue;
  }

  if (!FUNC_5(VAR_10))
  {
   OffsetNumber VAR_11,
      VAR_12,
      VAR_13;
   ItemId VAR_14;
   IndexTuple VAR_15;

   VAR_12 = FUNC_4(VAR_10);
   VAR_13 = FUNC_10(VAR_9);






   if (VAR_7 < VAR_12)
    VAR_7 = VAR_12;





   if (VAR_7 > VAR_13)
    VAR_7 = FUNC_2(VAR_13);






   for (VAR_11 = VAR_7;
     VAR_11 <= VAR_13;
     VAR_11 = FUNC_2(VAR_11))
   {
    VAR_14 = FUNC_9(VAR_9, VAR_11);
    VAR_15 = (IndexTuple) FUNC_8(VAR_9, VAR_14);

    if (FUNC_0(VAR_15) == VAR_5)
    {

     VAR_4->bts_blkno = VAR_6;
     VAR_4->bts_offset = VAR_11;
     return VAR_8;
    }
   }

   for (VAR_11 = FUNC_3(VAR_7);
     VAR_11 >= VAR_12;
     VAR_11 = FUNC_3(VAR_11))
   {
    VAR_14 = FUNC_9(VAR_9, VAR_11);
    VAR_15 = (IndexTuple) FUNC_8(VAR_9, VAR_14);

    if (FUNC_0(VAR_15) == VAR_5)
    {

     VAR_4->bts_blkno = VAR_6;
     VAR_4->bts_offset = VAR_11;
     return VAR_8;
    }
   }
  }







  if (FUNC_7(VAR_10))
  {
   FUNC_14(VAR_3, VAR_8);
   return VAR_1;
  }
  VAR_6 = VAR_10->btpo_next;
  VAR_7 = VAR_2;
  FUNC_14(VAR_3, VAR_8);
 }
}
