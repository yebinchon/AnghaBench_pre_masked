
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct outline_parser {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* down; scalar_t__ heading; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_context ;


 int FUNC_0 (int *,struct outline_parser*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, struct outline_parser *VAR_1, fz_html_box *VAR_2)
{
 while (VAR_2)
 {
  if (VAR_2->heading)
   FUNC_0(VAR_0, VAR_1, VAR_2);
  if (VAR_2->down)
   FUNC_1(VAR_0, VAR_1, VAR_2->down);
  VAR_2 = VAR_2->next;
 }
}
