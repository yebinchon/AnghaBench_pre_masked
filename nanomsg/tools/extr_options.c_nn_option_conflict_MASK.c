
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_parse_context {char** argv; scalar_t__* last_option_usage; struct nn_option* options; } ;
struct nn_option {unsigned long conflicts_mask; unsigned long mask_set; int longname; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct nn_parse_context*,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3 (struct nn_parse_context *VAR_1,
                              int VAR_2)
{
    unsigned long VAR_3;
    int VAR_4;
    int VAR_5;
    struct nn_option *VAR_6;

    FUNC_1 (VAR_0, "%s: Option", VAR_1->argv[0]);
    FUNC_2 (VAR_1, VAR_2, VAR_0);
    FUNC_1 (VAR_0, "conflicts with the following options:\n");

    VAR_3 = VAR_1->options[VAR_2].conflicts_mask;
    VAR_5 = 0;
    for (VAR_4 = 0;; ++VAR_4) {
        VAR_6 = &VAR_1->options[VAR_4];
        if (!VAR_6->longname)
            break;
        if (VAR_4 == VAR_2)
            continue;
        if (VAR_1->last_option_usage[VAR_4] && VAR_6->mask_set & VAR_3) {
            VAR_5 += 1;
            FUNC_1 (VAR_0, "   ");
            FUNC_2 (VAR_1, VAR_4, VAR_0);
            FUNC_1 (VAR_0, "\n");
        }
    }
    if (!VAR_5) {
        FUNC_1 (VAR_0, "   ");
        FUNC_2 (VAR_1, VAR_2, VAR_0);
        FUNC_1 (VAR_0, "\n");
    }
    FUNC_0 (1);
}
