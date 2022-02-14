
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {int * out; } ;
typedef TYPE_1__ svg_device ;
struct TYPE_26__ {float a; float b; float c; float d; scalar_t__ f; scalar_t__ e; } ;
struct TYPE_23__ {int len; scalar_t__ wmode; TYPE_3__* items; int font; TYPE_5__ trm; } ;
typedef TYPE_2__ fz_text_span ;
struct TYPE_24__ {scalar_t__ gid; int ucs; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_3__ fz_text_item ;
struct TYPE_25__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_4__ fz_point ;
typedef int fz_output ;
typedef TYPE_5__ fz_matrix ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_2__ const*,int) ;
 int FUNC_1 (int *,TYPE_2__ const*,TYPE_5__,int) ;
 TYPE_5__ FUNC_2 (TYPE_5__,TYPE_5__) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 TYPE_5__ FUNC_6 (TYPE_5__) ;
 float FUNC_7 (TYPE_5__) ;
 TYPE_4__ FUNC_8 (TYPE_4__,TYPE_5__) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int *,char*,...) ;
 float FUNC_11 (int *,TYPE_2__ const*,int,int) ;
 int FUNC_12 (int *,char*,int,int ) ;

__attribute__((used)) static void
FUNC_13(fz_context *VAR_0, svg_device *VAR_1, fz_matrix VAR_2, const fz_text_span *VAR_3)
{
 fz_output *VAR_4 = VAR_1->out;
 char VAR_5[100];
 int VAR_6, VAR_7;
 fz_matrix VAR_8, VAR_9, VAR_10;
 fz_point VAR_11;
 float VAR_12;
 fz_text_item *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 float VAR_17 = 0;

 if (VAR_3->len == 0)
 {
  FUNC_10(VAR_0, VAR_4, "/>\n");
  return;
 }

 VAR_8 = VAR_3->trm;
 VAR_12 = FUNC_7(VAR_8);
 VAR_10.a = VAR_8.a / VAR_12;
 VAR_10.b = VAR_8.b / VAR_12;
 VAR_10.c = -VAR_8.c / VAR_12;
 VAR_10.d = -VAR_8.d / VAR_12;
 VAR_10.e = 0;
 VAR_10.f = 0;
 VAR_9 = FUNC_6(VAR_10);
 VAR_10 = FUNC_2(VAR_10, VAR_2);

 VAR_8.e = VAR_3->items[0].x;
 VAR_8.f = VAR_3->items[0].y;

 FUNC_12(VAR_0, VAR_5, sizeof VAR_5, FUNC_5(VAR_0, VAR_3->font));
 VAR_6 = FUNC_3(VAR_0, VAR_3->font);
 VAR_7 = FUNC_4(VAR_0, VAR_3->font);

 FUNC_10(VAR_0, VAR_4, " xml:space=\"preserve\"");
 FUNC_10(VAR_0, VAR_4, " transform=\"matrix(%M)\"", &VAR_10);
 FUNC_10(VAR_0, VAR_4, " font-size=\"%g\"", VAR_12);
 FUNC_10(VAR_0, VAR_4, " font-family=\"%s\"", VAR_5);
 if (VAR_6) FUNC_10(VAR_0, VAR_4, " font-weight=\"bold\"");
 if (VAR_7) FUNC_10(VAR_0, VAR_4, " font-style=\"italic\"");
 if (VAR_3->wmode != 0) FUNC_10(VAR_0, VAR_4, " writing-mode=\"tb\"");

 FUNC_9(VAR_0, VAR_4, '>');

 VAR_14 = FUNC_0(VAR_0, VAR_3, 0);
 while (VAR_14 < VAR_3->len)
 {
  VAR_15 = FUNC_1(VAR_0, VAR_3, VAR_9, VAR_14);

  VAR_11.x = VAR_3->items[VAR_14].x;
  VAR_11.y = VAR_3->items[VAR_14].y;
  VAR_11 = FUNC_8(VAR_11, VAR_9);
  if (VAR_3->items[VAR_14].gid >= 0)
   VAR_17 = FUNC_11(VAR_0, VAR_3, VAR_14, VAR_15);
  if (VAR_3->wmode == 0)
   FUNC_10(VAR_0, VAR_4, "<tspan y=\"%g\" x=\"%g", VAR_11.y, VAR_11.x);
  else
   FUNC_10(VAR_0, VAR_4, "<tspan x=\"%g\" y=\"%g", VAR_11.x, VAR_11.y);
  for (VAR_16 = VAR_14 + 1; VAR_16 < VAR_15; ++VAR_16)
  {
   VAR_13 = &VAR_3->items[VAR_16];
   if (VAR_13->gid >= 0)
    VAR_17 = FUNC_11(VAR_0, VAR_3, VAR_16, VAR_15);
   if (VAR_13->ucs >= 0)
   {
    if (VAR_13->gid >= 0)
    {
     VAR_11.x = VAR_13->x;
     VAR_11.y = VAR_13->y;
     VAR_11 = FUNC_8(VAR_11, VAR_9);
    }
    else
    {

     if (VAR_3->wmode == 0)
      VAR_11.x += VAR_12 * VAR_17;
     else
      VAR_11.y += VAR_12 * VAR_17;
    }
    FUNC_10(VAR_0, VAR_4, " %g", VAR_3->wmode == 0 ? VAR_11.x : VAR_11.y);
   }
  }
  FUNC_10(VAR_0, VAR_4, "\">");
  for (VAR_16 = VAR_14; VAR_16 < VAR_15; ++VAR_16)
  {
   VAR_13 = &VAR_3->items[VAR_16];
   if (VAR_13->ucs >= 0)
   {
    int VAR_18 = VAR_13->ucs;
    if (VAR_18 >= 32 && VAR_18 <= 127 && VAR_18 != '<' && VAR_18 != '&' && VAR_18 != '>')
     FUNC_9(VAR_0, VAR_4, VAR_18);
    else
     FUNC_10(VAR_0, VAR_4, "&#x%04x;", VAR_18);
   }
  }
  FUNC_10(VAR_0, VAR_4, "</tspan>");

  VAR_14 = FUNC_0(VAR_0, VAR_3, VAR_15);
 }

 FUNC_10(VAR_0, VAR_4, "</text>\n");
}
