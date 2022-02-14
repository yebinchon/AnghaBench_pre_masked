
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_parse_context {scalar_t__* data; scalar_t__** last_option_usage; struct nn_option* options; } ;
struct nn_option {scalar_t__ shortname; int longname; } ;


 int FUNC_0 (struct nn_parse_context*) ;
 scalar_t__ FUNC_1 (struct nn_parse_context*) ;
 scalar_t__ FUNC_2 (struct nn_option*) ;
 int FUNC_3 (char*,struct nn_parse_context*,int) ;
 int FUNC_4 (struct nn_parse_context*,int,scalar_t__*) ;

__attribute__((used)) static void FUNC_5 (struct nn_parse_context *VAR_0)
{
    int VAR_1;
    struct nn_option *VAR_2;

    for (VAR_1 = 0;; ++VAR_1) {
        VAR_2 = &VAR_0->options[VAR_1];
        if (!VAR_2->longname)
            break;
        if (!VAR_2->shortname)
            continue;
        if (VAR_2->shortname == *VAR_0->data) {
            VAR_0->last_option_usage[VAR_1] = VAR_0->data;
            if (FUNC_2 (VAR_2)) {
                if (VAR_0->data[1]) {
                    FUNC_4 (VAR_0, VAR_1, VAR_0->data+1);
                } else {
                    if (FUNC_1 (VAR_0)) {
                        FUNC_4 (VAR_0, VAR_1, VAR_0->data);
                    } else {
                        FUNC_3 ("requires an argument", VAR_0, VAR_1);
                    }
                }
                VAR_0->data = "";
            } else {
                FUNC_4 (VAR_0, VAR_1, ((void*)0));
                VAR_0->data += 1;
            }
            return;
        }
    }
    FUNC_0 (VAR_0);
}
