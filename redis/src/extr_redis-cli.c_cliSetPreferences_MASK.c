
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hints; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(char **VAR_1, int VAR_2, int VAR_3) {
    if (!FUNC_1(VAR_1[0],":set") && VAR_2 >= 2) {
        if (!FUNC_1(VAR_1[1],"hints")) VAR_0.hints = 1;
        else if (!FUNC_1(VAR_1[1],"nohints")) VAR_0.hints = 0;
        else {
            FUNC_0("%sunknown redis-cli preference '%s'\n",
                VAR_3 ? "" : ".redisclirc: ",
                VAR_1[1]);
        }
    } else {
        FUNC_0("%sunknown redis-cli internal command '%s'\n",
            VAR_3 ? "" : ".redisclirc: ",
            VAR_1[0]);
    }
}
