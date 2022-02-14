
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int robj ;
struct TYPE_14__ {int argc; TYPE_2__* db; TYPE_3__** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_18__ {int dirty; } ;
struct TYPE_17__ {int czero; } ;
struct TYPE_16__ {int ptr; } ;
struct TYPE_15__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*,TYPE_3__*,int ) ;
 int FUNC_6 (int ,char*,TYPE_3__*,int ) ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*) ;

void FUNC_8(client *VAR_5) {
    robj *VAR_6;
    int VAR_7, VAR_8 = 0, VAR_9 = 0;

    if ((VAR_6 = FUNC_5(VAR_5,VAR_5->argv[1],VAR_4.czero)) == ((void*)0) ||
        FUNC_1(VAR_5,VAR_6,VAR_2)) return;

    for (VAR_7 = 2; VAR_7 < VAR_5->argc; VAR_7++) {
        if (FUNC_3(VAR_6,VAR_5->argv[VAR_7]->ptr)) {
            VAR_8++;
            if (FUNC_4(VAR_6) == 0) {
                FUNC_2(VAR_5->db,VAR_5->argv[1]);
                VAR_9 = 1;
                break;
            }
        }
    }
    if (VAR_8) {
        FUNC_7(VAR_5->db,VAR_5->argv[1]);
        FUNC_6(VAR_1,"hdel",VAR_5->argv[1],VAR_5->db->id);
        if (VAR_9)
            FUNC_6(VAR_0,"del",VAR_5->argv[1],
                                VAR_5->db->id);
        VAR_3.dirty += VAR_8;
    }
    FUNC_0(VAR_5,VAR_8);
}
