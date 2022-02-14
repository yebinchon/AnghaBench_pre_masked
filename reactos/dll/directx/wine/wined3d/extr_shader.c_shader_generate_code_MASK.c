
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_version {int dummy; } ;
struct wined3d_shader_tex_mx {scalar_t__ current_row; } ;
struct wined3d_shader_reg_maps {int dummy; } ;
struct wined3d_shader_parser_state {int in_subroutine; scalar_t__ current_loop_reg; scalar_t__ current_loop_depth; } ;
struct wined3d_shader_instruction {scalar_t__ handler_idx; scalar_t__ predicate; struct wined3d_shader_context* ctx; } ;
struct wined3d_shader_frontend {int (* shader_read_instruction ) (void*,int const**,struct wined3d_shader_instruction*) ;int (* shader_is_end ) (void*,int const**) ;int (* shader_read_header ) (void*,int const**,struct wined3d_shader_version*) ;} ;
struct wined3d_shader_context {void* backend_data; struct wined3d_shader_parser_state* state; struct wined3d_shader_tex_mx* tex_mx; struct wined3d_string_buffer* buffer; struct wined3d_shader_reg_maps const* reg_maps; int * gl_info; struct wined3d_shader const* shader; } ;
struct wined3d_shader {void* frontend_data; struct wined3d_shader_frontend* frontend; struct wined3d_device* device; } ;
struct wined3d_device {TYPE_2__* shader_backend; TYPE_1__* adapter; } ;
struct TYPE_4__ {int (* shader_handle_instruction ) (struct wined3d_shader_instruction*) ;} ;
struct TYPE_3__ {int gl_info; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (void*,int const**,struct wined3d_shader_version*) ;
 int FUNC_3 (void*,int const**) ;
 int FUNC_4 (void*,int const**,struct wined3d_shader_instruction*) ;
 int FUNC_5 (struct wined3d_shader_instruction*) ;

HRESULT FUNC_6(const struct wined3d_shader *VAR_4, struct wined3d_string_buffer *VAR_5,
        const struct wined3d_shader_reg_maps *VAR_6, void *VAR_7,
        const DWORD *VAR_8, const DWORD *VAR_9)
{
    struct wined3d_device *VAR_10 = VAR_4->device;
    const struct wined3d_shader_frontend *VAR_11 = VAR_4->frontend;
    void *VAR_12 = VAR_4->frontend_data;
    struct wined3d_shader_version VAR_13;
    struct wined3d_shader_parser_state VAR_14;
    struct wined3d_shader_instruction VAR_15;
    struct wined3d_shader_tex_mx VAR_16;
    struct wined3d_shader_context VAR_17;
    const DWORD *VAR_18;


    VAR_16.current_row = 0;
    VAR_14.current_loop_depth = 0;
    VAR_14.current_loop_reg = 0;
    VAR_14.in_subroutine = VAR_0;

    VAR_17.shader = VAR_4;
    VAR_17.gl_info = &VAR_10->adapter->gl_info;
    VAR_17.reg_maps = VAR_6;
    VAR_17.buffer = VAR_5;
    VAR_17.tex_mx = &VAR_16;
    VAR_17.state = &VAR_14;
    VAR_17.backend_data = VAR_7;
    VAR_15.ctx = &VAR_17;

    VAR_11->shader_read_header(VAR_12, &VAR_18, &VAR_13);
    if (VAR_8)
        VAR_18 = VAR_8;

    while (!VAR_11->shader_is_end(VAR_12, &VAR_18) && VAR_18 != VAR_9)
    {

        VAR_11->shader_read_instruction(VAR_12, &VAR_18, &VAR_15);


        if (VAR_15.handler_idx == VAR_2)
        {
            FUNC_1("Encountered unrecognised or invalid instruction.\n");
            return VAR_1;
        }

        if (VAR_15.predicate)
            FUNC_0("Predicates not implemented.\n");


        VAR_10->shader_backend->shader_handle_instruction(&VAR_15);
    }

    return VAR_3;
}
