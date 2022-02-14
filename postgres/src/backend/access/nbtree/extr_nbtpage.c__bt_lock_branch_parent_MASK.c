
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ btpo_next; scalar_t__ btpo_prev; } ;
struct TYPE_9__ {scalar_t__ bts_blkno; scalar_t__ bts_offset; struct TYPE_9__* bts_parent; } ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef scalar_t__ Buffer ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_1__* BTStack ;
typedef TYPE_2__* BTPageOpaque ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int ,TYPE_1__*,scalar_t__) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_14(Relation VAR_5, BlockNumber VAR_6, BTStack VAR_7,
        Buffer *VAR_8, OffsetNumber *VAR_9,
        BlockNumber *VAR_10, BlockNumber *VAR_11)
{
 BlockNumber VAR_12;
 OffsetNumber VAR_13,
    VAR_14;
 Buffer VAR_15;
 Page VAR_16;
 BTPageOpaque VAR_17;
 BlockNumber VAR_18;







 VAR_15 = FUNC_9(VAR_5, VAR_7, VAR_6);
 if (VAR_15 == VAR_3)
  FUNC_11(VAR_2,
    (FUNC_12(VAR_1),
     FUNC_13("failed to re-find parent key in index \"%s\" for deletion target page %u",
         FUNC_7(VAR_5), VAR_6)));
 VAR_12 = VAR_7->bts_blkno;
 VAR_13 = VAR_7->bts_offset;

 VAR_16 = FUNC_0(VAR_15);
 VAR_17 = (BTPageOpaque) FUNC_6(VAR_16);
 VAR_14 = FUNC_5(VAR_16);





 if (VAR_13 >= VAR_14)
 {

  if (VAR_13 == FUNC_1(VAR_17))
  {





   if (FUNC_4(VAR_17) || FUNC_3(VAR_17) ||
    FUNC_2(VAR_17))
   {
    FUNC_10(VAR_5, VAR_15);
    return 0;
   }

   *VAR_10 = VAR_12;
   *VAR_11 = VAR_17->btpo_next;
   VAR_18 = VAR_17->btpo_prev;

   FUNC_10(VAR_5, VAR_15);







   if (VAR_18 != VAR_4)
   {
    Buffer VAR_19;
    Page VAR_20;
    BTPageOpaque VAR_21;

    VAR_19 = FUNC_8(VAR_5, VAR_18, VAR_0);
    VAR_20 = FUNC_0(VAR_19);
    VAR_21 = (BTPageOpaque) FUNC_6(VAR_20);
    if (VAR_21->btpo_next == VAR_12 &&
     FUNC_2(VAR_21))
    {
     FUNC_10(VAR_5, VAR_19);
     return 0;
    }
    FUNC_10(VAR_5, VAR_19);
   }

   return FUNC_14(VAR_5, VAR_12, VAR_7->bts_parent,
            VAR_8, VAR_9, VAR_10, VAR_11);
  }
  else
  {

   FUNC_10(VAR_5, VAR_15);
   return 0;
  }
 }
 else
 {

  *VAR_8 = VAR_15;
  *VAR_9 = VAR_13;
  return 1;
 }
}
