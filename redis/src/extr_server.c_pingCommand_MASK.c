
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int argc; int flags; int resp; int * argv; TYPE_1__* cmd; } ;
typedef TYPE_2__ client ;
struct TYPE_11__ {int pong; int * mbulkhdr; } ;
struct TYPE_9__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 TYPE_3__ VAR_1 ;

void FUNC_4(client *VAR_2) {

    if (VAR_2->argc > 2) {
        FUNC_3(VAR_2,"wrong number of arguments for '%s' command",
            VAR_2->cmd->name);
        return;
    }

    if (VAR_2->flags & VAR_0 && VAR_2->resp == 2) {
        FUNC_0(VAR_2,VAR_1.mbulkhdr[2]);
        FUNC_2(VAR_2,"pong",4);
        if (VAR_2->argc == 1)
            FUNC_2(VAR_2,"",0);
        else
            FUNC_1(VAR_2,VAR_2->argv[1]);
    } else {
        if (VAR_2->argc == 1)
            FUNC_0(VAR_2,VAR_1.pong);
        else
            FUNC_1(VAR_2,VAR_2->argv[1]);
    }
}
