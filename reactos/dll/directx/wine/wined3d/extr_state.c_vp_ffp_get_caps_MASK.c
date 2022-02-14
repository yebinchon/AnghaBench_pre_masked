
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_vertex_caps {int vertex_processing_caps; int fvf_caps; int raster_caps; int max_user_clip_planes; scalar_t__ max_vertex_blend_matrix_index; int max_vertex_blend_matrices; int max_active_lights; void* ffp_generic_attributes; void* xyzrhw; } ;
struct TYPE_2__ {int user_clip_distances; int blends; int lights; } ;
struct wined3d_gl_info {scalar_t__* supported; TYPE_1__ limits; } ;


 void* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_0(const struct wined3d_gl_info *VAR_11, struct wined3d_vertex_caps *VAR_12)
{
    VAR_12->xyzrhw = VAR_0;
    VAR_12->ffp_generic_attributes = VAR_0;
    VAR_12->max_active_lights = VAR_11->limits.lights;
    VAR_12->max_vertex_blend_matrices = VAR_11->limits.blends;
    VAR_12->max_vertex_blend_matrix_index = 0;
    VAR_12->vertex_processing_caps = VAR_4
            | VAR_6
            | VAR_7
            | VAR_5
            | VAR_10
            | VAR_8
            | VAR_9;
    VAR_12->fvf_caps = VAR_2 | 0x0008;
    VAR_12->max_user_clip_planes = VAR_11->limits.user_clip_distances;
    VAR_12->raster_caps = 0;
    if (VAR_11->supported[VAR_1])
        VAR_12->raster_caps |= VAR_3;
}
