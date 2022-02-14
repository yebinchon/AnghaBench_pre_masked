
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; } ;
typedef TYPE_1__ robj ;
struct TYPE_10__ {int argc; int * argv; int db; } ;
typedef TYPE_2__ client ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_1__* FUNC_3 (int ,int ) ;

void FUNC_4(client *VAR_1) {
    int VAR_2;

    FUNC_0(VAR_1,VAR_1->argc-1);
    for (VAR_2 = 1; VAR_2 < VAR_1->argc; VAR_2++) {
        robj *VAR_3 = FUNC_3(VAR_1->db,VAR_1->argv[VAR_2]);
        if (VAR_3 == ((void*)0)) {
            FUNC_2(VAR_1);
        } else {
            if (VAR_3->type != VAR_0) {
                FUNC_2(VAR_1);
            } else {
                FUNC_1(VAR_1,VAR_3);
            }
        }
    }
}
