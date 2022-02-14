
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__** allowed_subcommands; } ;
typedef TYPE_1__ user ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;

void FUNC_2(user *VAR_0, unsigned long VAR_1) {
    if (VAR_0->allowed_subcommands && VAR_0->allowed_subcommands[VAR_1]) {
        for (int VAR_2 = 0; VAR_0->allowed_subcommands[VAR_1][VAR_2]; VAR_2++)
            FUNC_0(VAR_0->allowed_subcommands[VAR_1][VAR_2]);
        FUNC_1(VAR_0->allowed_subcommands[VAR_1]);
        VAR_0->allowed_subcommands[VAR_1] = ((void*)0);
    }
}
