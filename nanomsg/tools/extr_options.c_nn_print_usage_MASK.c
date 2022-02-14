
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_parse_context {char** argv; int requires; struct nn_option* options; } ;
struct nn_option {char* longname; int mask_set; int shortname; char* metavar; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (struct nn_option*) ;

__attribute__((used)) static void FUNC_2 (struct nn_parse_context *VAR_0, FILE *VAR_1)
{
    int VAR_2;
    int VAR_3;
    struct nn_option *VAR_4;

    FUNC_0 (VAR_1, "    %s ", VAR_0->argv[0]);


    VAR_3 = 1;
    for (VAR_2 = 0;; ++VAR_2) {
        VAR_4 = &VAR_0->options[VAR_2];
        if (!VAR_4->longname)
            break;
        if (VAR_4->mask_set & VAR_0->requires) {
            if (VAR_3) {
                VAR_3 = 0;
                FUNC_0 (VAR_1, "{--%s", VAR_4->longname);
            } else {
                FUNC_0 (VAR_1, "|--%s", VAR_4->longname);
            }
        }
    }
    if (!VAR_3) {
        FUNC_0 (VAR_1, "} ");
    }


    VAR_3 = 1;
    for (VAR_2 = 0;; ++VAR_2) {
        VAR_4 = &VAR_0->options[VAR_2];
        if (!VAR_4->longname)
            break;
        if (VAR_4->mask_set & VAR_0->requires)
            continue;
        if (VAR_4->shortname && !FUNC_1 (VAR_4)) {
            if (VAR_3) {
                VAR_3 = 0;
                FUNC_0 (VAR_1, "[-%c", VAR_4->shortname);
            } else {
                FUNC_0 (VAR_1, "%c", VAR_4->shortname);
            }
        }
    }
    if (!VAR_3) {
        FUNC_0 (VAR_1, "] ");
    }


    for (VAR_2 = 0;; ++VAR_2) {
        VAR_4 = &VAR_0->options[VAR_2];
        if (!VAR_4->longname)
            break;
        if (VAR_4->mask_set & VAR_0->requires)
            continue;
        if (VAR_4->shortname && FUNC_1 (VAR_4) && VAR_4->metavar) {
            FUNC_0 (VAR_1, "[-%c %s] ", VAR_4->shortname, VAR_4->metavar);
        }
    }

    FUNC_0 (VAR_1, "[options] \n");
}
