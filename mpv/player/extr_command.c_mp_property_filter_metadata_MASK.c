
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_tags {int dummy; } ;
struct mp_output_chain {int dummy; } ;
struct mp_filter_command {struct mp_tags** res; int type; } ;
struct m_property_action_arg {char* key; int action; struct m_property_action_arg* arg; } ;
struct m_property {char* priv; } ;
typedef int bstr ;
struct TYPE_6__ {TYPE_2__* ao_chain; TYPE_1__* vo_chain; } ;
struct TYPE_5__ {struct mp_output_chain* filter; } ;
struct TYPE_4__ {struct mp_output_chain* filter; } ;
typedef TYPE_3__ MPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int *,char**) ;
 int FUNC_2 (struct mp_output_chain*,int ,struct mp_filter_command*) ;
 int FUNC_3 (int,char*,int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int,struct m_property_action_arg*,struct mp_tags*) ;
 int FUNC_7 (struct mp_tags*) ;

__attribute__((used)) static int FUNC_8(void *VAR_6, struct m_property *VAR_7,
                                       int VAR_8, void *VAR_9)
{
    MPContext *VAR_10 = VAR_6;
    const char *VAR_11 = VAR_7->priv;

    if (VAR_8 == VAR_3) {
        struct m_property_action_arg *VAR_12 = VAR_9;
        bstr VAR_13;
        char *VAR_14;
        FUNC_1(VAR_12->key, &VAR_13, &VAR_14);
        struct mp_tags *VAR_15 = ((void*)0);
        struct mp_output_chain *VAR_16 = ((void*)0);
        if (FUNC_4(VAR_11, "vf") == 0) {
            VAR_16 = VAR_10->vo_chain ? VAR_10->vo_chain->filter : ((void*)0);
        } else if (FUNC_4(VAR_11, "af") == 0) {
            VAR_16 = VAR_10->ao_chain ? VAR_10->ao_chain->filter : ((void*)0);
        }
        if (!VAR_16)
            return VAR_5;

        if (VAR_12->action != VAR_2) {
            struct mp_filter_command VAR_17 = {
                .type = VAR_0,
                .res = &VAR_15,
            };
            FUNC_2(VAR_16, FUNC_3(80, "%.*s", FUNC_0(VAR_13)),
                                    &VAR_17);

            if (!VAR_15)
                return VAR_1;
        }

        int VAR_18;
        if (FUNC_5(VAR_14)) {
            struct m_property_action_arg VAR_19 = *VAR_12;
            VAR_19.key = VAR_14;
            VAR_18 = FUNC_6(VAR_3, &VAR_19, VAR_15);
        } else {
            VAR_18 = FUNC_6(VAR_12->action, VAR_12->arg, VAR_15);
        }
        FUNC_7(VAR_15);
        return VAR_18;
    }
    return VAR_4;
}
