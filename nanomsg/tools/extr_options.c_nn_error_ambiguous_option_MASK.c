
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_parse_context {char* data; char** argv; struct nn_option* options; } ;
struct nn_option {char* longname; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2 (struct nn_parse_context *VAR_1)
{
    struct nn_option *VAR_2;
    char *VAR_3, *VAR_4;
    char *VAR_5;

    VAR_5 = VAR_1->data+2;
    FUNC_1 (VAR_0, "%s: Ambiguous option ``%s'':\n", VAR_1->argv[0], VAR_1->data);
    for (VAR_2 = VAR_1->options; VAR_2->longname; ++VAR_2) {
        for (VAR_3 = VAR_2->longname, VAR_4 = VAR_5; ; ++VAR_3, ++VAR_4) {
            if (*VAR_4 == 0 || *VAR_4 == '=') {
                FUNC_1 (VAR_0, "    %s\n", VAR_2->longname);
                break;
            } else if (*VAR_4 != *VAR_3) {
                break;
            }
        }
    }
    FUNC_0 (1);
}
