
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_parse_context {int mask; int requires; char** argv; int * last_option_usage; struct nn_option* options; } ;
struct nn_option {int requires_mask; int longname; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct nn_parse_context*,int) ;
 int FUNC_3 (struct nn_parse_context*,int) ;
 int VAR_0 ;

void FUNC_4 (struct nn_parse_context *VAR_1) {
    int VAR_2;
    struct nn_option *VAR_3;

    for (VAR_2 = 0;; ++VAR_2) {
        VAR_3 = &VAR_1->options[VAR_2];
        if (!VAR_3->longname)
            break;
        if (!VAR_1->last_option_usage[VAR_2])
            continue;
        if (VAR_3->requires_mask &&
            (VAR_3->requires_mask & VAR_1->mask) != VAR_3->requires_mask) {
            FUNC_2 (VAR_1, VAR_2);
        }
    }

    if ((VAR_1->requires & VAR_1->mask) != VAR_1->requires) {
        FUNC_1 (VAR_0, "%s: At least one of the following required:\n",
            VAR_1->argv[0]);
        FUNC_3 (VAR_1, VAR_1->requires & ~VAR_1->mask);
        FUNC_0 (1);
    }
}
