
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_vertex_pipe_ops {struct StateEntryTemplate* vp_states; } ;
struct wined3d_gl_info {int * supported; } ;
struct wined3d_d3d_info {int dummy; } ;
struct fragment_pipeline {struct StateEntryTemplate* states; } ;
struct TYPE_2__ {scalar_t__ representative; int apply; } ;
struct StateEntryTemplate {int state; size_t extension; TYPE_1__ content; } ;
struct StateEntry {scalar_t__ representative; int apply; } ;
typedef int set ;
typedef int multistate_funcs ;
typedef int HRESULT ;
typedef int * BOOL ;
typedef int APPLYSTATEFUNC ;


 int FUNC_0 (char*,size_t,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,size_t) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (size_t) ;
 int * FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int **,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_7 (int *) ;
 int FUNC_8 (struct StateEntry*,struct wined3d_gl_info const*,struct wined3d_d3d_info const*) ;
 int VAR_6 ;
 int FUNC_9 (struct StateEntry*) ;

HRESULT FUNC_10(struct StateEntry *VAR_7, APPLYSTATEFUNC **VAR_8,
        const struct wined3d_gl_info *VAR_9, const struct wined3d_d3d_info *VAR_10,
        const struct wined3d_vertex_pipe_ops *VAR_11, const struct fragment_pipeline *VAR_12,
        const struct StateEntryTemplate *VAR_13)
{
    unsigned int VAR_14, VAR_15, VAR_16;
    APPLYSTATEFUNC VAR_17[VAR_1 + 1][3];
    const struct StateEntryTemplate *VAR_18;
    BOOL VAR_19[VAR_1 + 1];

    FUNC_6(VAR_17, 0, sizeof(VAR_17));

    for(VAR_14 = 0; VAR_14 < VAR_1 + 1; VAR_14++) {
        VAR_7[VAR_14].representative = 0;
        VAR_7[VAR_14].apply = VAR_6;
    }

    for(VAR_15 = 0; VAR_15 < 3; VAR_15++) {

        switch(VAR_15) {
            case 0: VAR_18 = VAR_13; break;
            case 1: VAR_18 = VAR_12->states; break;
            case 2: VAR_18 = VAR_11->vp_states; break;
            default: VAR_18 = ((void*)0);
        }
        if(!VAR_18) continue;




        FUNC_6(VAR_19, 0, sizeof(VAR_19));

        for(VAR_14 = 0; VAR_18[VAR_14].state; VAR_14++) {
            APPLYSTATEFUNC *VAR_20;
            if(VAR_19[VAR_18[VAR_14].state]) continue;

            if (!VAR_9->supported[VAR_18[VAR_14].extension]) continue;
            VAR_19[VAR_18[VAR_14].state] = VAR_2;







            if (!VAR_18[VAR_14].content.representative) continue;

            VAR_16 = FUNC_7(VAR_17[VAR_18[VAR_14].state]);
            VAR_17[VAR_18[VAR_14].state][VAR_16] = VAR_18[VAR_14].content.apply;
            switch(VAR_16) {
                case 0:
                    VAR_7[VAR_18[VAR_14].state].apply = VAR_18[VAR_14].content.apply;
                    break;
                case 1:
                    VAR_7[VAR_18[VAR_14].state].apply = VAR_4;
                    if (!(VAR_8[VAR_18[VAR_14].state] = FUNC_3(2, sizeof(**VAR_8))))
                        goto out_of_mem;

                    VAR_8[VAR_18[VAR_14].state][0] = VAR_17[VAR_18[VAR_14].state][0];
                    VAR_8[VAR_18[VAR_14].state][1] = VAR_17[VAR_18[VAR_14].state][1];
                    break;
                case 2:
                    VAR_7[VAR_18[VAR_14].state].apply = VAR_5;
                    if (!(VAR_20 = FUNC_5(VAR_8[VAR_18[VAR_14].state],
                            sizeof(**VAR_8) * 3)))
                        goto out_of_mem;

                    VAR_8[VAR_18[VAR_14].state] = VAR_20;
                    VAR_8[VAR_18[VAR_14].state][2] = VAR_17[VAR_18[VAR_14].state][2];
                    break;
                default:
                    FUNC_0("Unexpected amount of state handlers for state %u: %u\n",
                        VAR_18[VAR_14].state, VAR_16 + 1);
            }

            if (VAR_7[VAR_18[VAR_14].state].representative
                    && VAR_7[VAR_18[VAR_14].state].representative != VAR_18[VAR_14].content.representative)
            {
                FUNC_1("State %s (%#x) has different representatives in different pipeline parts.\n",
                        FUNC_2(VAR_18[VAR_14].state), VAR_18[VAR_14].state);
            }
            VAR_7[VAR_18[VAR_14].state].representative = VAR_18[VAR_14].content.representative;
        }
    }

    FUNC_8(VAR_7, VAR_9, VAR_10);
    FUNC_9(VAR_7);

    return VAR_3;

out_of_mem:
    for (VAR_14 = 0; VAR_14 <= VAR_1; ++VAR_14)
    {
        FUNC_4(VAR_8[VAR_14]);
    }

    FUNC_6(VAR_8, 0, (VAR_1 + 1)*sizeof(*VAR_8));

    return VAR_0;
}
