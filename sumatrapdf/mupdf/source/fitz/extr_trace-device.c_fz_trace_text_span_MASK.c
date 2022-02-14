
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int d; int c; int b; int a; } ;
struct TYPE_7__ {int len; TYPE_2__* items; int font; TYPE_1__ trm; int bidi_level; int wmode; } ;
typedef TYPE_3__ fz_text_span ;
typedef int fz_output ;
typedef int fz_context ;
struct TYPE_6__ {int ucs; scalar_t__ gid; int y; int x; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,scalar_t__,char*,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,char*,...) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, fz_output *VAR_1, fz_text_span *VAR_2, int VAR_3)
{
 int VAR_4;
 FUNC_2(VAR_0, VAR_1, VAR_3);
 FUNC_3(VAR_0, VAR_1, "<span font=\"%s\" wmode=\"%d\" bidi=\"%d\"", FUNC_0(VAR_0, VAR_2->font), VAR_2->wmode, VAR_2->bidi_level);
 FUNC_3(VAR_0, VAR_1, " trm=\"%g %g %g %g\">\n", VAR_2->trm.a, VAR_2->trm.b, VAR_2->trm.c, VAR_2->trm.d);
 for (VAR_4 = 0; VAR_4 < VAR_2->len; VAR_4++)
 {
  char VAR_5[32];

  FUNC_2(VAR_0, VAR_1, VAR_3+1);
  if (VAR_2->items[VAR_4].ucs == -1)
   FUNC_3(VAR_0, VAR_1, "<g unicode=\"-1\"");
  else if (!FUNC_4(VAR_2->items[VAR_4].ucs))
   FUNC_3(VAR_0, VAR_1, "<g unicode=\"%c\"", VAR_2->items[VAR_4].ucs);
  else
   FUNC_3(VAR_0, VAR_1, "<g unicode=\"U+%04x\"", VAR_2->items[VAR_4].ucs);

  if (VAR_2->items[VAR_4].gid >= 0)
  {
   FUNC_1(VAR_0, VAR_2->font, VAR_2->items[VAR_4].gid, VAR_5, sizeof VAR_5);
   FUNC_3(VAR_0, VAR_1, " glyph=\"%s\"", VAR_5);
  }
  else
   FUNC_3(VAR_0, VAR_1, " glyph=\"-1\"");

  FUNC_3(VAR_0, VAR_1, " x=\"%g\" y=\"%g\" />\n", VAR_2->items[VAR_4].x, VAR_2->items[VAR_4].y);
 }
 FUNC_2(VAR_0, VAR_1, VAR_3);
 FUNC_3(VAR_0, VAR_1, "</span>\n");
}
