
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int viewbox_h; int viewport_h; int viewbox_w; int viewport_w; } ;
typedef TYPE_1__ svg_state ;
typedef int svg_document ;
typedef int fz_xml ;
typedef int fz_device ;
typedef int fz_context ;


 char* FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (char*,float*,float*,int *,int *) ;
 int FUNC_4 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_6 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_7 (int *,int *,int *,int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(fz_context *VAR_0, fz_device *VAR_1, svg_document *VAR_2, fz_xml *VAR_3, const svg_state *VAR_4)
{
 svg_state VAR_5 = *VAR_4;
 fz_xml *VAR_6;

 char *VAR_7 = FUNC_0(VAR_3, "width");
 char *VAR_8 = FUNC_0(VAR_3, "height");
 char *VAR_9 = FUNC_0(VAR_3, "viewBox");


 if (VAR_9 && (!VAR_7 || !VAR_8))
 {
  float VAR_10, VAR_11;
  FUNC_3(VAR_9, &VAR_10, &VAR_11, &VAR_5.viewbox_w, &VAR_5.viewbox_h);
  if (!VAR_7) VAR_5.viewport_w = VAR_5.viewbox_w;
  if (!VAR_8) VAR_5.viewport_h = VAR_5.viewbox_h;
 }

 FUNC_6(VAR_0, VAR_2, VAR_3, &VAR_5);
 FUNC_5(VAR_0, VAR_2, VAR_3, &VAR_5);
 FUNC_4(VAR_0, VAR_2, VAR_3, &VAR_5);

 for (VAR_6 = FUNC_1(VAR_3); VAR_6; VAR_6 = FUNC_2(VAR_6))
  FUNC_7(VAR_0, VAR_1, VAR_2, VAR_6, &VAR_5);
}
