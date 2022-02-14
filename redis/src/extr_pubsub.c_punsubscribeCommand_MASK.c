
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int argc; int flags; int * argv; } ;
typedef TYPE_1__ client ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void FUNC_3(client *VAR_1) {
    if (VAR_1->argc == 1) {
        FUNC_1(VAR_1,1);
    } else {
        int VAR_2;

        for (VAR_2 = 1; VAR_2 < VAR_1->argc; VAR_2++)
            FUNC_2(VAR_1,VAR_1->argv[VAR_2],1);
    }
    if (FUNC_0(VAR_1) == 0) VAR_1->flags &= ~VAR_0;
}
