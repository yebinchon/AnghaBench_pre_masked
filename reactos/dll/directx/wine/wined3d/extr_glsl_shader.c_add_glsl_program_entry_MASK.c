
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


struct shader_glsl_priv {int program_lookup; } ;
struct TYPE_11__ {int id; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_12__ {int id; } ;
struct glsl_shader_prog_link {int program_lookup_entry; TYPE_5__ cs; TYPE_4__ ps; TYPE_3__ gs; TYPE_2__ ds; TYPE_1__ hs; TYPE_6__ vs; } ;
struct glsl_program_key {int cs_id; int ps_id; int gs_id; int ds_id; int hs_id; int vs_id; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,struct glsl_program_key*,int *) ;

__attribute__((used)) static void FUNC_2(struct shader_glsl_priv *VAR_0, struct glsl_shader_prog_link *VAR_1)
{
    struct glsl_program_key VAR_2;

    VAR_2.vs_id = VAR_1->vs.id;
    VAR_2.hs_id = VAR_1->hs.id;
    VAR_2.ds_id = VAR_1->ds.id;
    VAR_2.gs_id = VAR_1->gs.id;
    VAR_2.ps_id = VAR_1->ps.id;
    VAR_2.cs_id = VAR_1->cs.id;

    if (FUNC_1(&VAR_0->program_lookup, &VAR_2, &VAR_1->program_lookup_entry) == -1)
    {
        FUNC_0("Failed to insert program entry.\n");
    }
}
