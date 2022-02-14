
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_1__ ;
typedef struct TYPE_40__ TYPE_15__ ;


typedef int setTypeIterator ;
typedef char* sds ;
struct TYPE_41__ {int ptr; } ;
typedef TYPE_1__ robj ;
typedef int int64_t ;
struct TYPE_42__ {size_t resp; TYPE_1__** argv; TYPE_6__* db; } ;
typedef TYPE_2__ client ;
struct TYPE_44__ {int del; int * emptyset; int * null; int outofrangeerr; } ;
struct TYPE_43__ {int id; } ;
struct TYPE_40__ {scalar_t__ dirty; int sremCommand; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,unsigned long) ;
 int FUNC_4 (int ,int ,TYPE_1__**,int,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_6 (char*,int) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_6__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_6__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,TYPE_1__*,long*,int *) ;
 int FUNC_12 (int ,int ,int *) ;
 TYPE_1__* FUNC_13 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_14 (int ,char*,TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int,int ,TYPE_1__*) ;
 char* FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 char* FUNC_19 (int ) ;
 int FUNC_20 (char*) ;
 TYPE_15__ VAR_9 ;
 int FUNC_21 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_22 (char*) ;
 int * FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (int *,char**,int *) ;
 int FUNC_25 (TYPE_1__*,char**,int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (TYPE_1__*,char*) ;
 unsigned long FUNC_28 (TYPE_1__*) ;
 TYPE_8__ VAR_10 ;
 int FUNC_29 (TYPE_6__*,TYPE_1__*) ;
 int FUNC_30 (TYPE_2__*,TYPE_1__**,int,int *,int ) ;

void FUNC_31(client *VAR_11) {
    long VAR_12;
    unsigned long VAR_13, VAR_14;
    robj *VAR_15;


    if (FUNC_11(VAR_11,VAR_11->argv[2],&VAR_12,((void*)0)) != VAR_0) return;
    if (VAR_12 >= 0) {
        VAR_13 = (unsigned long) VAR_12;
    } else {
        FUNC_0(VAR_11,VAR_10.outofrangeerr);
        return;
    }



    if ((VAR_15 = FUNC_13(VAR_11,VAR_11->argv[1],VAR_10.null[VAR_11->resp]))
        == ((void*)0) || FUNC_5(VAR_11,VAR_15,VAR_4)) return;



    if (VAR_13 == 0) {
        FUNC_0(VAR_11,VAR_10.emptyset[VAR_11->resp]);
        return;
    }

    VAR_14 = FUNC_28(VAR_15);


    FUNC_14(VAR_2,"spop",VAR_11->argv[1],VAR_11->db->id);
    VAR_9.dirty += VAR_13;




    if (VAR_13 >= VAR_14) {

        FUNC_30(VAR_11,VAR_11->argv+1,1,((void*)0),VAR_7);


        FUNC_8(VAR_11->db,VAR_11->argv[1]);
        FUNC_14(VAR_1,"del",VAR_11->argv[1],VAR_11->db->id);


        FUNC_16(VAR_11,2,VAR_10.del,VAR_11->argv[1]);
        FUNC_29(VAR_11->db,VAR_11->argv[1]);
        VAR_9.dirty++;
        return;
    }




    robj *VAR_16[3];
    VAR_16[0] = FUNC_6("SREM",4);
    VAR_16[1] = VAR_11->argv[1];
    FUNC_3(VAR_11,VAR_13);


    sds VAR_17;
    robj *VAR_18;
    int VAR_19;
    int64_t VAR_20;
    unsigned long VAR_21 = VAR_14-VAR_13;
    if (VAR_21*VAR_8 > VAR_13) {
        while(VAR_13--) {

            VAR_19 = FUNC_25(VAR_15,&VAR_17,&VAR_20);
            if (VAR_19 == VAR_3) {
                FUNC_2(VAR_11,VAR_20);
                VAR_18 = FUNC_7(VAR_20);
                VAR_15->ptr = FUNC_12(VAR_15->ptr,VAR_20,((void*)0));
            } else {
                FUNC_1(VAR_11,VAR_17,FUNC_20(VAR_17));
                VAR_18 = FUNC_6(VAR_17,FUNC_20(VAR_17));
                FUNC_27(VAR_15,VAR_17);
            }


            VAR_16[2] = VAR_18;
            FUNC_4(VAR_9.sremCommand,VAR_11->db->id,VAR_16,3,
                VAR_5|VAR_6);
            FUNC_10(VAR_18);
        }
    } else {
        robj *VAR_22 = ((void*)0);


        while(VAR_21--) {
            VAR_19 = FUNC_25(VAR_15,&VAR_17,&VAR_20);
            if (VAR_19 == VAR_3) {
                VAR_17 = FUNC_19(VAR_20);
            } else {
                VAR_17 = FUNC_17(VAR_17);
            }
            if (!VAR_22) VAR_22 = FUNC_22(VAR_17);
            FUNC_21(VAR_22,VAR_17);
            FUNC_27(VAR_15,VAR_17);
            FUNC_18(VAR_17);
        }


        setTypeIterator *VAR_23;
        VAR_23 = FUNC_23(VAR_15);
        while((VAR_19 = FUNC_24(VAR_23,&VAR_17,&VAR_20)) != -1) {
            if (VAR_19 == VAR_3) {
                FUNC_2(VAR_11,VAR_20);
                VAR_18 = FUNC_7(VAR_20);
            } else {
                FUNC_1(VAR_11,VAR_17,FUNC_20(VAR_17));
                VAR_18 = FUNC_6(VAR_17,FUNC_20(VAR_17));
            }


            VAR_16[2] = VAR_18;
            FUNC_4(VAR_9.sremCommand,VAR_11->db->id,VAR_16,3,
                VAR_5|VAR_6);
            FUNC_10(VAR_18);
        }
        FUNC_26(VAR_23);


        FUNC_9(VAR_11->db,VAR_11->argv[1],VAR_22);
    }





    FUNC_10(VAR_16[0]);
    FUNC_15(VAR_11);
    FUNC_29(VAR_11->db,VAR_11->argv[1]);
    VAR_9.dirty++;
}
