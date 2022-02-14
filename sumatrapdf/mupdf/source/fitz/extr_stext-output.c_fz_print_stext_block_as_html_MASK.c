
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int x0; int y0; } ;
struct TYPE_13__ {TYPE_5__* first_char; TYPE_3__ bbox; struct TYPE_13__* next; } ;
typedef TYPE_4__ fz_stext_line ;
struct TYPE_14__ {float size; int color; int c; int * font; struct TYPE_14__* next; } ;
typedef TYPE_5__ fz_stext_char ;
struct TYPE_10__ {TYPE_4__* first_line; } ;
struct TYPE_11__ {TYPE_1__ t; } ;
struct TYPE_15__ {TYPE_2__ u; } ;
typedef TYPE_6__ fz_stext_block ;
typedef int fz_output ;
typedef int fz_font ;
typedef int fz_context ;


 int FUNC_0 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_1 (int *,int *,int *,float,int,int) ;
 int FUNC_2 (int *,int *,int *,float,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,char*,int,...) ;
 int FUNC_5 (int *,int *,char*) ;

void
FUNC_6(fz_context *VAR_0, fz_output *VAR_1, fz_stext_block *VAR_2)
{
 fz_stext_line *VAR_3;
 fz_stext_char *VAR_4;
 int VAR_5, VAR_6;

 fz_font *VAR_7 = ((void*)0);
 float VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;

 for (VAR_3 = VAR_2->u.t.first_line; VAR_3; VAR_3 = VAR_3->next)
 {
  VAR_5 = VAR_3->bbox.x0;
  VAR_6 = VAR_3->bbox.y0;

  FUNC_4(VAR_0, VAR_1, "<p style=\"position:absolute;white-space:pre;margin:0;padding:0;top:%dpt;left:%dpt\">", VAR_6, VAR_5);
  VAR_7 = ((void*)0);

  for (VAR_4 = VAR_3->first_char; VAR_4; VAR_4 = VAR_4->next)
  {
   int VAR_11 = FUNC_0(VAR_3, VAR_4);
   if (VAR_4->font != VAR_7 || VAR_4->size != VAR_8 || VAR_11 != VAR_9 || VAR_4->color != VAR_10)
   {
    if (VAR_7)
     FUNC_2(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9);
    VAR_7 = VAR_4->font;
    VAR_8 = VAR_4->size;
    VAR_10 = VAR_4->color;
    VAR_9 = VAR_11;
    FUNC_1(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9, VAR_10);
   }

   switch (VAR_4->c)
   {
   default:
    if (VAR_4->c >= 32 && VAR_4->c <= 127)
     FUNC_3(VAR_0, VAR_1, VAR_4->c);
    else
     FUNC_4(VAR_0, VAR_1, "&#x%x;", VAR_4->c);
    break;
   case '<': FUNC_5(VAR_0, VAR_1, "&lt;"); break;
   case '>': FUNC_5(VAR_0, VAR_1, "&gt;"); break;
   case '&': FUNC_5(VAR_0, VAR_1, "&amp;"); break;
   case '"': FUNC_5(VAR_0, VAR_1, "&quot;"); break;
   case '\'': FUNC_5(VAR_0, VAR_1, "&apos;"); break;
   }
  }

  if (VAR_7)
   FUNC_2(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9);

  FUNC_5(VAR_0, VAR_1, "</p>\n");
 }
}
