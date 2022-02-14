
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * end_layer; int * begin_layer; int * set_default_colorspaces; int * render_flags; int * end_tile; int * begin_tile; int * end_group; int * begin_group; int * end_mask; int * begin_mask; int * pop_clip; int * clip_image_mask; int * fill_image_mask; int * fill_image; int * fill_shade; int * ignore_text; int * clip_stroke_text; int * clip_text; int * stroke_text; int * fill_text; int * clip_stroke_path; int * clip_path; int * stroke_path; int * fill_path; int * close_device; } ;
typedef TYPE_1__ fz_device ;
typedef int fz_context ;



__attribute__((used)) static void
FUNC_0(fz_context *VAR_0, fz_device *VAR_1)
{
 VAR_1->close_device = ((void*)0);
 VAR_1->fill_path = ((void*)0);
 VAR_1->stroke_path = ((void*)0);
 VAR_1->clip_path = ((void*)0);
 VAR_1->clip_stroke_path = ((void*)0);
 VAR_1->fill_text = ((void*)0);
 VAR_1->stroke_text = ((void*)0);
 VAR_1->clip_text = ((void*)0);
 VAR_1->clip_stroke_text = ((void*)0);
 VAR_1->ignore_text = ((void*)0);
 VAR_1->fill_shade = ((void*)0);
 VAR_1->fill_image = ((void*)0);
 VAR_1->fill_image_mask = ((void*)0);
 VAR_1->clip_image_mask = ((void*)0);
 VAR_1->pop_clip = ((void*)0);
 VAR_1->begin_mask = ((void*)0);
 VAR_1->end_mask = ((void*)0);
 VAR_1->begin_group = ((void*)0);
 VAR_1->end_group = ((void*)0);
 VAR_1->begin_tile = ((void*)0);
 VAR_1->end_tile = ((void*)0);
 VAR_1->render_flags = ((void*)0);
 VAR_1->set_default_colorspaces = ((void*)0);
 VAR_1->begin_layer = ((void*)0);
 VAR_1->end_layer = ((void*)0);
}
