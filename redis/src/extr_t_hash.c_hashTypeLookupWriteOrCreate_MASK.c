
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ type; } ;
typedef TYPE_1__ robj ;
struct TYPE_14__ {int db; } ;
typedef TYPE_2__ client ;
struct TYPE_15__ {int wrongtypeerr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,TYPE_1__*) ;
 TYPE_3__ VAR_1 ;

robj *FUNC_4(client *VAR_2, robj *VAR_3) {
    robj *VAR_4 = FUNC_3(VAR_2->db,VAR_3);
    if (VAR_4 == ((void*)0)) {
        VAR_4 = FUNC_1();
        FUNC_2(VAR_2->db,VAR_3,VAR_4);
    } else {
        if (VAR_4->type != VAR_0) {
            FUNC_0(VAR_2,VAR_1.wrongtypeerr);
            return ((void*)0);
        }
    }
    return VAR_4;
}
