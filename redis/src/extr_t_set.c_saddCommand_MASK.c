
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ type; } ;
typedef TYPE_1__ robj ;
struct TYPE_20__ {int argc; TYPE_3__* db; TYPE_4__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_24__ {int dirty; } ;
struct TYPE_23__ {int wrongtypeerr; } ;
struct TYPE_22__ {int ptr; } ;
struct TYPE_21__ {int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (int ,char*,TYPE_4__*,int ) ;
 TYPE_8__ VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 TYPE_5__ VAR_3 ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*) ;

void FUNC_8(client *VAR_4) {
    robj *VAR_5;
    int VAR_6, VAR_7 = 0;

    VAR_5 = FUNC_3(VAR_4->db,VAR_4->argv[1]);
    if (VAR_5 == ((void*)0)) {
        VAR_5 = FUNC_6(VAR_4->argv[2]->ptr);
        FUNC_2(VAR_4->db,VAR_4->argv[1],VAR_5);
    } else {
        if (VAR_5->type != VAR_1) {
            FUNC_0(VAR_4,VAR_3.wrongtypeerr);
            return;
        }
    }

    for (VAR_6 = 2; VAR_6 < VAR_4->argc; VAR_6++) {
        if (FUNC_5(VAR_5,VAR_4->argv[VAR_6]->ptr)) VAR_7++;
    }
    if (VAR_7) {
        FUNC_7(VAR_4->db,VAR_4->argv[1]);
        FUNC_4(VAR_0,"sadd",VAR_4->argv[1],VAR_4->db->id);
    }
    VAR_2.dirty += VAR_7;
    FUNC_1(VAR_4,VAR_7);
}
