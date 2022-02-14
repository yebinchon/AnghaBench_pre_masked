
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* items; int font; struct TYPE_6__* next; struct TYPE_6__* head; int refs; } ;
typedef TYPE_1__ fz_text_span ;
typedef TYPE_1__ fz_text ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;

void
FUNC_3(fz_context *VAR_0, const fz_text *VAR_1)
{
 fz_text *VAR_2 = (fz_text *)VAR_1;

 if (FUNC_1(VAR_0, VAR_2, &VAR_2->refs))
 {
  fz_text_span *VAR_3 = VAR_2->head;
  while (VAR_3)
  {
   fz_text_span *VAR_4 = VAR_3->next;
   FUNC_0(VAR_0, VAR_3->font);
   FUNC_2(VAR_0, VAR_3->items);
   FUNC_2(VAR_0, VAR_3);
   VAR_3 = VAR_4;
  }
  FUNC_2(VAR_0, VAR_2);
 }
}
