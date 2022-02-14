
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wined3d_gl_info {int dummy; } ;
struct shader_glsl_priv {int program_lookup; } ;
struct TYPE_12__ {int shader_entry; scalar_t__ id; } ;
struct TYPE_11__ {int shader_entry; scalar_t__ id; } ;
struct TYPE_10__ {int shader_entry; scalar_t__ id; } ;
struct TYPE_9__ {int shader_entry; scalar_t__ id; } ;
struct TYPE_8__ {int shader_entry; scalar_t__ id; } ;
struct TYPE_7__ {int shader_entry; scalar_t__ id; } ;
struct glsl_shader_prog_link {TYPE_6__ cs; TYPE_5__ ps; TYPE_4__ gs; TYPE_3__ ds; TYPE_2__ hs; TYPE_1__ vs; int id; int program_lookup_entry; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct glsl_shader_prog_link*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct shader_glsl_priv *VAR_0, const struct wined3d_gl_info *VAR_1,
        struct glsl_shader_prog_link *VAR_2)
{
    FUNC_4(&VAR_0->program_lookup, &VAR_2->program_lookup_entry);

    FUNC_0(FUNC_1(VAR_2->id));
    if (VAR_2->vs.id)
        FUNC_3(&VAR_2->vs.shader_entry);
    if (VAR_2->hs.id)
        FUNC_3(&VAR_2->hs.shader_entry);
    if (VAR_2->ds.id)
        FUNC_3(&VAR_2->ds.shader_entry);
    if (VAR_2->gs.id)
        FUNC_3(&VAR_2->gs.shader_entry);
    if (VAR_2->ps.id)
        FUNC_3(&VAR_2->ps.shader_entry);
    if (VAR_2->cs.id)
        FUNC_3(&VAR_2->cs.shader_entry);
    FUNC_2(VAR_2);
}
