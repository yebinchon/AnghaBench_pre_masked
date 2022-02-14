
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int max_surfaces; scalar_t__ num_surfaces; } ;
struct TYPE_7__ {int max_surfaces; scalar_t__ num_surfaces; } ;
struct TYPE_9__ {int num_filters; TYPE_2__ forward; TYPE_1__ backward; scalar_t__ num_output_colors; scalar_t__ num_input_colors; int * filters; int output_colors; int input_colors; } ;
struct priv {int num_buffers; int queue; TYPE_4__* opts; scalar_t__ do_deint; TYPE_3__ pipe; int context; int display; int * buffers; } ;
struct mp_filter {struct priv* priv; } ;
typedef int VAStatus ;
struct TYPE_11__ {int num_forward_references; int num_backward_references; scalar_t__ num_output_color_standards; scalar_t__ num_input_color_standards; int output_color_standards; int input_color_standards; } ;
typedef TYPE_5__ VAProcPipelineCaps ;
typedef int VABufferID ;
struct TYPE_10__ {int deint_type; scalar_t__ interlaced_only; scalar_t__ reversal_bug; } ;


 int FUNC_0 (struct mp_filter*,char*) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int ,int *,int,TYPE_5__*) ;

__attribute__((used)) static void FUNC_5(struct mp_filter *VAR_4)
{
    struct priv *VAR_5 = VAR_4->priv;
    VABufferID *VAR_6 = VAR_5->buffers;
    int VAR_7 = VAR_5->num_buffers;
    if (VAR_5->opts->deint_type && !VAR_5->do_deint) {
        VAR_6++;
        VAR_7--;
    }
    VAR_5->pipe.forward.num_surfaces = VAR_5->pipe.backward.num_surfaces = 0;
    VAR_5->pipe.num_input_colors = VAR_5->pipe.num_output_colors = 0;
    VAR_5->pipe.num_filters = 0;
    VAR_5->pipe.filters = ((void*)0);
    if (!VAR_7)
        goto nodeint;
    VAProcPipelineCaps VAR_8 = {
        .input_color_standards = VAR_5->pipe.input_colors,
        .output_color_standards = VAR_5->pipe.output_colors,
        .num_input_color_standards = VAR_3,
        .num_output_color_standards = VAR_3,
    };
    VAStatus VAR_9 = FUNC_4(VAR_5->display, VAR_5->context,
                                                   VAR_6, VAR_7, &VAR_8);
    if (!FUNC_0(VAR_4, "vaQueryVideoProcPipelineCaps()"))
        goto nodeint;
    VAR_5->pipe.filters = VAR_6;
    VAR_5->pipe.num_filters = VAR_7;
    VAR_5->pipe.num_input_colors = VAR_8.num_input_color_standards;
    VAR_5->pipe.num_output_colors = VAR_8.num_output_color_standards;
    VAR_5->pipe.forward.max_surfaces = VAR_8.num_forward_references;
    VAR_5->pipe.backward.max_surfaces = VAR_8.num_backward_references;
    if (VAR_5->opts->reversal_bug) {
        int VAR_10 = FUNC_1(VAR_8.num_forward_references, VAR_8.num_backward_references);
        FUNC_3(VAR_5->queue, VAR_10, VAR_10);
    } else {
        FUNC_3(VAR_5->queue, VAR_5->pipe.backward.max_surfaces,
                                       VAR_5->pipe.forward.max_surfaces);
    }
    FUNC_2(VAR_5->queue,
        (VAR_5->do_deint ? VAR_0 : 0) |
        (VAR_5->opts->deint_type >= 2 ? VAR_2 : 0) |
        (VAR_5->opts->interlaced_only ? VAR_1 : 0));
    return;

nodeint:
    FUNC_3(VAR_5->queue, 0, 0);
    FUNC_2(VAR_5->queue, 0);
}
