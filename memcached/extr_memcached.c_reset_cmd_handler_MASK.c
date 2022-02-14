
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cmd; scalar_t__ rbytes; int * item; int substate; } ;
typedef TYPE_1__ conn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(conn *VAR_3) {
    VAR_3->cmd = -1;
    VAR_3->substate = VAR_0;
    if(VAR_3->item != ((void*)0)) {
        FUNC_2(VAR_3->item);
        VAR_3->item = ((void*)0);
    }
    FUNC_1(VAR_3);
    if (VAR_3->rbytes > 0) {
        FUNC_0(VAR_3, VAR_1);
    } else {
        FUNC_0(VAR_3, VAR_2);
    }
}
