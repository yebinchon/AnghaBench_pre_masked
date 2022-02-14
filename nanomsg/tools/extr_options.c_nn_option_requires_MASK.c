
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_parse_context {char** argv; TYPE_1__* options; } ;
struct TYPE_2__ {int requires_mask; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct nn_parse_context*,int,int ) ;
 int FUNC_3 (struct nn_parse_context*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4 (struct nn_parse_context *VAR_1, int VAR_2) {
    FUNC_1 (VAR_0, "%s: Option", VAR_1->argv[0]);
    FUNC_2 (VAR_1, VAR_2, VAR_0);
    FUNC_1 (VAR_0, "requires at least one of the following options:\n");

    FUNC_3 (VAR_1, VAR_1->options[VAR_2].requires_mask);
    FUNC_0 (1);
}
