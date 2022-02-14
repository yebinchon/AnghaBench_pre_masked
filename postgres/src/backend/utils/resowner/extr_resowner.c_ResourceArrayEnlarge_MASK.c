
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {scalar_t__* itemsarr; int capacity; scalar_t__ invalidval; scalar_t__ maxitems; scalar_t__ nitems; } ;
typedef TYPE_1__ ResourceArray ;
typedef scalar_t__ Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_5(ResourceArray *VAR_2)
{
 uint32 VAR_3,
    VAR_4,
    VAR_5;
 Datum *VAR_6;
 Datum *VAR_7;

 if (VAR_2->nitems < VAR_2->maxitems)
  return;

 VAR_6 = VAR_2->itemsarr;
 VAR_4 = VAR_2->capacity;


 VAR_5 = (VAR_4 > 0) ? VAR_4 * 2 : VAR_0;
 VAR_7 = (Datum *) FUNC_1(VAR_1,
              VAR_5 * sizeof(Datum));
 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
  VAR_7[VAR_3] = VAR_2->invalidval;


 VAR_2->itemsarr = VAR_7;
 VAR_2->capacity = VAR_5;
 VAR_2->maxitems = FUNC_2(VAR_5);
 VAR_2->nitems = 0;

 if (VAR_6 != ((void*)0))
 {







  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  {
   if (VAR_6[VAR_3] != VAR_2->invalidval)
    FUNC_3(VAR_2, VAR_6[VAR_3]);
  }


  FUNC_4(VAR_6);
 }

 FUNC_0(VAR_2->nitems < VAR_2->maxitems);
}
