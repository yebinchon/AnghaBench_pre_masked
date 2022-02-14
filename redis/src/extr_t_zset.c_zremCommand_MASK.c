
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_20__ {int argc; TYPE_6__* db; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_23__ {int dirty; } ;
struct TYPE_22__ {int czero; } ;
struct TYPE_21__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_6__*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_4 (int ,char*,TYPE_1__*,int ) ;
 TYPE_9__ VAR_3 ;
 TYPE_8__ VAR_4 ;
 int FUNC_5 (TYPE_6__*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

void FUNC_8(client *VAR_5) {
    robj *VAR_6 = VAR_5->argv[1];
    robj *VAR_7;
    int VAR_8 = 0, VAR_9 = 0, VAR_10;

    if ((VAR_7 = FUNC_3(VAR_5,VAR_6,VAR_4.czero)) == ((void*)0) ||
        FUNC_1(VAR_5,VAR_7,VAR_2)) return;

    for (VAR_10 = 2; VAR_10 < VAR_5->argc; VAR_10++) {
        if (FUNC_6(VAR_7,VAR_5->argv[VAR_10]->ptr)) VAR_8++;
        if (FUNC_7(VAR_7) == 0) {
            FUNC_2(VAR_5->db,VAR_6);
            VAR_9 = 1;
            break;
        }
    }

    if (VAR_8) {
        FUNC_4(VAR_1,"zrem",VAR_6,VAR_5->db->id);
        if (VAR_9)
            FUNC_4(VAR_0,"del",VAR_6,VAR_5->db->id);
        FUNC_5(VAR_5->db,VAR_6);
        VAR_3.dirty += VAR_8;
    }
    FUNC_0(VAR_5,VAR_8);
}
