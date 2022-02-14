
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int *** allowed_subcommands; } ;
typedef TYPE_1__ user ;
typedef int sds ;


 int VAR_0 ;
 int * FUNC_0 (char const*) ;
 int FUNC_1 (int *,char const*) ;
 int *** FUNC_2 (int) ;
 int ** FUNC_3 (int **,int) ;

void FUNC_4(user *VAR_1, unsigned long VAR_2, const char *VAR_3) {


    if (VAR_1->allowed_subcommands == ((void*)0)) {
        VAR_1->allowed_subcommands = FUNC_2(VAR_0 *
                                 sizeof(sds*));
    }





    long VAR_4 = 0;
    if (VAR_1->allowed_subcommands[VAR_2]) {
        while(VAR_1->allowed_subcommands[VAR_2][VAR_4]) {

            if (!FUNC_1(VAR_1->allowed_subcommands[VAR_2][VAR_4],VAR_3)) return;
            VAR_4++;
        }
    }


    VAR_4 += 2;
    VAR_1->allowed_subcommands[VAR_2] = FUNC_3(VAR_1->allowed_subcommands[VAR_2],
                                 sizeof(sds)*VAR_4);
    VAR_1->allowed_subcommands[VAR_2][VAR_4-2] = FUNC_0(VAR_3);
    VAR_1->allowed_subcommands[VAR_2][VAR_4-1] = ((void*)0);
}
