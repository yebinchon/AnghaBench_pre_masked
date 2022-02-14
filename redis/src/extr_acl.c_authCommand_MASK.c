
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int robj ;
struct TYPE_8__ {int argc; int ** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {int ok; int syntaxerr; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *,int *) ;
 scalar_t__ VAR_0 ;
 TYPE_6__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int * FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 TYPE_2__ VAR_3 ;

void FUNC_5(client *VAR_4) {

    if (VAR_4->argc > 3) {
        FUNC_1(VAR_4,VAR_3.syntaxerr);
        return;
    }



    robj *VAR_5, *VAR_6;
    if (VAR_4->argc == 2) {


        if (VAR_1->flags & VAR_2) {
            FUNC_2(VAR_4,"AUTH <password> called without any password "
                            "configured for the default user. Are you sure "
                            "your configuration is correct?");
            return;
        }

        VAR_5 = FUNC_3("default",7);
        VAR_6 = VAR_4->argv[1];
    } else {
        VAR_5 = VAR_4->argv[1];
        VAR_6 = VAR_4->argv[2];
    }

    if (FUNC_0(VAR_4,VAR_5,VAR_6) == VAR_0) {
        FUNC_1(VAR_4,VAR_3.ok);
    } else {
        FUNC_2(VAR_4,"-WRONGPASS invalid username-password pair");
    }



    if (VAR_4->argc == 2) FUNC_4(VAR_5);
}
