
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


struct TYPE_29__ {scalar_t__ type; } ;
typedef TYPE_1__ robj ;
typedef int mstime_t ;
struct TYPE_30__ {int argc; int flags; TYPE_1__** argv; TYPE_3__* db; } ;
typedef TYPE_2__ client ;
struct TYPE_33__ {int dirty; } ;
struct TYPE_32__ {int rpop; int lpop; int wrongtypeerr; } ;
struct TYPE_31__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,TYPE_1__**,int,int ,int *,int *) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_10 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_11 (int ,char*,TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_2__*,int,int ,TYPE_1__*) ;
 TYPE_6__ VAR_8 ;
 int FUNC_13 (int ) ;
 TYPE_5__ VAR_9 ;
 int FUNC_14 (TYPE_3__*,TYPE_1__*) ;

void FUNC_15(client *VAR_10, int VAR_11) {
    robj *VAR_12;
    mstime_t VAR_13;
    int VAR_14;

    if (FUNC_7(VAR_10,VAR_10->argv[VAR_10->argc-1],&VAR_13,VAR_7)
        != VAR_2) return;

    for (VAR_14 = 1; VAR_14 < VAR_10->argc-1; VAR_14++) {
        VAR_12 = FUNC_10(VAR_10->db,VAR_10->argv[VAR_14]);
        if (VAR_12 != ((void*)0)) {
            if (VAR_12->type != VAR_6) {
                FUNC_0(VAR_10,VAR_9.wrongtypeerr);
                return;
            } else {
                if (FUNC_8(VAR_12) != 0) {

                    char *VAR_15 = (VAR_11 == VAR_3) ? "lpop" : "rpop";
                    robj *VAR_16 = FUNC_9(VAR_12,VAR_11);
                    FUNC_13(VAR_16 != ((void*)0));

                    FUNC_1(VAR_10,2);
                    FUNC_2(VAR_10,VAR_10->argv[VAR_14]);
                    FUNC_2(VAR_10,VAR_16);
                    FUNC_6(VAR_16);
                    FUNC_11(VAR_5,VAR_15,
                                        VAR_10->argv[VAR_14],VAR_10->db->id);
                    if (FUNC_8(VAR_12) == 0) {
                        FUNC_5(VAR_10->db,VAR_10->argv[VAR_14]);
                        FUNC_11(VAR_4,"del",
                                            VAR_10->argv[VAR_14],VAR_10->db->id);
                    }
                    FUNC_14(VAR_10->db,VAR_10->argv[VAR_14]);
                    VAR_8.dirty++;


                    FUNC_12(VAR_10,2,
                        (VAR_11 == VAR_3) ? VAR_9.lpop : VAR_9.rpop,
                        VAR_10->argv[VAR_14]);
                    return;
                }
            }
        }
    }



    if (VAR_10->flags & VAR_1) {
        FUNC_3(VAR_10);
        return;
    }


    FUNC_4(VAR_10,VAR_0,VAR_10->argv + 1,VAR_10->argc - 2,VAR_13,((void*)0),((void*)0));
}
