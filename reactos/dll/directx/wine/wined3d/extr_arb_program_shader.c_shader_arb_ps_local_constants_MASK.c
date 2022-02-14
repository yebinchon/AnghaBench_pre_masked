
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_state {TYPE_3__* ps_consts_i; int ** texture_states; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {scalar_t__ render_offscreen; struct wined3d_gl_info* gl_info; } ;
struct arb_ps_compiled_shader {unsigned char numbumpenvmatconsts; scalar_t__ ycorrection; scalar_t__* int_consts; int num_int_consts; TYPE_2__* luminanceconst; TYPE_1__* bumpenvmatconst; } ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_5__ {scalar_t__ const_num; } ;
struct TYPE_4__ {int texunit; scalar_t__ const_num; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,scalar_t__,float const*) ;

__attribute__((used)) static void FUNC_3(const struct arb_ps_compiled_shader *VAR_5,
        const struct wined3d_context *VAR_6, const struct wined3d_state *VAR_7, UINT VAR_8)
{
    const struct wined3d_gl_info *VAR_9 = VAR_6->gl_info;
    unsigned char VAR_10;

    for(VAR_10 = 0; VAR_10 < VAR_5->numbumpenvmatconsts; VAR_10++)
    {
        int VAR_11 = VAR_5->bumpenvmatconst[VAR_10].texunit;


        const float *VAR_12 = (const float *)&VAR_7->texture_states[VAR_11][VAR_4];
        FUNC_0(FUNC_2(VAR_0,
                VAR_5->bumpenvmatconst[VAR_10].const_num, VAR_12));

        if (VAR_5->luminanceconst[VAR_10].const_num != VAR_1)
        {





            const float *VAR_13 = (const float *)&VAR_7->texture_states[VAR_11][VAR_3];
            FUNC_0(FUNC_2(VAR_0,
                    VAR_5->luminanceconst[VAR_10].const_num, VAR_13));
        }
    }
    FUNC_1("Load bumpmap consts");

    if(VAR_5->ycorrection != VAR_1)
    {





        float VAR_14[4];
        VAR_14[0] = VAR_6->render_offscreen ? 0.0f : (float) VAR_8;
        VAR_14[1] = VAR_6->render_offscreen ? 1.0f : -1.0f;
        VAR_14[2] = 1.0f;
        VAR_14[3] = 0.0f;
        FUNC_0(FUNC_2(VAR_0, VAR_5->ycorrection, VAR_14));
        FUNC_1("y correction loading");
    }

    if (!VAR_5->num_int_consts) return;

    for (VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10)
    {
        if(VAR_5->int_consts[VAR_10] != VAR_1)
        {
            float VAR_15[4];
            VAR_15[0] = (float)VAR_7->ps_consts_i[VAR_10].x;
            VAR_15[1] = (float)VAR_7->ps_consts_i[VAR_10].y;
            VAR_15[2] = (float)VAR_7->ps_consts_i[VAR_10].z;
            VAR_15[3] = -1.0f;

            FUNC_0(FUNC_2(VAR_0, VAR_5->int_consts[VAR_10], VAR_15));
        }
    }
    FUNC_1("Load ps int consts");
}
