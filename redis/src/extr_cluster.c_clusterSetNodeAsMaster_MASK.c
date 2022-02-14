
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * slaveof; int flags; } ;
typedef TYPE_1__ clusterNode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

void FUNC_3(clusterNode *VAR_6) {
    if (FUNC_2(VAR_6)) return;

    if (VAR_6->slaveof) {
        FUNC_1(VAR_6->slaveof,VAR_6);
        if (VAR_6 != VAR_5) VAR_6->flags |= VAR_1;
    }
    VAR_6->flags &= ~VAR_2;
    VAR_6->flags |= VAR_0;
    VAR_6->slaveof = ((void*)0);


    FUNC_0(VAR_3|
                         VAR_4);
}
