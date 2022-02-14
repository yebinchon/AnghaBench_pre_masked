
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enable_blend; int blend_src_rgb; int blend_dst_rgb; int blend_src_alpha; int blend_dst_alpha; } ;
struct gl_shader_cache {TYPE_1__ params; } ;
typedef enum ra_blend { ____Placeholder_ra_blend } ra_blend ;



void FUNC_0(struct gl_shader_cache *VAR_0,
                 enum ra_blend VAR_1,
                 enum ra_blend VAR_2,
                 enum ra_blend VAR_3,
                 enum ra_blend VAR_4)
{
    VAR_0->params.enable_blend = 1;
    VAR_0->params.blend_src_rgb = VAR_1;
    VAR_0->params.blend_dst_rgb = VAR_2;
    VAR_0->params.blend_src_alpha = VAR_3;
    VAR_0->params.blend_dst_alpha = VAR_4;
}
