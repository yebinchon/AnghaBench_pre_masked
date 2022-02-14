
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ numslots; int flags; int port; int ip; struct TYPE_9__* slaveof; } ;
typedef TYPE_1__ clusterNode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

void FUNC_7(clusterNode *VAR_4) {
    FUNC_6(VAR_4 != VAR_3);
    FUNC_6(VAR_3->numslots == 0);

    if (FUNC_3(VAR_3)) {
        VAR_3->flags &= ~(VAR_0|VAR_1);
        VAR_3->flags |= VAR_2;
        FUNC_0();
    } else {
        if (VAR_3->slaveof)
            FUNC_2(VAR_3->slaveof,VAR_3);
    }
    VAR_3->slaveof = VAR_4;
    FUNC_1(VAR_4,VAR_3);
    FUNC_4(VAR_4->ip, VAR_4->port);
    FUNC_5();
}
