
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_1__ ;
typedef struct TYPE_40__ TYPE_16__ ;
typedef struct TYPE_39__ TYPE_10__ ;


typedef int setTypeIterator ;
typedef int sds ;
struct TYPE_41__ {int encoding; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
typedef int intset ;
typedef int int64_t ;
struct TYPE_42__ {size_t resp; TYPE_8__* db; } ;
typedef TYPE_2__ client ;
struct TYPE_43__ {int id; } ;
struct TYPE_40__ {int dirty; } ;
struct TYPE_39__ {int czero; int * emptyset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 void* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (TYPE_8__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_8__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *,int ) ;
 TYPE_1__* FUNC_11 (TYPE_8__*,TYPE_1__*) ;
 TYPE_1__* FUNC_12 (TYPE_8__*,TYPE_1__*) ;
 int FUNC_13 (int ,char*,TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__**,unsigned long,int,int ) ;
 int VAR_5 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 TYPE_16__ VAR_6 ;
 int FUNC_18 (TYPE_2__*,void*,unsigned long) ;
 int FUNC_19 (TYPE_1__*,int ) ;
 int * FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*,int ) ;
 int FUNC_22 (int *,int *,int *) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (TYPE_1__*) ;
 TYPE_10__ VAR_7 ;
 int FUNC_25 (TYPE_8__*,TYPE_1__*) ;
 int FUNC_26 (TYPE_1__**) ;
 TYPE_1__** FUNC_27 (int) ;

void FUNC_28(client *VAR_8, robj **VAR_9,
                          unsigned long VAR_10, robj *VAR_11) {
    robj **VAR_12 = FUNC_27(sizeof(robj*)*VAR_10);
    setTypeIterator *VAR_13;
    robj *VAR_14 = ((void*)0);
    sds VAR_15;
    int64_t VAR_16;
    void *VAR_17 = ((void*)0);
    unsigned long VAR_18, VAR_19 = 0;
    int VAR_20;

    for (VAR_18 = 0; VAR_18 < VAR_10; VAR_18++) {
        robj *VAR_21 = VAR_11 ?
            FUNC_12(VAR_8->db,VAR_9[VAR_18]) :
            FUNC_11(VAR_8->db,VAR_9[VAR_18]);
        if (!VAR_21) {
            FUNC_26(VAR_12);
            if (VAR_11) {
                if (FUNC_8(VAR_8->db,VAR_11)) {
                    FUNC_25(VAR_8->db,VAR_11);
                    VAR_6.dirty++;
                }
                FUNC_0(VAR_8,VAR_7.czero);
            } else {
                FUNC_0(VAR_8,VAR_7.emptyset[VAR_8->resp]);
            }
            return;
        }
        if (FUNC_5(VAR_8,VAR_21,VAR_4)) {
            FUNC_26(VAR_12);
            return;
        }
        VAR_12[VAR_18] = VAR_21;
    }


    FUNC_14(VAR_12,VAR_10,sizeof(robj*),VAR_5);






    if (!VAR_11) {
        VAR_17 = FUNC_3(VAR_8);
    } else {


        VAR_14 = FUNC_6();
    }




    VAR_13 = FUNC_20(VAR_12[0]);
    while((VAR_20 = FUNC_22(VAR_13,&VAR_15,&VAR_16)) != -1) {
        for (VAR_18 = 1; VAR_18 < VAR_10; VAR_18++) {
            if (VAR_12[VAR_18] == VAR_12[0]) continue;
            if (VAR_20 == VAR_3) {

                if (VAR_12[VAR_18]->encoding == VAR_3 &&
                    !FUNC_10((intset*)VAR_12[VAR_18]->ptr,VAR_16))
                {
                    break;



                } else if (VAR_12[VAR_18]->encoding == VAR_2) {
                    VAR_15 = FUNC_16(VAR_16);
                    if (!FUNC_21(VAR_12[VAR_18],VAR_15)) {
                        FUNC_15(VAR_15);
                        break;
                    }
                    FUNC_15(VAR_15);
                }
            } else if (VAR_20 == VAR_2) {
                if (!FUNC_21(VAR_12[VAR_18],VAR_15)) {
                    break;
                }
            }
        }


        if (VAR_18 == VAR_10) {
            if (!VAR_11) {
                if (VAR_20 == VAR_2)
                    FUNC_1(VAR_8,VAR_15,FUNC_17(VAR_15));
                else
                    FUNC_2(VAR_8,VAR_16);
                VAR_19++;
            } else {
                if (VAR_20 == VAR_3) {
                    VAR_15 = FUNC_16(VAR_16);
                    FUNC_19(VAR_14,VAR_15);
                    FUNC_15(VAR_15);
                } else {
                    FUNC_19(VAR_14,VAR_15);
                }
            }
        }
    }
    FUNC_23(VAR_13);

    if (VAR_11) {


        int VAR_22 = FUNC_8(VAR_8->db,VAR_11);
        if (FUNC_24(VAR_14) > 0) {
            FUNC_7(VAR_8->db,VAR_11,VAR_14);
            FUNC_4(VAR_8,FUNC_24(VAR_14));
            FUNC_13(VAR_1,"sinterstore",
                VAR_11,VAR_8->db->id);
        } else {
            FUNC_9(VAR_14);
            FUNC_0(VAR_8,VAR_7.czero);
            if (VAR_22)
                FUNC_13(VAR_0,"del",
                    VAR_11,VAR_8->db->id);
        }
        FUNC_25(VAR_8->db,VAR_11);
        VAR_6.dirty++;
    } else {
        FUNC_18(VAR_8,VAR_17,VAR_19);
    }
    FUNC_26(VAR_12);
}
