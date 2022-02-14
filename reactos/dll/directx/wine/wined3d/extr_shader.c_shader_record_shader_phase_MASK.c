
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_shader_phase {int const* start; int const* end; } ;
struct wined3d_shader_instruction {int handler_idx; } ;
struct TYPE_8__ {int join_count; struct wined3d_shader_phase* join; int join_size; int fork_count; struct wined3d_shader_phase* fork; int fork_size; struct wined3d_shader_phase* control_point; } ;
struct TYPE_9__ {TYPE_3__ phases; } ;
struct TYPE_10__ {TYPE_4__ hs; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_7__ {TYPE_1__ shader_version; } ;
struct wined3d_shader {TYPE_5__ u; TYPE_2__ reg_maps; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;



 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 struct wined3d_shader_phase* FUNC_3 (int) ;
 int FUNC_4 (struct wined3d_shader_phase*) ;
 int FUNC_5 (void**,int *,int ,int) ;

__attribute__((used)) static HRESULT FUNC_6(struct wined3d_shader *VAR_4,
        struct wined3d_shader_phase **VAR_5, const struct wined3d_shader_instruction *VAR_6,
        const DWORD *VAR_7, const DWORD *VAR_8)
{
    struct wined3d_shader_phase *VAR_9;

    if ((VAR_9 = *VAR_5))
    {
        VAR_9->end = VAR_8;
        *VAR_5 = ((void*)0);
    }

    if (VAR_4->reg_maps.shader_version.type != VAR_3)
    {
        FUNC_0("Unexpected shader type %#x.\n", VAR_4->reg_maps.shader_version.type);
        return VAR_0;
    }

    switch (VAR_6->handler_idx)
    {
        case 130:
            if (VAR_4->u.hs.phases.control_point)
            {
                FUNC_1("Multiple control point phases.\n");
                FUNC_4(VAR_4->u.hs.phases.control_point);
            }
            if (!(VAR_4->u.hs.phases.control_point = FUNC_3(sizeof(*VAR_4->u.hs.phases.control_point))))
                return VAR_1;
            VAR_9 = VAR_4->u.hs.phases.control_point;
            break;
        case 129:
            if (!FUNC_5((void **)&VAR_4->u.hs.phases.fork,
                    &VAR_4->u.hs.phases.fork_size, VAR_4->u.hs.phases.fork_count + 1,
                    sizeof(*VAR_4->u.hs.phases.fork)))
                return VAR_1;
            VAR_9 = &VAR_4->u.hs.phases.fork[VAR_4->u.hs.phases.fork_count++];
            break;
        case 128:
            if (!FUNC_5((void **)&VAR_4->u.hs.phases.join,
                    &VAR_4->u.hs.phases.join_size, VAR_4->u.hs.phases.join_count + 1,
                    sizeof(*VAR_4->u.hs.phases.join)))
                return VAR_1;
            VAR_9 = &VAR_4->u.hs.phases.join[VAR_4->u.hs.phases.join_count++];
            break;
        default:
            FUNC_0("Unexpected opcode %s.\n", FUNC_2(VAR_6->handler_idx));
            return VAR_0;
    }

    VAR_9->start = VAR_7;
    *VAR_5 = VAR_9;

    return VAR_2;
}
