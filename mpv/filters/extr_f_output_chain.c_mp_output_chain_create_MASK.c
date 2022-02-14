
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_output_chain {void* output_aformat; void* input_aformat; struct mp_filter* f; } ;
struct mp_filter {int log; struct chain* priv; TYPE_1__* global; } ;
struct chain {int type; TYPE_3__* output; int num_post_filters; int post_filters; TYPE_2__* convert; TYPE_3__* convert_wrapper; TYPE_3__* input; int num_pre_filters; int pre_filters; struct mp_output_chain public; int log; struct mp_filter* f; } ;
typedef enum mp_output_chain_type { ____Placeholder_mp_output_chain_type } mp_output_chain_type ;
struct TYPE_6__ {char* name; void* f; int wrapper; } ;
struct TYPE_5__ {struct chain* on_audio_format_change_opaque; int on_audio_format_change; void* f; } ;
struct TYPE_4__ {int log; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct chain*,int ,int ,TYPE_3__*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct chain*) ;
 int FUNC_3 (struct chain*) ;
 void* FUNC_4 (struct chain*) ;
 int FUNC_5 () ;
 TYPE_2__* FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_9 (struct mp_filter*,int *) ;
 int FUNC_10 (struct mp_filter*,int ,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (struct chain*) ;
 int FUNC_12 (struct mp_filter*) ;
 void* FUNC_13 (struct chain*,int ) ;

struct mp_output_chain *FUNC_14(struct mp_filter *VAR_4,
                                               enum mp_output_chain_type VAR_5)
{
    struct mp_filter *VAR_6 = FUNC_9(VAR_4, &VAR_3);
    if (!VAR_6)
        return ((void*)0);

    FUNC_8(VAR_6, VAR_0, "in");
    FUNC_8(VAR_6, VAR_1, "out");

    const char *VAR_7 = ((void*)0);
    switch (VAR_5) {
    case 128: VAR_7 = "!vf"; break;
    case 129: VAR_7 = "!af"; break;
    }
    if (VAR_7)
        VAR_6->log = FUNC_10(VAR_6, VAR_4->global->log, VAR_7);

    struct chain *VAR_8 = VAR_6->priv;
    VAR_8->f = VAR_6;
    VAR_8->log = VAR_6->log;
    VAR_8->type = VAR_5;

    struct mp_output_chain *VAR_9 = &VAR_8->public;
    VAR_9->f = VAR_6;
    VAR_9->input_aformat = FUNC_13(VAR_8, FUNC_5());
    VAR_9->output_aformat = FUNC_13(VAR_8, FUNC_5());


    VAR_8->input = FUNC_4(VAR_8);
    VAR_8->input->f = FUNC_7(VAR_8->input->wrapper);
    if (!VAR_8->input->f)
        FUNC_1();
    VAR_8->input->name = "in";
    FUNC_0(VAR_8, VAR_8->pre_filters, VAR_8->num_pre_filters, VAR_8->input);

    switch (VAR_5) {
    case 128: FUNC_3(VAR_8); break;
    case 129: FUNC_2(VAR_8); break;
    }

    VAR_8->convert_wrapper = FUNC_4(VAR_8);
    VAR_8->convert = FUNC_6(VAR_8->convert_wrapper->wrapper);
    if (!VAR_8->convert)
        FUNC_1();
    VAR_8->convert_wrapper->name = "convert";
    VAR_8->convert_wrapper->f = VAR_8->convert->f;
    FUNC_0(VAR_8, VAR_8->post_filters, VAR_8->num_post_filters, VAR_8->convert_wrapper);

    if (VAR_5 == 129) {
        VAR_8->convert->on_audio_format_change = VAR_2;
        VAR_8->convert->on_audio_format_change_opaque = VAR_8;
    }


    VAR_8->output = FUNC_4(VAR_8);
    VAR_8->output->f = FUNC_7(VAR_8->output->wrapper);
    if (!VAR_8->output->f)
        FUNC_1();
    VAR_8->output->name = "out";
    FUNC_0(VAR_8, VAR_8->post_filters, VAR_8->num_post_filters, VAR_8->output);

    FUNC_11(VAR_8);

    FUNC_12(VAR_6);

    return VAR_9;
}
