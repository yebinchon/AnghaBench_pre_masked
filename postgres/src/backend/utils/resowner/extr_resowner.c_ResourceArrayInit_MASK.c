
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ capacity; scalar_t__ nitems; scalar_t__ maxitems; int invalidval; int * itemsarr; } ;
typedef TYPE_1__ ResourceArray ;
typedef int Datum ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(ResourceArray *VAR_0, Datum VAR_1)
{

 FUNC_0(VAR_0->itemsarr == ((void*)0));
 FUNC_0(VAR_0->capacity == 0);
 FUNC_0(VAR_0->nitems == 0);
 FUNC_0(VAR_0->maxitems == 0);

 VAR_0->invalidval = VAR_1;

}
