
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int viewport_w; int viewport_h; int viewbox_w; int viewbox_h; int viewbox_size; int fontsize; int opacity; int fill_is_set; int fill_opacity; int stroke_opacity; scalar_t__* stroke_color; scalar_t__ stroke_is_set; scalar_t__* fill_color; scalar_t__ fill_rule; scalar_t__ use_depth; int stroke; int transform; } ;
typedef TYPE_1__ svg_state ;
typedef int svg_document ;
typedef int fz_xml ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *,TYPE_1__*) ;

void
FUNC_3(fz_context *VAR_3, svg_document *VAR_4, fz_xml *VAR_5, fz_device *VAR_6, fz_matrix VAR_7)
{
 svg_state VAR_8;

 FUNC_1(VAR_3, VAR_4, VAR_5);


 VAR_8.transform = VAR_7;
 VAR_8.stroke = VAR_2;
 VAR_8.use_depth = 0;

 VAR_8.viewport_w = VAR_1;
 VAR_8.viewport_h = VAR_0;

 VAR_8.viewbox_w = VAR_1;
 VAR_8.viewbox_h = VAR_0;
 VAR_8.viewbox_size = FUNC_0(VAR_1*VAR_1 + VAR_0*VAR_0) / FUNC_0(2);

 VAR_8.fontsize = 12;

 VAR_8.opacity = 1;

 VAR_8.fill_rule = 0;

 VAR_8.fill_is_set = 1;
 VAR_8.fill_color[0] = 0;
 VAR_8.fill_color[1] = 0;
 VAR_8.fill_color[2] = 0;
 VAR_8.fill_opacity = 1;

 VAR_8.stroke_is_set = 0;
 VAR_8.stroke_color[0] = 0;
 VAR_8.stroke_color[1] = 0;
 VAR_8.stroke_color[2] = 0;
 VAR_8.stroke_opacity = 1;

 FUNC_2(VAR_3, VAR_6, VAR_4, VAR_5, &VAR_8);
}
