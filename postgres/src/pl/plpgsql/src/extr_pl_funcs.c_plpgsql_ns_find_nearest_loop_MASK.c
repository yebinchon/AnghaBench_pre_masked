
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ itemtype; scalar_t__ itemno; struct TYPE_4__* prev; } ;
typedef TYPE_1__ PLpgSQL_nsitem ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

PLpgSQL_nsitem *
FUNC_0(PLpgSQL_nsitem *VAR_2)
{
 while (VAR_2 != ((void*)0))
 {
  if (VAR_2->itemtype == VAR_1 &&
   VAR_2->itemno == VAR_0)
   return VAR_2;
  VAR_2 = VAR_2->prev;
 }

 return ((void*)0);
}
