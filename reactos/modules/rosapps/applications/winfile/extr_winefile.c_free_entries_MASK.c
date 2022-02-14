
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* down; } ;
typedef TYPE_1__ Entry ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(Entry* VAR_0)
{
 Entry *VAR_1, *VAR_2=VAR_0->down;

 if (VAR_2) {
  VAR_0->down = 0;

  do {
   VAR_1 = VAR_2;
   VAR_2 = VAR_1->next;

   FUNC_1(VAR_1);
   FUNC_0(VAR_1);
  } while(VAR_2);
 }
}
