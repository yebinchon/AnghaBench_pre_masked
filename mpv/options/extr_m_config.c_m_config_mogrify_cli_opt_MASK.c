
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_option_type {int flags; struct m_option_action* actions; } ;
struct m_option_action {char* name; int flags; } ;
struct m_config_option {char* name; TYPE_1__* opt; } ;
struct m_config {int num_opts; struct m_config_option* opts; } ;
struct bstr {int len; char* start; } ;
typedef struct bstr bstr ;
struct TYPE_2__ {struct m_option_type* type; scalar_t__ priv; } ;


 int VAR_0 ;
 struct bstr FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct bstr*,char*) ;
 scalar_t__ FUNC_2 (struct bstr,struct bstr) ;
 int FUNC_3 (struct bstr,struct bstr) ;
 struct m_config_option* FUNC_4 (struct m_config*,struct bstr) ;
 struct m_config_option* FUNC_5 (struct m_config*,struct bstr) ;
 struct m_option_type VAR_1 ;
 struct m_option_type VAR_2 ;

__attribute__((used)) static struct m_config_option *FUNC_6(struct m_config *VAR_3,
                                                        struct bstr *VAR_4,
                                                        bool *VAR_5,
                                                        int *VAR_6)
{
    *VAR_5 = 0;
    *VAR_6 = 0;

    struct m_config_option *VAR_7 = FUNC_4(VAR_3, *VAR_4);
    if (VAR_7)
        return VAR_7;


    bstr VAR_8 = *VAR_4;
    if (!VAR_7 && FUNC_1(&VAR_8, "no-")) {
        VAR_7 = FUNC_4(VAR_3, VAR_8);



        if (!VAR_7 || !(VAR_7->opt->type->flags & VAR_0))
            return ((void*)0);

        *VAR_4 = VAR_8;
        *VAR_5 = 1;
        return VAR_7;
    }


    VAR_7 = FUNC_5(VAR_3, *VAR_4);
    if (VAR_7 && VAR_7->opt->type == &VAR_2)
        *VAR_4 = FUNC_0((char *)VAR_7->opt->priv);



    for (int VAR_9 = 0; VAR_9 < VAR_3->num_opts; VAR_9++) {
        VAR_7 = &VAR_3->opts[VAR_9];
        struct bstr VAR_10 = FUNC_0(VAR_7->name);

        if (!FUNC_3(*VAR_4, VAR_10))
            continue;


        if (VAR_7->opt->type == &VAR_1)
            VAR_7 = FUNC_5(VAR_3, VAR_10);
        if (!VAR_7)
            continue;

        const struct m_option_type *VAR_11 = VAR_7->opt->type;
        for (int VAR_12 = 0; VAR_11->actions && VAR_11->actions[VAR_12].name; VAR_12++) {
            const struct m_option_action *VAR_13 = &VAR_11->actions[VAR_12];
            bstr VAR_14 = FUNC_0(VAR_13->name);

            if (FUNC_2(*VAR_4, VAR_14) &&
                (VAR_4->len == VAR_10.len + 1 + VAR_14.len) &&
                VAR_4->start[VAR_10.len] == '-')
            {
                *VAR_6 = VAR_13->flags;
                return VAR_7;
            }
        }
    }

    return ((void*)0);
}
