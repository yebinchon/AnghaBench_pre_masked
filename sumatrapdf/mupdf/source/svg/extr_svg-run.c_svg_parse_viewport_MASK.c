
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fontsize; int viewbox_h; void* viewport_h; int viewbox_w; void* viewport_w; } ;
typedef TYPE_1__ svg_state ;
typedef int svg_document ;
typedef int fz_xml ;
typedef int fz_context ;


 char* FUNC_0 (int *,char*) ;
 void* FUNC_1 (char*,int ,int ) ;

void
FUNC_2(fz_context *VAR_0, svg_document *VAR_1, fz_xml *VAR_2, svg_state *VAR_3)
{
 char *VAR_4 = FUNC_0(VAR_2, "width");
 char *VAR_5 = FUNC_0(VAR_2, "height");

 if (VAR_4)
  VAR_3->viewport_w = FUNC_1(VAR_4, VAR_3->viewbox_w, VAR_3->fontsize);
 if (VAR_5)
  VAR_3->viewport_h = FUNC_1(VAR_5, VAR_3->viewbox_h, VAR_3->fontsize);

}
