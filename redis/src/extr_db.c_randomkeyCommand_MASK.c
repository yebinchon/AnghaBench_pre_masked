
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int robj ;
struct TYPE_5__ {int db; } ;
typedef TYPE_1__ client ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(client *VAR_0) {
    robj *VAR_1;

    if ((VAR_1 = FUNC_2(VAR_0->db)) == ((void*)0)) {
        FUNC_1(VAR_0);
        return;
    }

    FUNC_0(VAR_0,VAR_1);
    FUNC_3(VAR_1);
}
