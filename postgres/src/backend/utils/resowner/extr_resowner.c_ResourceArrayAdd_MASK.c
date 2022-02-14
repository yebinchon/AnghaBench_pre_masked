
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int value ;
typedef size_t uint32 ;
struct TYPE_4__ {scalar_t__ invalidval; scalar_t__ nitems; scalar_t__ maxitems; size_t capacity; scalar_t__* itemsarr; size_t lastidx; } ;
typedef TYPE_1__ ResourceArray ;
typedef scalar_t__ Datum ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (void*,int) ;

__attribute__((used)) static void
FUNC_4(ResourceArray *VAR_0, Datum VAR_1)
{
 uint32 VAR_2;

 FUNC_0(VAR_1 != VAR_0->invalidval);
 FUNC_0(VAR_0->nitems < VAR_0->maxitems);

 if (FUNC_2(VAR_0))
 {

  VAR_2 = VAR_0->nitems;
 }
 else
 {

  uint32 VAR_3 = VAR_0->capacity - 1;

  VAR_2 = FUNC_1(FUNC_3((void *) &VAR_1, sizeof(VAR_1))) & VAR_3;
  for (;;)
  {
   if (VAR_0->itemsarr[VAR_2] == VAR_0->invalidval)
    break;
   VAR_2 = (VAR_2 + 1) & VAR_3;
  }
 }
 VAR_0->lastidx = VAR_2;
 VAR_0->itemsarr[VAR_2] = VAR_1;
 VAR_0->nitems++;
}
