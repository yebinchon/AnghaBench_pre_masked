
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_12__ ;


struct TYPE_26__ {int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_27__ {TYPE_4__* db; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_29__ {int cone; int czero; } ;
struct TYPE_28__ {int id; } ;
struct TYPE_25__ {int dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_5 (int ,char*,TYPE_1__*,int ) ;
 TYPE_12__ VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 TYPE_6__ VAR_4 ;
 int FUNC_11 (TYPE_4__*,TYPE_1__*) ;

void FUNC_12(client *VAR_5) {
    robj *VAR_6, *VAR_7, *VAR_8;
    VAR_6 = FUNC_4(VAR_5->db,VAR_5->argv[1]);
    VAR_7 = FUNC_4(VAR_5->db,VAR_5->argv[2]);
    VAR_8 = VAR_5->argv[3];


    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_5,VAR_4.czero);
        return;
    }



    if (FUNC_1(VAR_5,VAR_6,VAR_2) ||
        (VAR_7 && FUNC_1(VAR_5,VAR_7,VAR_2))) return;


    if (VAR_6 == VAR_7) {
        FUNC_0(VAR_5,FUNC_8(VAR_6,VAR_8->ptr) ?
            VAR_4.cone : VAR_4.czero);
        return;
    }


    if (!FUNC_9(VAR_6,VAR_8->ptr)) {
        FUNC_0(VAR_5,VAR_4.czero);
        return;
    }
    FUNC_5(VAR_1,"srem",VAR_5->argv[1],VAR_5->db->id);


    if (FUNC_10(VAR_6) == 0) {
        FUNC_3(VAR_5->db,VAR_5->argv[1]);
        FUNC_5(VAR_0,"del",VAR_5->argv[1],VAR_5->db->id);
    }


    if (!VAR_7) {
        VAR_7 = FUNC_7(VAR_8->ptr);
        FUNC_2(VAR_5->db,VAR_5->argv[2],VAR_7);
    }

    FUNC_11(VAR_5->db,VAR_5->argv[1]);
    FUNC_11(VAR_5->db,VAR_5->argv[2]);
    VAR_3.dirty++;


    if (FUNC_6(VAR_7,VAR_8->ptr)) {
        VAR_3.dirty++;
        FUNC_5(VAR_1,"sadd",VAR_5->argv[2],VAR_5->db->id);
    }
    FUNC_0(VAR_5,VAR_4.cone);
}
