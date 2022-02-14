
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_parse_context {int argc; char** argv; int args_left; char** arg; int last_option_usage; scalar_t__ mask; TYPE_1__* options; int requires; void* target; struct nn_commandline* def; } ;
struct nn_commandline {int required_options; TYPE_1__* options; } ;
struct TYPE_2__ {scalar_t__ longname; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nn_parse_context*) ;
 scalar_t__ FUNC_3 (struct nn_parse_context*) ;
 int FUNC_4 (struct nn_parse_context*) ;
 int FUNC_5 (struct nn_parse_context*) ;
 int FUNC_6 (struct nn_parse_context*) ;

void FUNC_7 (struct nn_commandline *VAR_0,
    void *VAR_1, int VAR_2, char **VAR_3)
{
    struct nn_parse_context VAR_4;
    int VAR_5;

    VAR_4.def = VAR_0;
    VAR_4.options = VAR_0->options;
    VAR_4.target = VAR_1;
    VAR_4.argc = VAR_2;
    VAR_4.argv = VAR_3;
    VAR_4.requires = VAR_0->required_options;

    for (VAR_5 = 0; VAR_4.options[VAR_5].longname; ++VAR_5);
    VAR_4.last_option_usage = FUNC_0 (sizeof (char *), VAR_5);
    if (!VAR_4.last_option_usage)
        FUNC_4 (&VAR_4);

    VAR_4.mask = 0;
    VAR_4.args_left = VAR_2 - 1;
    VAR_4.arg = VAR_3;

    FUNC_6 (&VAR_4);

    while (FUNC_3 (&VAR_4)) {
        FUNC_5 (&VAR_4);
    }

    FUNC_2 (&VAR_4);

    FUNC_1 (VAR_4.last_option_usage);

}
