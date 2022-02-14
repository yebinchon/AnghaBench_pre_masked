
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mp_stream_info {scalar_t__ hwdec_devs; } ;
struct mp_hwdec_ctx {scalar_t__ av_device_ref; } ;
struct lavfi_pad {TYPE_2__* buffer; int timebase; } ;
struct lavfi {int initialized; int failed; int num_out_pads; int direct_filter; struct lavfi_pad** out_pads; int f; TYPE_4__* graph; } ;
struct TYPE_8__ {int nb_filters; TYPE_3__** filters; } ;
struct TYPE_7__ {int hw_device_ctx; } ;
struct TYPE_6__ {TYPE_1__** inputs; } ;
struct TYPE_5__ {int time_base; } ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (struct lavfi*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (struct lavfi*) ;
 int FUNC_5 (struct lavfi*) ;
 struct mp_hwdec_ctx* FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct lavfi*) ;
 struct mp_stream_info* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct lavfi*,int) ;

__attribute__((used)) static void FUNC_11(struct lavfi *VAR_0)
{
    FUNC_1(!VAR_0->initialized);

    if (!VAR_0->graph)
        FUNC_10(VAR_0, 0);

    if (FUNC_7(VAR_0)) {
        struct mp_stream_info *VAR_1 = FUNC_8(VAR_0->f);
        if (VAR_1 && VAR_1->hwdec_devs) {
            struct mp_hwdec_ctx *VAR_2 = FUNC_6(VAR_1->hwdec_devs);
            for (int VAR_3 = 0; VAR_3 < VAR_0->graph->nb_filters; VAR_3++) {
                AVFilterContext *VAR_4 = VAR_0->graph->filters[VAR_3];
                if (VAR_2 && VAR_2->av_device_ref)
                    VAR_4->hw_device_ctx = FUNC_2(VAR_2->av_device_ref);
            }
        }


        if (FUNC_3(VAR_0->graph, ((void*)0)) < 0) {
            FUNC_0(VAR_0, "failed to configure the filter graph\n");
            FUNC_5(VAR_0);
            VAR_0->failed = 1;
            FUNC_9(VAR_0->f);
            return;
        }


        for (int VAR_5 = 0; VAR_5 < VAR_0->num_out_pads; VAR_5++) {
            struct lavfi_pad *VAR_6 = VAR_0->out_pads[VAR_5];

            VAR_6->timebase = VAR_6->buffer->inputs[0]->time_base;
        }

        VAR_0->initialized = 1;

        if (!VAR_0->direct_filter)
            FUNC_4(VAR_0);
    }
}
