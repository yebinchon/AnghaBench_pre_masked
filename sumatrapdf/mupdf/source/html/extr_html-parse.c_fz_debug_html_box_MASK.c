
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; double em; double x; double y; double w; double b; double* margin; int list_item; char* id; char* href; struct TYPE_3__* next; scalar_t__ flow_head; struct TYPE_3__* down; scalar_t__ is_first_flow; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_context ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, fz_html_box *VAR_1, int VAR_2)
{
 while (VAR_1)
 {
  FUNC_1(VAR_2);
  switch (VAR_1->type) {
  case 134: FUNC_2("block"); break;
  case 133: FUNC_2("break"); break;
  case 132: FUNC_2("flow"); break;
  case 131: FUNC_2("inline"); break;
  case 130: FUNC_2("table"); break;
  case 128: FUNC_2("table-row"); break;
  case 129: FUNC_2("table-cell"); break;
  }

  FUNC_2(" em=%g x=%g y=%g w=%g b=%g\n", VAR_1->em, VAR_1->x, VAR_1->y, VAR_1->w, VAR_1->b);

  FUNC_1(VAR_2);
  FUNC_2("{\n");
  if (VAR_1->type == 134) {
   FUNC_1(VAR_2+1);
   FUNC_2("margin=%g %g %g %g\n", VAR_1->margin[0], VAR_1->margin[1], VAR_1->margin[2], VAR_1->margin[3]);
  }
  if (VAR_1->is_first_flow) {
   FUNC_1(VAR_2+1);
   FUNC_2("is-first-flow\n");
  }
  if (VAR_1->list_item) {
   FUNC_1(VAR_2+1);
   FUNC_2("list=%d\n", VAR_1->list_item);
  }
  if (VAR_1->id) {
   FUNC_1(VAR_2+1);
   FUNC_2("id=%s\n", VAR_1->id);
  }
  if (VAR_1->href) {
   FUNC_1(VAR_2+1);
   FUNC_2("href=%s\n", VAR_1->href);
  }

  if (VAR_1->down)
   FUNC_3(VAR_0, VAR_1->down, VAR_2 + 1);
  if (VAR_1->flow_head)
   FUNC_0(VAR_0, VAR_1->flow_head, VAR_2 + 1);

  FUNC_1(VAR_2);
  FUNC_2("}\n");

  VAR_1 = VAR_1->next;
 }
}
