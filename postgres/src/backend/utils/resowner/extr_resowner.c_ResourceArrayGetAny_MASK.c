
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_4__ {scalar_t__ nitems; size_t lastidx; size_t capacity; scalar_t__* itemsarr; scalar_t__ invalidval; } ;
typedef TYPE_1__ ResourceArray ;
typedef scalar_t__ Datum ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_1(ResourceArray *VAR_0, Datum *VAR_1)
{
 if (VAR_0->nitems == 0)
  return 0;

 if (FUNC_0(VAR_0))
 {

  VAR_0->lastidx = 0;
 }
 else
 {

  uint32 VAR_2 = VAR_0->capacity - 1;

  for (;;)
  {
   VAR_0->lastidx &= VAR_2;
   if (VAR_0->itemsarr[VAR_0->lastidx] != VAR_0->invalidval)
    break;
   VAR_0->lastidx++;
  }
 }

 *VAR_1 = VAR_0->itemsarr[VAR_0->lastidx];
 return 1;
}
