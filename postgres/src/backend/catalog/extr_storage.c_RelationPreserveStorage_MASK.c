
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int atCommit; struct TYPE_4__* next; int relnode; } ;
typedef int RelFileNode ;
typedef TYPE_1__ PendingRelDelete ;


 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(RelFileNode VAR_1, bool VAR_2)
{
 PendingRelDelete *VAR_3;
 PendingRelDelete *VAR_4;
 PendingRelDelete *VAR_5;

 VAR_4 = ((void*)0);
 for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_5)
 {
  VAR_5 = VAR_3->next;
  if (FUNC_0(VAR_1, VAR_3->relnode)
   && VAR_3->atCommit == VAR_2)
  {

   if (VAR_4)
    VAR_4->next = VAR_5;
   else
    VAR_0 = VAR_5;
   FUNC_1(VAR_3);

  }
  else
  {

   VAR_4 = VAR_3;
  }
 }
}
