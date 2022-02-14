
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_parse_context {struct nn_option* options; TYPE_1__* def; } ;
struct nn_option {char* longname; char* group; int shortname; char* metavar; char* description; } ;
struct TYPE_2__ {char* short_description; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (struct nn_option*) ;
 char* FUNC_3 (int *,char*,int) ;
 int FUNC_4 (struct nn_parse_context*,int *) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7 (struct nn_parse_context *VAR_0, FILE *VAR_1)
{
    int VAR_2;
    size_t VAR_3;
    struct nn_option *VAR_4;
    char *VAR_5;
    char *VAR_6;

    FUNC_0 (VAR_1, "Usage:\n");
    FUNC_4 (VAR_0, VAR_1);
    FUNC_0 (VAR_1, "\n%s\n", VAR_0->def->short_description);

    VAR_5 = ((void*)0);
    for (VAR_2 = 0;; ++VAR_2) {
        VAR_4 = &VAR_0->options[VAR_2];
        if (!VAR_4->longname)
            break;
        if (!VAR_5 || VAR_5 != VAR_4->group ||
            FUNC_5 (VAR_5, VAR_4->group))
        {
            FUNC_0 (VAR_1, "\n");
            FUNC_0 (VAR_1, "%s:\n", VAR_4->group);
            VAR_5 = VAR_4->group;
        }
        FUNC_0 (VAR_1, " --%s", VAR_4->longname);
        VAR_3 = 3 + FUNC_6 (VAR_4->longname);
        if (VAR_4->shortname) {
            FUNC_0 (VAR_1, ",-%c", VAR_4->shortname);
            VAR_3 += 3;
        }
        if (FUNC_2 (VAR_4)) {
            if (VAR_4->metavar) {
                FUNC_0 (VAR_1, " %s", VAR_4->metavar);
                VAR_3 += FUNC_6 (VAR_4->metavar) + 1;
            } else {
                FUNC_0 (VAR_1, " ARG");
                VAR_3 += 4;
            }
        }
        if (VAR_3 < 23) {
            FUNC_1 (&"                        "[VAR_3], VAR_1);
            VAR_6 = FUNC_3 (VAR_1, VAR_4->description, 80-24);
        } else {
            VAR_6 = VAR_4->description;
        }
        while (*VAR_6) {
            FUNC_0 (VAR_1, "\n                        ");
            VAR_6 = FUNC_3 (VAR_1, VAR_6, 80-24);
        }
        FUNC_0 (VAR_1, "\n");
    }
}
