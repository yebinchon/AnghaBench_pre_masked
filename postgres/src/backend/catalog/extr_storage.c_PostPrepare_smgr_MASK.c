
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ PendingRelDelete ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(void)
{
 PendingRelDelete *VAR_1;
 PendingRelDelete *VAR_2;

 for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_2)
 {
  VAR_2 = VAR_1->next;
  VAR_0 = VAR_2;

  FUNC_0(VAR_1);
 }
}
