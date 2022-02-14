
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nestLevel; struct TYPE_3__* next; } ;
typedef TYPE_1__ PendingRelDelete ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;

void
FUNC_1(void)
{
 int VAR_1 = FUNC_0();
 PendingRelDelete *VAR_2;

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
 {
  if (VAR_2->nestLevel >= VAR_1)
   VAR_2->nestLevel = VAR_1 - 1;
 }
}
