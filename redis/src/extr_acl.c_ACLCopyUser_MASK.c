
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__** allowed_subcommands; int flags; int allowed_commands; void* patterns; void* passwords; } ;
typedef TYPE_1__ user ;


 int FUNC_0 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,int ,int) ;

void FUNC_5(user *VAR_1, user *VAR_2) {
    FUNC_3(VAR_1->passwords);
    FUNC_3(VAR_1->patterns);
    VAR_1->passwords = FUNC_2(VAR_2->passwords);
    VAR_1->patterns = FUNC_2(VAR_2->patterns);
    FUNC_4(VAR_1->allowed_commands,VAR_2->allowed_commands,
           sizeof(VAR_1->allowed_commands));
    VAR_1->flags = VAR_2->flags;
    FUNC_1(VAR_1);

    if (VAR_2->allowed_subcommands) {
        for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
            if (VAR_2->allowed_subcommands[VAR_3]) {
                for (int VAR_4 = 0; VAR_2->allowed_subcommands[VAR_3][VAR_4]; VAR_4++)
                {
                    FUNC_0(VAR_1, VAR_3,
                        VAR_2->allowed_subcommands[VAR_3][VAR_4]);
                }
            }
        }
    }
}
