
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * argv; int db; } ;
typedef TYPE_1__ client ;
struct TYPE_8__ {int dirty; } ;
struct TYPE_7__ {int czero; int cone; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_3(client *VAR_2) {
    if (FUNC_1(VAR_2->db,VAR_2->argv[1])) {
        if (FUNC_2(VAR_2->db,VAR_2->argv[1])) {
            FUNC_0(VAR_2,VAR_1.cone);
            VAR_0.dirty++;
        } else {
            FUNC_0(VAR_2,VAR_1.czero);
        }
    } else {
        FUNC_0(VAR_2,VAR_1.czero);
    }
}
