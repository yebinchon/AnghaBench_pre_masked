
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int setTypeIterator ;
typedef int * sds ;
typedef int robj ;
struct TYPE_15__ {TYPE_3__* db; } ;
typedef TYPE_1__ client ;
struct TYPE_18__ {int dirty; scalar_t__ lazyfree_lazy_server_del; } ;
struct TYPE_17__ {int czero; } ;
struct TYPE_16__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (TYPE_3__*,int *,int *) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (TYPE_3__*,int *) ;
 int * FUNC_11 (TYPE_3__*,int *) ;
 int FUNC_12 (int ,char*,int *,int ) ;
 int FUNC_13 (int **,int,int,int ) ;
 int VAR_5 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 TYPE_5__ VAR_6 ;
 scalar_t__ FUNC_16 (int *,int *) ;
 int * FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *,int *) ;
 int * FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *,int *) ;
 scalar_t__ FUNC_22 (int *) ;
 TYPE_4__ VAR_7 ;
 int FUNC_23 (TYPE_3__*,int *) ;
 int FUNC_24 (int **) ;
 int ** FUNC_25 (int) ;

void FUNC_26(client *VAR_8, robj **VAR_9, int VAR_10,
                              robj *VAR_11, int VAR_12) {
    robj **VAR_13 = FUNC_25(sizeof(robj*)*VAR_10);
    setTypeIterator *VAR_14;
    robj *VAR_15 = ((void*)0);
    sds VAR_16;
    int VAR_17, VAR_18 = 0;
    int VAR_19 = 1;

    for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
        robj *VAR_20 = VAR_11 ?
            FUNC_11(VAR_8->db,VAR_9[VAR_17]) :
            FUNC_10(VAR_8->db,VAR_9[VAR_17]);
        if (!VAR_20) {
            VAR_13[VAR_17] = ((void*)0);
            continue;
        }
        if (FUNC_4(VAR_8,VAR_20,VAR_2)) {
            FUNC_24(VAR_13);
            return;
        }
        VAR_13[VAR_17] = VAR_20;
    }
    if (VAR_12 == VAR_3 && VAR_13[0]) {
        long long VAR_21 = 0, VAR_22 = 0;

        for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
            if (VAR_13[VAR_17] == ((void*)0)) continue;

            VAR_21 += FUNC_22(VAR_13[0]);
            VAR_22 += FUNC_22(VAR_13[VAR_17]);
        }



        VAR_21 /= 2;
        VAR_19 = (VAR_21 <= VAR_22) ? 1 : 2;

        if (VAR_19 == 1 && VAR_10 > 1) {



            FUNC_13(VAR_13+1,VAR_10-1,sizeof(robj*),
                VAR_5);
        }
    }




    VAR_15 = FUNC_5();

    if (VAR_12 == VAR_4) {


        for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
            if (!VAR_13[VAR_17]) continue;

            VAR_14 = FUNC_17(VAR_13[VAR_17]);
            while((VAR_16 = FUNC_19(VAR_14)) != ((void*)0)) {
                if (FUNC_16(VAR_15,VAR_16)) VAR_18++;
                FUNC_14(VAR_16);
            }
            FUNC_20(VAR_14);
        }
    } else if (VAR_12 == VAR_3 && VAR_13[0] && VAR_19 == 1) {
        VAR_14 = FUNC_17(VAR_13[0]);
        while((VAR_16 = FUNC_19(VAR_14)) != ((void*)0)) {
            for (VAR_17 = 1; VAR_17 < VAR_10; VAR_17++) {
                if (!VAR_13[VAR_17]) continue;
                if (VAR_13[VAR_17] == VAR_13[0]) break;
                if (FUNC_18(VAR_13[VAR_17],VAR_16)) break;
            }
            if (VAR_17 == VAR_10) {

                FUNC_16(VAR_15,VAR_16);
                VAR_18++;
            }
            FUNC_14(VAR_16);
        }
        FUNC_20(VAR_14);
    } else if (VAR_12 == VAR_3 && VAR_13[0] && VAR_19 == 2) {







        for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
            if (!VAR_13[VAR_17]) continue;

            VAR_14 = FUNC_17(VAR_13[VAR_17]);
            while((VAR_16 = FUNC_19(VAR_14)) != ((void*)0)) {
                if (VAR_17 == 0) {
                    if (FUNC_16(VAR_15,VAR_16)) VAR_18++;
                } else {
                    if (FUNC_21(VAR_15,VAR_16)) VAR_18--;
                }
                FUNC_14(VAR_16);
            }
            FUNC_20(VAR_14);



            if (VAR_18 == 0) break;
        }
    }


    if (!VAR_11) {
        FUNC_3(VAR_8,VAR_18);
        VAR_14 = FUNC_17(VAR_15);
        while((VAR_16 = FUNC_19(VAR_14)) != ((void*)0)) {
            FUNC_1(VAR_8,VAR_16,FUNC_15(VAR_16));
            FUNC_14(VAR_16);
        }
        FUNC_20(VAR_14);
        VAR_6.lazyfree_lazy_server_del ? FUNC_9(VAR_15) :
                                          FUNC_8(VAR_15);
    } else {


        int VAR_23 = FUNC_7(VAR_8->db,VAR_11);
        if (FUNC_22(VAR_15) > 0) {
            FUNC_6(VAR_8->db,VAR_11,VAR_15);
            FUNC_2(VAR_8,FUNC_22(VAR_15));
            FUNC_12(VAR_1,
                VAR_12 == VAR_4 ? "sunionstore" : "sdiffstore",
                VAR_11,VAR_8->db->id);
        } else {
            FUNC_8(VAR_15);
            FUNC_0(VAR_8,VAR_7.czero);
            if (VAR_23)
                FUNC_12(VAR_0,"del",
                    VAR_11,VAR_8->db->id);
        }
        FUNC_23(VAR_8->db,VAR_11);
        VAR_6.dirty++;
    }
    FUNC_24(VAR_13);
}
