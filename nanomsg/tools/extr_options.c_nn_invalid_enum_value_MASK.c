
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_parse_context {char** argv; struct nn_option* options; } ;
struct nn_option {scalar_t__ pointer; } ;
struct nn_enum_item {char* name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct nn_parse_context*,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3 (struct nn_parse_context *VAR_1,
    int VAR_2, char *VAR_3)
{
    struct nn_option *VAR_4;
    struct nn_enum_item *VAR_5;

    VAR_4 = &VAR_1->options[VAR_2];
    VAR_5 = (struct nn_enum_item *)VAR_4->pointer;
    FUNC_1 (VAR_0, "%s: Invalid value ``%s'' for", VAR_1->argv[0], VAR_3);
    FUNC_2 (VAR_1, VAR_2, VAR_0);
    FUNC_1 (VAR_0, ". Options are:\n");
    for (;VAR_5->name; ++VAR_5) {
        FUNC_1 (VAR_0, "    %s\n", VAR_5->name);
    }
    FUNC_0 (1);
}
