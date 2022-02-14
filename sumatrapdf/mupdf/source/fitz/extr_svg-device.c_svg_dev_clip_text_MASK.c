
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ text_as_text; int id; int * out; } ;
typedef TYPE_1__ svg_device ;
struct TYPE_17__ {struct TYPE_17__* next; } ;
typedef TYPE_2__ fz_text_span ;
struct TYPE_18__ {TYPE_2__* head; } ;
typedef TYPE_3__ fz_text ;
struct TYPE_19__ {scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
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
 int FUNC_3 (int *,int *,char*,...) ;
 int * FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*,int ,float*,int,int ) ;
 int FUNC_6 (int *,TYPE_1__*,int ,TYPE_2__*) ;
 int * FUNC_7 (int *,int *,TYPE_2__*,int ) ;
 int FUNC_8 (int *,int *,TYPE_2__*,int ,int ,float*,float,int *,int ) ;

__attribute__((used)) static void
FUNC_9(fz_context *VAR_1, fz_device *VAR_2, const fz_text *VAR_3, fz_matrix VAR_4, fz_rect VAR_5)
{
 svg_device *VAR_6 = (svg_device*)VAR_2;
 fz_output *VAR_7 = VAR_6->out;

 fz_rect VAR_8;
 int VAR_9 = VAR_6->id++;
 float VAR_10[3] = { 1, 1, 1 };
 font *VAR_11;
 fz_text_span *VAR_12;

 VAR_8 = FUNC_1(VAR_1, VAR_3, ((void*)0), VAR_4);

 VAR_7 = FUNC_4(VAR_1, VAR_6);
 FUNC_3(VAR_1, VAR_7, "<mask id=\"ma%d\" x=\"%g\" y=\"%g\" width=\"%g\" height=\"%g\"",
   VAR_9, VAR_8.x0, VAR_8.y0, VAR_8.x1 - VAR_8.x0, VAR_8.y1 - VAR_8.y0);
 FUNC_3(VAR_1, VAR_7, " maskUnits=\"userSpaceOnUse\" maskContentUnits=\"userSpaceOnUse\">\n");
 if (VAR_6->text_as_text)
 {
  for (VAR_12 = VAR_3->head; VAR_12; VAR_12 = VAR_12->next)
  {
   FUNC_3(VAR_1, VAR_7, "<text");
   FUNC_5(VAR_1, VAR_6, FUNC_2(VAR_1), VAR_10, 1, VAR_0);
   FUNC_6(VAR_1, VAR_6, VAR_4, VAR_12);
  }
 }
 else
 {
  for (VAR_12 = VAR_3->head; VAR_12; VAR_12 = VAR_12->next)
  {
   VAR_11 = FUNC_7(VAR_1, VAR_2, VAR_12, VAR_4);
   FUNC_8(VAR_1, VAR_2, VAR_12, VAR_4, FUNC_2(VAR_1), VAR_10, 1.0f, VAR_11, VAR_0);
  }
 }
 FUNC_3(VAR_1, VAR_7, "</mask>\n");
 VAR_7 = FUNC_0(VAR_1, VAR_6);
 FUNC_3(VAR_1, VAR_7, "<g mask=\"url(#ma%d)\">\n", VAR_9);
}
