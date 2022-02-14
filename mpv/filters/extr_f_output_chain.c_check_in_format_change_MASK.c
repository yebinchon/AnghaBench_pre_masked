
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_user_filter {int last_in_aformat; int name; int last_in_vformat; struct chain* p; } ;
struct mp_image {int params; } ;
struct mp_frame {scalar_t__ type; struct mp_image* data; } ;
struct mp_aframe {int params; } ;
struct TYPE_2__ {int reconfig_happened; int output_aformat; int input_aformat; int output_params; int input_params; } ;
struct chain {TYPE_1__ public; struct mp_user_filter* output; struct mp_user_filter* input; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct chain*,char*,int ,int ) ;
 int FUNC_1 (int ,struct mp_image*) ;
 int FUNC_2 (struct mp_image*,int ) ;
 int FUNC_3 (struct mp_image*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct chain*) ;

__attribute__((used)) static void FUNC_7(struct mp_user_filter *VAR_2,
                                   struct mp_frame VAR_3)
{
    struct chain *VAR_4 = VAR_2->p;

    if (VAR_3.type == VAR_1) {
        struct mp_image *VAR_5 = VAR_3.data;

        if (!FUNC_4(&VAR_5->params, &VAR_2->last_in_vformat)) {
            FUNC_0(VAR_4, "[%s] %s\n", VAR_2->name,
                       FUNC_5(&VAR_5->params));
            VAR_2->last_in_vformat = VAR_5->params;

            if (VAR_2 == VAR_4->input) {
                VAR_4->public.input_params = VAR_5->params;





                FUNC_6(VAR_4);
            } else if (VAR_2 == VAR_4->output) {
                VAR_4->public.output_params = VAR_5->params;
            }

            VAR_4->public.reconfig_happened = 1;
        }
    }

    if (VAR_3.type == VAR_0) {
        struct mp_aframe *VAR_6 = VAR_3.data;

        if (!FUNC_2(VAR_6, VAR_2->last_in_aformat)) {
            FUNC_0(VAR_4, "[%s] %s\n", VAR_2->name,
                       FUNC_3(VAR_6));
            FUNC_1(VAR_2->last_in_aformat, VAR_6);

            if (VAR_2 == VAR_4->input) {
                FUNC_1(VAR_4->public.input_aformat, VAR_6);
            } else if (VAR_2 == VAR_4->output) {
                FUNC_1(VAR_4->public.output_aformat, VAR_6);
            }

            VAR_4->public.reconfig_happened = 1;
        }
    }
}
