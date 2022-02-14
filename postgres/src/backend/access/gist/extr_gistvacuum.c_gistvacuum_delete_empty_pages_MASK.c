
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_9__ {int pages_removed; } ;
struct TYPE_12__ {TYPE_1__ stats; int empty_leaf_set; int internal_page_set; } ;
struct TYPE_11__ {int t_tid; } ;
struct TYPE_10__ {int strategy; int index; } ;
typedef int Relation ;
typedef scalar_t__ Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef TYPE_2__ IndexVacuumInfo ;
typedef TYPE_3__* IndexTuple ;
typedef TYPE_4__ GistBulkDeleteResult ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_11 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (TYPE_2__*,TYPE_4__*,int ,int,int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ,scalar_t__) ;
 scalar_t__ FUNC_18 (int ,scalar_t__*) ;
 scalar_t__ FUNC_19 (int ) ;

__attribute__((used)) static void
FUNC_20(IndexVacuumInfo *VAR_7, GistBulkDeleteResult *VAR_8)
{
 Relation VAR_9 = VAR_7->index;
 BlockNumber VAR_10;
 uint64 VAR_11;




 VAR_10 = FUNC_19(VAR_8->empty_leaf_set);
 FUNC_16(VAR_8->internal_page_set);
 while (VAR_10 > 0 &&
     FUNC_18(VAR_8->internal_page_set, &VAR_11))
 {
  Buffer VAR_12;
  Page VAR_13;
  OffsetNumber VAR_14,
     VAR_15;
  OffsetNumber VAR_16[VAR_5];
  BlockNumber VAR_17[VAR_5];
  int VAR_18;
  int VAR_19;

  VAR_12 = FUNC_11(VAR_9, VAR_4, (BlockNumber) VAR_11,
         VAR_6, VAR_7->strategy);

  FUNC_5(VAR_12, VAR_2);
  VAR_13 = (Page) FUNC_1(VAR_12);

  if (FUNC_10(VAR_13) || FUNC_2(VAR_13) || FUNC_3(VAR_13))
  {




   FUNC_0(0);
   FUNC_13(VAR_12);
   continue;
  }





  VAR_15 = FUNC_9(VAR_13);
  VAR_18 = 0;
  for (VAR_14 = VAR_0;
    VAR_14 <= VAR_15 && VAR_18 < VAR_15 - 1;
    VAR_14 = FUNC_6(VAR_14))
  {
   ItemId VAR_20 = FUNC_8(VAR_13, VAR_14);
   IndexTuple VAR_21 = (IndexTuple) FUNC_7(VAR_13, VAR_20);
   BlockNumber VAR_22;

   VAR_22 = FUNC_4(&(VAR_21->t_tid));
   if (FUNC_17(VAR_8->empty_leaf_set, VAR_22))
   {
    VAR_17[VAR_18] = VAR_22;
    VAR_16[VAR_18++] = VAR_14;
   }
  }
  FUNC_5(VAR_12, VAR_3);

  VAR_19 = 0;
  for (int VAR_23 = 0; VAR_23 < VAR_18; VAR_23++)
  {
   Buffer VAR_24;





   if (FUNC_9(VAR_13) == VAR_0)
    break;

   VAR_24 = FUNC_11(VAR_9, VAR_4, VAR_17[VAR_23],
           VAR_6, VAR_7->strategy);
   FUNC_5(VAR_24, VAR_1);
   FUNC_14(VAR_9, VAR_24);

   FUNC_5(VAR_12, VAR_1);
   if (FUNC_15(VAR_7, VAR_8,
          VAR_12, VAR_16[VAR_23] - VAR_19,
          VAR_24))
    VAR_19++;
   FUNC_5(VAR_12, VAR_3);

   FUNC_13(VAR_24);
  }

  FUNC_12(VAR_12);


  VAR_8->stats.pages_removed += VAR_19;





  VAR_10 -= VAR_18;
 }
}
