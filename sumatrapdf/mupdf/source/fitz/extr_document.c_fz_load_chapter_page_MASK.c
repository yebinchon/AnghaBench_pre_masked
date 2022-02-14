
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int chapter; int number; struct TYPE_10__** prev; struct TYPE_10__* next; int incomplete; } ;
typedef TYPE_1__ fz_page ;
struct TYPE_11__ {TYPE_1__* open; TYPE_1__* (* load_page ) (int *,TYPE_2__*,int,int) ;} ;
typedef TYPE_2__ fz_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_2__*) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,TYPE_2__*,int,int) ;

fz_page *
FUNC_3(fz_context *VAR_0, fz_document *VAR_1, int VAR_2, int VAR_3)
{
 fz_page *VAR_4;

 FUNC_0(VAR_0, VAR_1);

 if (VAR_1)
  for (VAR_4 = VAR_1->open; VAR_4; VAR_4 = VAR_4->next)
   if (VAR_4->chapter == VAR_2 && VAR_4->number == VAR_3)
    return FUNC_1(VAR_0, VAR_4);

 if (VAR_1 && VAR_1->load_page)
 {
  VAR_4 = VAR_1->load_page(VAR_0, VAR_1, VAR_2, VAR_3);
  VAR_4->chapter = VAR_2;
  VAR_4->number = VAR_3;


  if (!VAR_4->incomplete)
  {
   if ((VAR_4->next = VAR_1->open) != ((void*)0))
    VAR_1->open->prev = &VAR_4->next;
   VAR_1->open = VAR_4;
   VAR_4->prev = &VAR_1->open;
  }
  return VAR_4;
 }

 return ((void*)0);
}
