
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* head; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ SimpleStringListCell ;
typedef TYPE_2__ SimpleStringList ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(SimpleStringList *VAR_0)
{
 SimpleStringListCell *VAR_1;

 VAR_1 = VAR_0->head;
 while (VAR_1 != ((void*)0))
 {
  SimpleStringListCell *VAR_2;

  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
}
