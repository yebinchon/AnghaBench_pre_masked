
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int robj ;
struct TYPE_11__ {size_t resp; int * argv; TYPE_2__* db; } ;
typedef TYPE_1__ client ;
struct TYPE_14__ {int dirty; } ;
struct TYPE_13__ {int * null; } ;
struct TYPE_12__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,int) ;
 int * FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (int ,char*,int ,int ) ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_9 (TYPE_2__*,int ) ;

void FUNC_10(client *VAR_6, int VAR_7) {
    robj *VAR_8 = FUNC_7(VAR_6,VAR_6->argv[1],VAR_5.null[VAR_6->resp]);
    if (VAR_8 == ((void*)0) || FUNC_2(VAR_6,VAR_8,VAR_3)) return;

    robj *VAR_9 = FUNC_6(VAR_8,VAR_7);
    if (VAR_9 == ((void*)0)) {
        FUNC_1(VAR_6);
    } else {
        char *VAR_10 = (VAR_7 == VAR_0) ? "lpop" : "rpop";

        FUNC_0(VAR_6,VAR_9);
        FUNC_4(VAR_9);
        FUNC_8(VAR_2,VAR_10,VAR_6->argv[1],VAR_6->db->id);
        if (FUNC_5(VAR_8) == 0) {
            FUNC_8(VAR_1,"del",
                                VAR_6->argv[1],VAR_6->db->id);
            FUNC_3(VAR_6->db,VAR_6->argv[1]);
        }
        FUNC_9(VAR_6->db,VAR_6->argv[1]);
        VAR_4.dirty++;
    }
}
