
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* drop_page ) (int *,TYPE_2__*) ;TYPE_1__* next; TYPE_1__** prev; int refs; } ;
typedef TYPE_2__ fz_page ;
typedef int fz_context ;
struct TYPE_7__ {struct TYPE_7__** prev; } ;


 scalar_t__ FUNC_0 (int *,TYPE_2__*,int *) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;

void
FUNC_3(fz_context *VAR_0, fz_page *VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1, &VAR_1->refs))
 {

  if (VAR_1->next != ((void*)0))
   VAR_1->next->prev = VAR_1->prev;
  if (VAR_1->prev != ((void*)0))
   *VAR_1->prev = VAR_1->next;

  if (VAR_1->drop_page)
   VAR_1->drop_page(VAR_0, VAR_1);

  FUNC_1(VAR_0, VAR_1);
 }
}
