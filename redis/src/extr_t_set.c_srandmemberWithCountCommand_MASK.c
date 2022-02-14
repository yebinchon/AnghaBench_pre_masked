
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int setTypeIterator ;
typedef int sds ;
typedef int robj ;
typedef int int64_t ;
typedef int dictIterator ;
typedef int dictEntry ;
typedef int dict ;
struct TYPE_13__ {size_t resp; int * argv; } ;
typedef TYPE_1__ client ;
struct TYPE_14__ {int * emptyset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,unsigned long) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *,int ) ;
 int * FUNC_6 (int ,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int * FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 unsigned long FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (TYPE_1__*,int ,long*,int *) ;
 int * FUNC_20 (TYPE_1__*,int ,int ) ;
 int VAR_7 ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int) ;
 int * FUNC_23 (int *) ;
 int FUNC_24 (int *,int *,int *) ;
 int FUNC_25 (int *,int *,int *) ;
 int FUNC_26 (int *) ;
 unsigned long FUNC_27 (int *) ;
 TYPE_4__ VAR_8 ;
 int FUNC_28 (TYPE_1__*,int *,int,int *,int ) ;

void FUNC_29(client *VAR_9) {
    long VAR_10;
    unsigned long VAR_11, VAR_12;
    int VAR_13 = 1;
    robj *VAR_14;
    sds VAR_15;
    int64_t VAR_16;
    int VAR_17;

    dict *VAR_18;

    if (FUNC_19(VAR_9,VAR_9->argv[2],&VAR_10,((void*)0)) != VAR_0) return;
    if (VAR_10 >= 0) {
        VAR_11 = (unsigned long) VAR_10;
    } else {


        VAR_11 = -VAR_10;
        VAR_13 = 0;
    }

    if ((VAR_14 = FUNC_20(VAR_9,VAR_9->argv[1],VAR_8.emptyset[VAR_9->resp]))
        == ((void*)0) || FUNC_5(VAR_9,VAR_14,VAR_4)) return;
    VAR_12 = FUNC_27(VAR_14);


    if (VAR_11 == 0) {
        FUNC_0(VAR_9,VAR_8.emptyset[VAR_9->resp]);
        return;
    }





    if (!VAR_13) {
        FUNC_4(VAR_9,VAR_11);
        while(VAR_11--) {
            VAR_17 = FUNC_25(VAR_14,&VAR_15,&VAR_16);
            if (VAR_17 == VAR_3) {
                FUNC_3(VAR_9,VAR_16);
            } else {
                FUNC_2(VAR_9,VAR_15,FUNC_21(VAR_15));
            }
        }
        return;
    }




    if (VAR_11 >= VAR_12) {
        FUNC_28(VAR_9,VAR_9->argv+1,1,((void*)0),VAR_5);
        return;
    }


    VAR_18 = FUNC_10(&VAR_7,((void*)0));
    if (VAR_11*VAR_6 > VAR_12) {
        setTypeIterator *VAR_19;


        VAR_19 = FUNC_23(VAR_14);
        while((VAR_17 = FUNC_24(VAR_19,&VAR_15,&VAR_16)) != -1) {
            int VAR_20 = VAR_1;

            if (VAR_17 == VAR_3) {
                VAR_20 = FUNC_9(VAR_18,FUNC_7(VAR_16),((void*)0));
            } else {
                VAR_20 = FUNC_9(VAR_18,FUNC_6(VAR_15,FUNC_21(VAR_15)),((void*)0));
            }
            FUNC_22(VAR_20 == VAR_2);
        }
        FUNC_26(VAR_19);
        FUNC_22(FUNC_18(VAR_18) == VAR_12);


        while(VAR_12 > VAR_11) {
            dictEntry *VAR_21;

            VAR_21 = FUNC_14(VAR_18);
            FUNC_11(VAR_18,FUNC_13(VAR_21));
            VAR_12--;
        }
    }





    else {
        unsigned long VAR_22 = 0;
        robj *VAR_23;

        while(VAR_22 < VAR_11) {
            VAR_17 = FUNC_25(VAR_14,&VAR_15,&VAR_16);
            if (VAR_17 == VAR_3) {
                VAR_23 = FUNC_7(VAR_16);
            } else {
                VAR_23 = FUNC_6(VAR_15,FUNC_21(VAR_15));
            }



            if (FUNC_9(VAR_18,VAR_23,((void*)0)) == VAR_2)
                VAR_22++;
            else
                FUNC_8(VAR_23);
        }
    }


    {
        dictIterator *VAR_24;
        dictEntry *VAR_25;

        FUNC_4(VAR_9,VAR_11);
        VAR_24 = FUNC_12(VAR_18);
        while((VAR_25 = FUNC_15(VAR_24)) != ((void*)0))
            FUNC_1(VAR_9,FUNC_13(VAR_25));
        FUNC_17(VAR_24);
        FUNC_16(VAR_18);
    }
}
