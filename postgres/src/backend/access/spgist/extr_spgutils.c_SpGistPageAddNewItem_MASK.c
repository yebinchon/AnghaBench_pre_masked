
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tupstate; } ;
struct TYPE_4__ {scalar_t__ nPlaceholder; } ;
typedef int SpGistState ;
typedef TYPE_1__* SpGistPageOpaque ;
typedef TYPE_2__* SpGistDeadTuple ;
typedef scalar_t__ Size ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int Item ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int) ;

OffsetNumber
FUNC_10(SpGistState *VAR_6, Page VAR_7, Item VAR_8, Size VAR_9,
      OffsetNumber *VAR_10, bool VAR_11)
{
 SpGistPageOpaque VAR_12 = FUNC_8(VAR_7);
 OffsetNumber VAR_13,
    VAR_14,
    VAR_15;

 if (VAR_12->nPlaceholder > 0 &&
  FUNC_3(VAR_7) + VAR_4 >= FUNC_1(VAR_9))
 {

  VAR_14 = FUNC_6(VAR_7);
  VAR_15 = VAR_2;

  for (;;)
  {
   if (VAR_10 && *VAR_10 != VAR_2)
    VAR_13 = *VAR_10;
   else
    VAR_13 = VAR_1;
   for (; VAR_13 <= VAR_14; VAR_13++)
   {
    SpGistDeadTuple VAR_16 = (SpGistDeadTuple) FUNC_4(VAR_7,
                   FUNC_5(VAR_7, VAR_13));

    if (VAR_16->tupstate == VAR_5)
    {
     VAR_15 = VAR_13;
     break;
    }
   }


   if (VAR_15 != VAR_2)
    break;

   if (VAR_10 && *VAR_10 != VAR_2)
   {

    *VAR_10 = VAR_2;
    continue;
   }


   VAR_12->nPlaceholder = 0;
   break;
  }

  if (VAR_15 != VAR_2)
  {

   FUNC_7(VAR_7, VAR_15);

   VAR_15 = FUNC_2(VAR_7, VAR_8, VAR_9, VAR_15, 0, 0);







   if (VAR_15 != VAR_2)
   {
    FUNC_0(VAR_12->nPlaceholder > 0);
    VAR_12->nPlaceholder--;
    if (VAR_10)
     *VAR_10 = VAR_15 + 1;
   }
   else
    FUNC_9(VAR_3, "failed to add item of size %u to SPGiST index page",
      (int) VAR_9);

   return VAR_15;
  }
 }


 VAR_15 = FUNC_2(VAR_7, VAR_8, VAR_9,
       VAR_2, 0, 0);

 if (VAR_15 == VAR_2 && !VAR_11)
  FUNC_9(VAR_0, "failed to add item of size %u to SPGiST index page",
    (int) VAR_9);

 return VAR_15;
}
