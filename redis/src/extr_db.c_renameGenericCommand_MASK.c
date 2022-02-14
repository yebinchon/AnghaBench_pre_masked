
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int robj ;
struct TYPE_22__ {TYPE_2__* db; TYPE_3__** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_26__ {int dirty; } ;
struct TYPE_25__ {int ok; int cone; int czero; int nokeyerr; } ;
struct TYPE_24__ {int ptr; } ;
struct TYPE_23__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 long long FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int * FUNC_7 (TYPE_1__*,TYPE_3__*,int ) ;
 int FUNC_8 (int ,char*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 TYPE_8__ VAR_1 ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*,TYPE_3__*,long long) ;
 TYPE_4__ VAR_2 ;
 int FUNC_11 (TYPE_2__*,TYPE_3__*) ;

void FUNC_12(client *VAR_3, int VAR_4) {
    robj *VAR_5;
    long long VAR_6;
    int VAR_7 = 0;



    if (FUNC_9(VAR_3->argv[1]->ptr,VAR_3->argv[2]->ptr) == 0) VAR_7 = 1;

    if ((VAR_5 = FUNC_7(VAR_3,VAR_3->argv[1],VAR_2.nokeyerr)) == ((void*)0))
        return;

    if (VAR_7) {
        FUNC_0(VAR_3,VAR_4 ? VAR_2.czero : VAR_2.ok);
        return;
    }

    FUNC_5(VAR_5);
    VAR_6 = FUNC_4(VAR_3->db,VAR_3->argv[1]);
    if (FUNC_6(VAR_3->db,VAR_3->argv[2]) != ((void*)0)) {
        if (VAR_4) {
            FUNC_3(VAR_5);
            FUNC_0(VAR_3,VAR_2.czero);
            return;
        }


        FUNC_2(VAR_3->db,VAR_3->argv[2]);
    }
    FUNC_1(VAR_3->db,VAR_3->argv[2],VAR_5);
    if (VAR_6 != -1) FUNC_10(VAR_3,VAR_3->db,VAR_3->argv[2],VAR_6);
    FUNC_2(VAR_3->db,VAR_3->argv[1]);
    FUNC_11(VAR_3->db,VAR_3->argv[1]);
    FUNC_11(VAR_3->db,VAR_3->argv[2]);
    FUNC_8(VAR_0,"rename_from",
        VAR_3->argv[1],VAR_3->db->id);
    FUNC_8(VAR_0,"rename_to",
        VAR_3->argv[2],VAR_3->db->id);
    VAR_1.dirty++;
    FUNC_0(VAR_3,VAR_4 ? VAR_2.cone : VAR_2.ok);
}
