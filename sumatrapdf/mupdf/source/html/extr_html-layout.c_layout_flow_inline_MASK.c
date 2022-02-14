
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* down; int em; TYPE_1__* style; int y; } ;
typedef TYPE_2__ fz_html_box ;
typedef int fz_context ;
struct TYPE_5__ {int font_size; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, fz_html_box *VAR_1, fz_html_box *VAR_2)
{
 while (VAR_1)
 {
  VAR_1->y = VAR_2->y;
  VAR_1->em = FUNC_0(VAR_1->style->font_size, VAR_2->em, VAR_2->em, VAR_2->em);
  if (VAR_1->down)
   FUNC_1(VAR_0, VAR_1->down, VAR_1);
  VAR_1 = VAR_1->next;
 }
}
