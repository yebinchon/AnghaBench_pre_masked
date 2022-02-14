
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_gl_info {scalar_t__* supported; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*) ;

__attribute__((used)) static void FUNC_1(struct wined3d_string_buffer *VAR_15,
        const struct wined3d_gl_info *VAR_16)
{
    if (VAR_16->supported[VAR_0])
        FUNC_0(VAR_15, "#extension GL_ARB_cull_distance : enable\n");
    if (VAR_16->supported[VAR_1])
        FUNC_0(VAR_15, "#extension GL_ARB_gpu_shader5 : enable\n");
    if (VAR_16->supported[VAR_2])
        FUNC_0(VAR_15, "#extension GL_ARB_shader_atomic_counters : enable\n");
    if (VAR_16->supported[VAR_3])
        FUNC_0(VAR_15, "#extension GL_ARB_shader_bit_encoding : enable\n");
    if (VAR_16->supported[VAR_4])
        FUNC_0(VAR_15, "#extension GL_ARB_shader_image_load_store : enable\n");
    if (VAR_16->supported[VAR_5])
        FUNC_0(VAR_15, "#extension GL_ARB_shader_image_size : enable\n");
    if (VAR_16->supported[VAR_6])
        FUNC_0(VAR_15, "#extension GL_ARB_shader_storage_buffer_object : enable\n");
    if (VAR_16->supported[VAR_7])
        FUNC_0(VAR_15, "#extension GL_ARB_shading_language_420pack : enable\n");
    if (VAR_16->supported[VAR_8])
        FUNC_0(VAR_15, "#extension GL_ARB_shading_language_packing : enable\n");
    if (VAR_16->supported[VAR_9])
        FUNC_0(VAR_15, "#extension GL_ARB_texture_cube_map_array : enable\n");
    if (VAR_16->supported[VAR_10])
        FUNC_0(VAR_15, "#extension GL_ARB_texture_gather : enable\n");
    if (VAR_16->supported[VAR_11])
        FUNC_0(VAR_15, "#extension GL_ARB_texture_query_levels : enable\n");
    if (VAR_16->supported[VAR_12])
        FUNC_0(VAR_15, "#extension GL_ARB_uniform_buffer_object : enable\n");
    if (VAR_16->supported[VAR_13])
        FUNC_0(VAR_15, "#extension GL_EXT_gpu_shader4 : enable\n");
    if (VAR_16->supported[VAR_14])
        FUNC_0(VAR_15, "#extension GL_EXT_texture_array : enable\n");
}
