
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_renderpass_params {void* compute_shader; void* frag_shader; void* vertex_shader; int cached_program; int num_vertex_attribs; void* vertex_attribs; int num_inputs; void* inputs; } ;


 int FUNC_0 (struct ra_renderpass_params*,int ) ;
 void* FUNC_1 (struct ra_renderpass_params*,void*,int ) ;
 struct ra_renderpass_params* VAR_0 ;
 struct ra_renderpass_params* FUNC_2 (void*,int ) ;
 void* FUNC_3 (struct ra_renderpass_params*,void*) ;

struct ra_renderpass_params *FUNC_4(void *VAR_1,
        const struct ra_renderpass_params *VAR_2)
{
    struct ra_renderpass_params *VAR_3 = FUNC_2(VAR_1, VAR_3);
    *VAR_3 = *VAR_2;
    VAR_3->inputs = FUNC_1(VAR_3, VAR_3->inputs, VAR_3->num_inputs);
    VAR_3->vertex_attribs =
        FUNC_1(VAR_3, VAR_3->vertex_attribs, VAR_3->num_vertex_attribs);
    VAR_3->cached_program = FUNC_0(VAR_3, VAR_3->cached_program);
    VAR_3->vertex_shader = FUNC_3(VAR_3, VAR_3->vertex_shader);
    VAR_3->frag_shader = FUNC_3(VAR_3, VAR_3->frag_shader);
    VAR_3->compute_shader = FUNC_3(VAR_3, VAR_3->compute_shader);
    return VAR_3;
}
