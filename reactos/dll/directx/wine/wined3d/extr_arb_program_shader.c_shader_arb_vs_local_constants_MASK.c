
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {TYPE_1__* vs_consts_i; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct arb_vs_compiled_shader {scalar_t__ pos_fixup; scalar_t__* int_consts; int num_int_consts; } ;
struct TYPE_2__ {scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,scalar_t__,float*) ;
 int FUNC_3 (struct wined3d_context const*,struct wined3d_state const*,float*) ;

__attribute__((used)) static void FUNC_4(const struct arb_vs_compiled_shader *VAR_3,
        const struct wined3d_context *VAR_4, const struct wined3d_state *VAR_5)
{
    const struct wined3d_gl_info *VAR_6 = VAR_4->gl_info;
    float VAR_7[4];
    unsigned char VAR_8;


    FUNC_3(VAR_4, VAR_5, VAR_7);
    FUNC_0(FUNC_2(VAR_0, VAR_3->pos_fixup, VAR_7));

    if (!VAR_3->num_int_consts) return;

    for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8)
    {
        if(VAR_3->int_consts[VAR_8] != VAR_1)
        {
            float VAR_9[4];
            VAR_9[0] = (float)VAR_5->vs_consts_i[VAR_8].x;
            VAR_9[1] = (float)VAR_5->vs_consts_i[VAR_8].y;
            VAR_9[2] = (float)VAR_5->vs_consts_i[VAR_8].z;
            VAR_9[3] = -1.0f;

            FUNC_0(FUNC_2(VAR_0, VAR_3->int_consts[VAR_8], VAR_9));
        }
    }
    FUNC_1("Load vs int consts");
}
