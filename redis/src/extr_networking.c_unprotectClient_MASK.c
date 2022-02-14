
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int conn; } ;
typedef TYPE_1__ client ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

void FUNC_3(client *VAR_2) {
    if (VAR_2->flags & VAR_0) {
        VAR_2->flags &= ~VAR_0;
        FUNC_2(VAR_2->conn,VAR_1);
        if (FUNC_0(VAR_2)) FUNC_1(VAR_2);
    }
}
