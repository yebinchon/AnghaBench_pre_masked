
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* text; } ;
struct TYPE_8__ {int type; double y; double x; double w; double h; struct TYPE_8__* next; scalar_t__ breaks_line; TYPE_2__ content; TYPE_4__* box; } ;
typedef TYPE_3__ fz_html_flow ;
struct TYPE_9__ {double em; TYPE_1__* style; } ;
typedef TYPE_4__ fz_html_box ;
typedef int fz_context ;
struct TYPE_6__ {scalar_t__ small_caps; int font; } ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 char* FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_0, fz_html_flow *VAR_1, int VAR_2)
{
 fz_html_box *VAR_3 = ((void*)0);
 while (VAR_1)
 {
  if (VAR_1->box != VAR_3) {
   if (VAR_3) {
    FUNC_5(VAR_2);
    FUNC_6("}\n");
   }
   VAR_3 = VAR_1->box;
   FUNC_5(VAR_2);
   FUNC_6("span em=%g font='%s'", VAR_3->em, FUNC_4(VAR_0, VAR_3->style->font));
   if (FUNC_3(VAR_0, VAR_3->style->font))
    FUNC_6(" serif");
   else
    FUNC_6(" sans");
   if (FUNC_2(VAR_0, VAR_3->style->font))
    FUNC_6(" monospaced");
   if (FUNC_0(VAR_0, VAR_3->style->font))
    FUNC_6(" bold");
   if (FUNC_1(VAR_0, VAR_3->style->font))
    FUNC_6(" italic");
   if (VAR_3->style->small_caps)
    FUNC_6(" small-caps");
   FUNC_6("\n");
   FUNC_5(VAR_2);
   FUNC_6("{\n");
  }

  FUNC_5(VAR_2+1);
  switch (VAR_1->type) {
  case 128: FUNC_6("word "); break;
  case 129: FUNC_6("space"); break;
  case 131: FUNC_6("sbrk "); break;
  case 130: FUNC_6("shy  "); break;
  case 133: FUNC_6("break"); break;
  case 132: FUNC_6("image"); break;
  case 134: FUNC_6("anchor"); break;
  }
  FUNC_6(" y=%g x=%g w=%g", VAR_1->y, VAR_1->x, VAR_1->w);
  if (VAR_1->type == 132)
   FUNC_6(" h=%g", VAR_1->h);
  if (VAR_1->type == 128)
   FUNC_6(" text='%s'", VAR_1->content.text);
  FUNC_6("\n");
  if (VAR_1->breaks_line) {
   FUNC_5(VAR_2+1);
   FUNC_6("*\n");
  }

  VAR_1 = VAR_1->next;
 }
 FUNC_5(VAR_2);
 FUNC_6("}\n");
}
