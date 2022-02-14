
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_20__ {scalar_t__ type; } ;
struct TYPE_17__ {TYPE_3__ shader_version; } ;
struct TYPE_26__ {int elements; } ;
struct TYPE_25__ {int elements; } ;
struct TYPE_24__ {int elements; } ;
struct TYPE_21__ {int elements; } ;
struct TYPE_22__ {TYPE_4__ so_desc; } ;
struct TYPE_18__ {int join; int fork; int control_point; } ;
struct TYPE_19__ {TYPE_1__ phases; } ;
struct TYPE_23__ {TYPE_5__ gs; TYPE_2__ hs; } ;
struct wined3d_shader {scalar_t__ frontend_data; TYPE_12__* frontend; int shader_list_entry; int constantsI; int constantsB; int constantsF; int function; TYPE_13__ reg_maps; TYPE_11__* device; int signature_strings; TYPE_9__ input_signature; TYPE_8__ output_signature; TYPE_7__ patch_constant_signature; TYPE_6__ u; } ;
struct TYPE_16__ {int (* shader_free ) (scalar_t__) ;} ;
struct TYPE_15__ {TYPE_10__* shader_backend; } ;
struct TYPE_14__ {int (* shader_destroy ) (struct wined3d_shader*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_13__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wined3d_shader*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct wined3d_shader *VAR_2)
{
    if (VAR_2->reg_maps.shader_version.type == VAR_1)
    {
        FUNC_0(VAR_2->u.hs.phases.control_point);
        FUNC_0(VAR_2->u.hs.phases.fork);
        FUNC_0(VAR_2->u.hs.phases.join);
    }
    else if (VAR_2->reg_maps.shader_version.type == VAR_0)
    {
        FUNC_0(VAR_2->u.gs.so_desc.elements);
    }

    FUNC_0(VAR_2->patch_constant_signature.elements);
    FUNC_0(VAR_2->output_signature.elements);
    FUNC_0(VAR_2->input_signature.elements);
    FUNC_0(VAR_2->signature_strings);
    VAR_2->device->shader_backend->shader_destroy(VAR_2);
    FUNC_2(&VAR_2->reg_maps);
    FUNC_0(VAR_2->function);
    FUNC_3(&VAR_2->constantsF);
    FUNC_3(&VAR_2->constantsB);
    FUNC_3(&VAR_2->constantsI);
    FUNC_1(&VAR_2->shader_list_entry);

    if (VAR_2->frontend && VAR_2->frontend_data)
        VAR_2->frontend->shader_free(VAR_2->frontend_data);
}
