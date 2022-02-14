
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int value ;
typedef size_t uint32 ;
struct TYPE_4__ {size_t lastidx; scalar_t__ invalidval; size_t nitems; scalar_t__* itemsarr; int capacity; } ;
typedef TYPE_1__ ResourceArray ;
typedef scalar_t__ Datum ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (void*,int) ;

__attribute__((used)) static bool
FUNC_4(ResourceArray *VAR_0, Datum VAR_1)
{
 uint32 VAR_2,
    VAR_3,
    VAR_4 = VAR_0->lastidx;

 FUNC_0(VAR_1 != VAR_0->invalidval);


 if (FUNC_2(VAR_0))
 {
  if (VAR_4 < VAR_0->nitems &&
   VAR_0->itemsarr[VAR_4] == VAR_1)
  {
   VAR_0->itemsarr[VAR_4] = VAR_0->itemsarr[VAR_0->nitems - 1];
   VAR_0->nitems--;

   VAR_0->lastidx = VAR_0->nitems - 1;
   return 1;
  }
  for (VAR_2 = 0; VAR_2 < VAR_0->nitems; VAR_2++)
  {
   if (VAR_0->itemsarr[VAR_2] == VAR_1)
   {
    VAR_0->itemsarr[VAR_2] = VAR_0->itemsarr[VAR_0->nitems - 1];
    VAR_0->nitems--;

    VAR_0->lastidx = VAR_0->nitems - 1;
    return 1;
   }
  }
 }
 else
 {
  uint32 VAR_5 = VAR_0->capacity - 1;

  if (VAR_4 < VAR_0->capacity &&
   VAR_0->itemsarr[VAR_4] == VAR_1)
  {
   VAR_0->itemsarr[VAR_4] = VAR_0->invalidval;
   VAR_0->nitems--;
   return 1;
  }
  VAR_3 = FUNC_1(FUNC_3((void *) &VAR_1, sizeof(VAR_1))) & VAR_5;
  for (VAR_2 = 0; VAR_2 < VAR_0->capacity; VAR_2++)
  {
   if (VAR_0->itemsarr[VAR_3] == VAR_1)
   {
    VAR_0->itemsarr[VAR_3] = VAR_0->invalidval;
    VAR_0->nitems--;
    return 1;
   }
   VAR_3 = (VAR_3 + 1) & VAR_5;
  }
 }

 return 0;
}
