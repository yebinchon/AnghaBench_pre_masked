
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ text_as_text; int id; } ;
typedef TYPE_1__ svg_device ;
struct TYPE_18__ {struct TYPE_18__* next; } ;
typedef TYPE_2__ fz_text_span ;
struct TYPE_19__ {TYPE_2__* head; } ;
typedef TYPE_3__ fz_text ;
typedef int fz_stroke_state ;
struct TYPE_20__ {scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
typedef TYPE_4__ fz_rect ;
typedef int fz_output ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int font ;


 int * FUNC_0 (int *,TYPE_1__*) ;
 TYPE_4__ FUNC_1 (int *,TYPE_3__ const*,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,char*,...) ;
 int * FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*,int ,float*,int,int ) ;
 int FUNC_6 (int *,TYPE_1__*,int const*,int ) ;
 int FUNC_7 (int *,TYPE_1__*,int ,TYPE_2__*) ;
 int * FUNC_8 (int *,int *,TYPE_2__*,int ) ;
 int FUNC_9 (int *,int *,TYPE_2__*,int const*,int ,int ,float*,float,int *,int ) ;

__attribute__((used)) static void
FUNC_10(fz_context *VAR_2, fz_device *VAR_3, const fz_text *VAR_4, const fz_stroke_state *VAR_5, fz_matrix VAR_6, fz_rect VAR_7)
{
 svg_device *VAR_8 = (svg_device*)VAR_3;

 fz_output *VAR_9;
 fz_rect VAR_10;
 int VAR_11 = VAR_8->id++;
 float VAR_12[3] = { 255, 255, 255 };
 font *VAR_13;
 fz_text_span *VAR_14;

 VAR_10 = FUNC_1(VAR_2, VAR_4, ((void*)0), VAR_6);

 VAR_9 = FUNC_4(VAR_2, VAR_8);
 FUNC_3(VAR_2, VAR_9, "<mask id=\"ma%d\" x=\"%g\" y=\"%g\" width=\"%g\" height=\"%g\"",
  VAR_11, VAR_10.x0, VAR_10.y0, VAR_10.x1 - VAR_10.x0, VAR_10.y1 - VAR_10.y0);
 FUNC_3(VAR_2, VAR_9, " maskUnits=\"userSpaceOnUse\" maskContentUnits=\"userSpaceOnUse\">\n");
 if (VAR_8->text_as_text)
 {
  for (VAR_14 = VAR_4->head; VAR_14; VAR_14 = VAR_14->next)
  {
   FUNC_3(VAR_2, VAR_9, "<text");
   FUNC_6(VAR_2, VAR_8, VAR_5, VAR_1);
   FUNC_5(VAR_2, VAR_8, FUNC_2(VAR_2), VAR_12, 1, VAR_0);
   FUNC_7(VAR_2, VAR_8, VAR_6, VAR_14);
  }
 }
 else
 {
  for (VAR_14 = VAR_4->head; VAR_14; VAR_14 = VAR_14->next)
  {
   VAR_13 = FUNC_8(VAR_2, VAR_3, VAR_14, VAR_6);
   FUNC_9(VAR_2, VAR_3, VAR_14, VAR_5, VAR_6, FUNC_2(VAR_2), VAR_12, 1.0f, VAR_13, VAR_0);
  }
 }
 FUNC_3(VAR_2, VAR_9, "</mask>\n");
 VAR_9 = FUNC_0(VAR_2, VAR_8);
 FUNC_3(VAR_2, VAR_9, "<g mask=\"url(#ma%d)\">\n", VAR_11);
}
