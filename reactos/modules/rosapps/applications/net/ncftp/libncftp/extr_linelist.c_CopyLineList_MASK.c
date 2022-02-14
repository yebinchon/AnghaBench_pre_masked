
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* first; } ;
struct TYPE_8__ {int * line; struct TYPE_8__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__* LineListPtr ;


 int * FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

int
FUNC_3(LineListPtr VAR_0, LineListPtr VAR_1)
{
 LinePtr VAR_2, VAR_3;

 FUNC_2(VAR_0);
 for (VAR_2 = VAR_1->first; VAR_2 != ((void*)0); ) {
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
  if (VAR_3->line != ((void*)0)) {
   if (FUNC_0(VAR_0, VAR_3->line) == ((void*)0)) {
    FUNC_1(VAR_0);
    return (-1);
   }
  }
 }
 return (0);
}
