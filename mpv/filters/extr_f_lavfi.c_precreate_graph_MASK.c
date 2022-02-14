
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lavfi {int failed; int num_all_pads; int f; TYPE_1__** all_pads; int graph_string; scalar_t__ graph; int direct_filter_opts; int log; scalar_t__ direct_filter; int graph_opts; } ;
struct TYPE_8__ {int nb_outputs; int output_pads; int nb_inputs; int input_pads; int priv; } ;
struct TYPE_7__ {int filter; } ;
typedef int AVFilterInOut ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (struct lavfi*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct lavfi*,int ,int *,int) ;
 int FUNC_3 (struct lavfi*,int ,TYPE_2__*,int ,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 TYPE_2__* FUNC_7 (scalar_t__,int ,char*) ;
 scalar_t__ FUNC_8 (scalar_t__,int ,int **,int **) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (int **) ;
 int FUNC_11 (struct lavfi*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_14 (int ,TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_15(struct lavfi *VAR_2, bool VAR_3)
{
    FUNC_4(!VAR_2->graph);

    VAR_2->failed = 0;

    VAR_2->graph = FUNC_6();
    if (!VAR_2->graph)
        FUNC_1();

    if (FUNC_13(VAR_2->log, VAR_2->graph, VAR_2->graph_opts) < 0)
        goto error;

    if (VAR_2->direct_filter) {
        AVFilterContext *VAR_4 = FUNC_7(VAR_2->graph,
                            FUNC_5(VAR_2->graph_string), "filter");
        if (!VAR_4) {
            FUNC_0(VAR_2, "filter '%s' not found or failed to allocate\n",
                     VAR_2->graph_string);
            goto error;
        }

        if (FUNC_14(VAR_2->log, VAR_4, VAR_4->priv,
                              VAR_2->direct_filter_opts) < 0)
            goto error;

        if (FUNC_9(VAR_4, ((void*)0)) < 0) {
            FUNC_0(VAR_2, "filter failed to initialize\n");
            goto error;
        }

        FUNC_3(VAR_2, VAR_0, VAR_4, VAR_4->input_pads,
                        VAR_4->nb_inputs, VAR_3);
        FUNC_3(VAR_2, VAR_1, VAR_4, VAR_4->output_pads,
                        VAR_4->nb_outputs, VAR_3);
    } else {
        AVFilterInOut *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
        if (FUNC_8(VAR_2->graph, VAR_2->graph_string, &VAR_5, &VAR_6) < 0) {
            FUNC_0(VAR_2, "parsing the filter graph failed\n");
            goto error;
        }
        FUNC_2(VAR_2, VAR_0, VAR_5, VAR_3);
        FUNC_2(VAR_2, VAR_1, VAR_6, VAR_3);
        FUNC_10(&VAR_5);
        FUNC_10(&VAR_6);
    }

    for (int VAR_7 = 0; VAR_7 < VAR_2->num_all_pads; VAR_7++)
        VAR_2->failed |= !VAR_2->all_pads[VAR_7]->filter;

    if (VAR_2->failed)
        goto error;

    return;

error:
    FUNC_11(VAR_2);
    VAR_2->failed = 1;
    FUNC_12(VAR_2->f);
    return;
}
