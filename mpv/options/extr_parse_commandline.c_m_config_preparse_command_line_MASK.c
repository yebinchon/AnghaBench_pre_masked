
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct parse_state {char** member_1; int arg; int param; scalar_t__ is_opt; TYPE_2__* member_0; } ;
struct mpv_global {int dummy; } ;
struct TYPE_6__ {int num_opts; TYPE_1__* opts; } ;
typedef TYPE_2__ m_config_t ;
struct TYPE_5__ {int warning_was_printed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int) ;
 scalar_t__ FUNC_2 (struct parse_state*) ;

void FUNC_3(m_config_t *VAR_2, struct mpv_global *VAR_3,
                                    int *VAR_4, char **VAR_5)
{
    struct parse_state VAR_6 = {VAR_2, VAR_5};
    while (FUNC_2(&VAR_6) == 0) {
        if (VAR_6.is_opt) {


            int VAR_7 = VAR_0 | VAR_1;
            FUNC_1(VAR_2, VAR_6.arg, VAR_6.param, VAR_7);
            if (FUNC_0(VAR_6.arg, "v") == 0)
                (*VAR_4)++;
        }
    }

    for (int VAR_8 = 0; VAR_8 < VAR_2->num_opts; VAR_8++)
        VAR_2->opts[VAR_8].warning_was_printed = 0;
}
