
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
struct TYPE_15__ {size_t resp; int ** argv; TYPE_1__* cmd; TYPE_3__* db; } ;
typedef TYPE_2__ client ;
struct TYPE_18__ {int dirty; } ;
struct TYPE_17__ {int rpoplpush; int * null; } ;
struct TYPE_16__ {int id; } ;
struct TYPE_14__ {scalar_t__ proc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int ) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ) ;
 int * FUNC_7 (TYPE_3__*,int *) ;
 int * FUNC_8 (TYPE_2__*,int *,int ) ;
 int FUNC_9 (int ,char*,int *,int ) ;
 int FUNC_10 (TYPE_2__*,int,int ,int *,int *) ;
 int FUNC_11 (TYPE_2__*,int *,int *,int *) ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_12 (TYPE_3__*,int *) ;

void FUNC_13(client *VAR_7) {
    robj *VAR_8, *VAR_9;
    if ((VAR_8 = FUNC_8(VAR_7,VAR_7->argv[1],VAR_6.null[VAR_7->resp]))
        == ((void*)0) || FUNC_1(VAR_7,VAR_8,VAR_3)) return;

    if (FUNC_5(VAR_8) == 0) {


        FUNC_0(VAR_7);
    } else {
        robj *VAR_10 = FUNC_7(VAR_7->db,VAR_7->argv[2]);
        robj *VAR_11 = VAR_7->argv[1];

        if (VAR_10 && FUNC_1(VAR_7,VAR_10,VAR_3)) return;
        VAR_9 = FUNC_6(VAR_8,VAR_0);



        FUNC_4(VAR_11);
        FUNC_11(VAR_7,VAR_7->argv[2],VAR_10,VAR_9);


        FUNC_3(VAR_9);


        FUNC_9(VAR_2,"rpop",VAR_11,VAR_7->db->id);
        if (FUNC_5(VAR_8) == 0) {
            FUNC_2(VAR_7->db,VAR_11);
            FUNC_9(VAR_1,"del",
                                VAR_11,VAR_7->db->id);
        }
        FUNC_12(VAR_7->db,VAR_11);
        FUNC_3(VAR_11);
        VAR_5.dirty++;
        if (VAR_7->cmd->proc == VAR_4) {
            FUNC_10(VAR_7,3,VAR_6.rpoplpush,VAR_7->argv[1],VAR_7->argv[2]);
        }
    }
}
