
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_4__ {int index; int ginstate; } ;
typedef int * Page ;
typedef scalar_t__ OffsetNumber ;
typedef int * ItemPointer ;
typedef int Item ;
typedef int * IndexTuple ;
typedef TYPE_1__ GinVacuumState ;
typedef int GinPostingList ;
typedef int GinNullCategory ;
typedef int Datum ;
typedef int Buffer ;
typedef int BlockNumber ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int *,scalar_t__,int ,int ,char*,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int ,scalar_t__,int,int) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,scalar_t__) ;
 scalar_t__ FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *,scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,char*,int ) ;
 int * FUNC_17 (int *,int,int ,int *) ;
 int * FUNC_18 (int *,int*) ;
 int * FUNC_19 (TYPE_1__*,int *,int,int*) ;
 scalar_t__ FUNC_20 (int *,int *) ;
 int FUNC_21 (int *,int *,int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static Page
FUNC_23(GinVacuumState *VAR_3, Buffer VAR_4, BlockNumber *VAR_5, uint32 *VAR_6)
{
 Page VAR_7 = FUNC_0(VAR_4),
    VAR_8;
 OffsetNumber VAR_9,
    VAR_10 = FUNC_11(VAR_7);

 VAR_8 = VAR_7;

 *VAR_6 = 0;

 for (VAR_9 = VAR_1; VAR_9 <= VAR_10; VAR_9++)
 {
  IndexTuple VAR_11 = (IndexTuple) FUNC_9(VAR_8, FUNC_10(VAR_8, VAR_9));

  if (FUNC_5(VAR_11))
  {




   VAR_5[*VAR_6] = FUNC_2(VAR_11);
   (*VAR_6)++;
  }
  else if (FUNC_3(VAR_11) > 0)
  {
   int VAR_12;
   ItemPointer VAR_13;
   bool VAR_14;
   ItemPointer VAR_15;


   if (FUNC_6(VAR_11))
   {
    VAR_13 = FUNC_18((GinPostingList *) FUNC_4(VAR_11), &VAR_12);
    VAR_14 = 1;
   }
   else
   {
    VAR_13 = (ItemPointer) FUNC_4(VAR_11);
    VAR_12 = FUNC_3(VAR_11);
    VAR_14 = 0;
   }


   VAR_15 = FUNC_19(VAR_3, VAR_13, VAR_12, &VAR_12);

   if (VAR_14)
    FUNC_22(VAR_13);


   if (VAR_15)
   {
    OffsetNumber VAR_16;
    Datum VAR_17;
    GinNullCategory VAR_18;
    GinPostingList *VAR_19;
    int VAR_20;

    if (VAR_12 > 0)
    {
     VAR_19 = FUNC_17(VAR_15, VAR_12, VAR_2, ((void*)0));
     VAR_20 = FUNC_15(VAR_19);
    }
    else
    {
     VAR_19 = ((void*)0);
     VAR_20 = 0;
    }





    if (VAR_8 == VAR_7)
    {




     VAR_8 = FUNC_12(VAR_7);


     VAR_11 = (IndexTuple) FUNC_9(VAR_8, FUNC_10(VAR_8, VAR_9));
    }

    VAR_16 = FUNC_20(&VAR_3->ginstate, VAR_11);
    VAR_17 = FUNC_21(&VAR_3->ginstate, VAR_11, &VAR_18);
    VAR_11 = FUNC_1(&VAR_3->ginstate, VAR_16, VAR_17, VAR_18,
         (char *) VAR_19, VAR_20,
         VAR_12, 1);
    if (VAR_19)
     FUNC_22(VAR_19);
    FUNC_13(VAR_8, VAR_9);

    if (FUNC_8(VAR_8, (Item) VAR_11, FUNC_7(VAR_11), VAR_9, 0, 0) != VAR_9)
     FUNC_16(VAR_0, "failed to add item to index page in \"%s\"",
       FUNC_14(VAR_3->index));

    FUNC_22(VAR_11);
    FUNC_22(VAR_15);
   }
  }
 }

 return (VAR_8 == VAR_7) ? ((void*)0) : VAR_8;
}
