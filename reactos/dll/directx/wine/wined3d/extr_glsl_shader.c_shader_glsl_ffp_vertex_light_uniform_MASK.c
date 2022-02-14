
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


struct wined3d_vec4 {int x; } ;
struct wined3d_state {struct wined3d_matrix* transforms; } ;
struct wined3d_matrix {int dummy; } ;
struct TYPE_9__ {int r; } ;
struct TYPE_8__ {int r; } ;
struct TYPE_7__ {int r; } ;
struct TYPE_12__ {int type; float theta; float phi; int attenuation2; int attenuation1; int attenuation0; int falloff; int range; TYPE_3__ ambient; TYPE_2__ specular; TYPE_1__ diffuse; } ;
struct wined3d_light_info {TYPE_6__ OriginalParms; int position; int direction; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct TYPE_11__ {TYPE_4__* light_location; } ;
struct glsl_shader_prog_link {TYPE_5__ vs; } ;
struct TYPE_10__ {int position; int direction; int cos_hphi; int cos_htheta; int q_att; int l_att; int c_att; int falloff; int range; int ambient; int specular; int diffuse; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;




 size_t VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (float) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int ,int,int *) ;
 int FUNC_7 (struct wined3d_vec4*,int *,struct wined3d_matrix const*) ;

__attribute__((used)) static void FUNC_8(const struct wined3d_context *VAR_1,
        const struct wined3d_state *VAR_2, unsigned int VAR_3, const struct wined3d_light_info *VAR_4,
        struct glsl_shader_prog_link *VAR_5)
{
    const struct wined3d_matrix *VAR_6 = &VAR_2->transforms[VAR_0];
    const struct wined3d_gl_info *VAR_7 = VAR_1->gl_info;
    struct wined3d_vec4 VAR_8;

    FUNC_1(FUNC_6(VAR_5->vs.light_location[VAR_3].diffuse, 1, &VAR_4->OriginalParms.diffuse.r));
    FUNC_1(FUNC_6(VAR_5->vs.light_location[VAR_3].specular, 1, &VAR_4->OriginalParms.specular.r));
    FUNC_1(FUNC_6(VAR_5->vs.light_location[VAR_3].ambient, 1, &VAR_4->OriginalParms.ambient.r));

    switch (VAR_4->OriginalParms.type)
    {
        case 129:
            FUNC_7(&VAR_8, &VAR_4->position, VAR_6);
            FUNC_1(FUNC_6(VAR_5->vs.light_location[VAR_3].position, 1, &VAR_8));
            FUNC_1(FUNC_4(VAR_5->vs.light_location[VAR_3].range, VAR_4->OriginalParms.range));
            FUNC_1(FUNC_4(VAR_5->vs.light_location[VAR_3].c_att, VAR_4->OriginalParms.attenuation0));
            FUNC_1(FUNC_4(VAR_5->vs.light_location[VAR_3].l_att, VAR_4->OriginalParms.attenuation1));
            FUNC_1(FUNC_4(VAR_5->vs.light_location[VAR_3].q_att, VAR_4->OriginalParms.attenuation2));
            break;

        case 128:
            FUNC_7(&VAR_8, &VAR_4->position, VAR_6);
            FUNC_1(FUNC_6(VAR_5->vs.light_location[VAR_3].position, 1, &VAR_8));

            FUNC_7(&VAR_8, &VAR_4->direction, VAR_6);
            FUNC_1(FUNC_5(VAR_5->vs.light_location[VAR_3].direction, 1, &VAR_8));

            FUNC_1(FUNC_4(VAR_5->vs.light_location[VAR_3].range, VAR_4->OriginalParms.range));
            FUNC_1(FUNC_4(VAR_5->vs.light_location[VAR_3].falloff, VAR_4->OriginalParms.falloff));
            FUNC_1(FUNC_4(VAR_5->vs.light_location[VAR_3].c_att, VAR_4->OriginalParms.attenuation0));
            FUNC_1(FUNC_4(VAR_5->vs.light_location[VAR_3].l_att, VAR_4->OriginalParms.attenuation1));
            FUNC_1(FUNC_4(VAR_5->vs.light_location[VAR_3].q_att, VAR_4->OriginalParms.attenuation2));
            FUNC_1(FUNC_4(VAR_5->vs.light_location[VAR_3].cos_htheta, FUNC_3(VAR_4->OriginalParms.theta / 2.0f)));
            FUNC_1(FUNC_4(VAR_5->vs.light_location[VAR_3].cos_hphi, FUNC_3(VAR_4->OriginalParms.phi / 2.0f)));
            break;

        case 131:
            FUNC_7(&VAR_8, &VAR_4->direction, VAR_6);
            FUNC_1(FUNC_5(VAR_5->vs.light_location[VAR_3].direction, 1, &VAR_8));
            break;

        case 130:
            FUNC_7(&VAR_8, &VAR_4->position, VAR_6);
            FUNC_1(FUNC_6(VAR_5->vs.light_location[VAR_3].position, 1, &VAR_8));
            break;

        default:
            FUNC_0("Unrecognized light type %#x.\n", VAR_4->OriginalParms.type);
    }
    FUNC_2("setting FFP lights uniforms");
}
