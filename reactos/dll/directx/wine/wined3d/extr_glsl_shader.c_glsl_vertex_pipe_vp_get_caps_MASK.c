
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_vertex_caps {int emulated_flatshading; int vertex_processing_caps; int fvf_caps; int raster_caps; int max_user_clip_planes; scalar_t__ max_vertex_blend_matrix_index; int max_vertex_blend_matrices; int max_active_lights; void* ffp_generic_attributes; void* xyzrhw; } ;
struct TYPE_2__ {int user_clip_distances; } ;
struct wined3d_gl_info {TYPE_1__ limits; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct wined3d_gl_info const*) ;

__attribute__((used)) static void FUNC_1(const struct wined3d_gl_info *VAR_13, struct wined3d_vertex_caps *VAR_14)
{
    VAR_14->xyzrhw = VAR_3;
    VAR_14->emulated_flatshading = !FUNC_0(VAR_13);
    VAR_14->ffp_generic_attributes = VAR_3;
    VAR_14->max_active_lights = VAR_0;
    VAR_14->max_vertex_blend_matrices = VAR_1;
    VAR_14->max_vertex_blend_matrix_index = VAR_2 - 1;
    VAR_14->vertex_processing_caps = VAR_10
            | VAR_8
            | VAR_12
            | VAR_6
            | VAR_9
            | VAR_7
            | VAR_11;
    VAR_14->fvf_caps = VAR_4 | 8;
    VAR_14->max_user_clip_planes = VAR_13->limits.user_clip_distances;
    VAR_14->raster_caps = VAR_5;
}
