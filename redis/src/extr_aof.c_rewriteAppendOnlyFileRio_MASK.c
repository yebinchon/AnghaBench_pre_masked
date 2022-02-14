
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


typedef int selectcmd ;
typedef int sds ;
struct TYPE_32__ {scalar_t__ type; } ;
typedef TYPE_1__ robj ;
struct TYPE_33__ {size_t processed_bytes; } ;
typedef TYPE_2__ rio ;
struct TYPE_34__ {int * dict; } ;
typedef TYPE_3__ redisDb ;
typedef int dictIterator ;
typedef int dictEntry ;
typedef int dict ;
typedef int cmd ;
struct TYPE_35__ {int dbnum; TYPE_3__* db; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 long long FUNC_7 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__,int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_2__*,char*,int) ;
 scalar_t__ FUNC_16 (TYPE_2__*,long long) ;
 scalar_t__ FUNC_17 (TYPE_2__*,TYPE_1__*) ;
 TYPE_4__ VAR_10 ;
 int FUNC_18 (char*) ;

int FUNC_19(rio *VAR_11) {
    dictIterator *VAR_12 = ((void*)0);
    dictEntry *VAR_13;
    size_t VAR_14 = 0;
    int VAR_15;

    for (VAR_15 = 0; VAR_15 < VAR_10.dbnum; VAR_15++) {
        char VAR_16[] = "*2\r\n$6\r\nSELECT\r\n";
        redisDb *VAR_17 = VAR_10.db+VAR_15;
        dict *VAR_18 = VAR_17->dict;
        if (FUNC_6(VAR_18) == 0) continue;
        VAR_12 = FUNC_2(VAR_18);


        if (FUNC_15(VAR_11,VAR_16,sizeof(VAR_16)-1) == 0) goto werr;
        if (FUNC_16(VAR_11,VAR_15) == 0) goto werr;


        while((VAR_13 = FUNC_4(VAR_12)) != ((void*)0)) {
            sds VAR_19;
            robj VAR_20, *VAR_21;
            long long VAR_22;

            VAR_19 = FUNC_1(VAR_13);
            VAR_21 = FUNC_3(VAR_13);
            FUNC_8(VAR_20,VAR_19);

            VAR_22 = FUNC_7(VAR_17,&VAR_20);


            if (VAR_21->type == VAR_8) {

                char VAR_23[]="*3\r\n$3\r\nSET\r\n";
                if (FUNC_15(VAR_11,VAR_23,sizeof(VAR_23)-1) == 0) goto werr;

                if (FUNC_17(VAR_11,&VAR_20) == 0) goto werr;
                if (FUNC_17(VAR_11,VAR_21) == 0) goto werr;
            } else if (VAR_21->type == VAR_4) {
                if (FUNC_10(VAR_11,&VAR_20,VAR_21) == 0) goto werr;
            } else if (VAR_21->type == VAR_6) {
                if (FUNC_12(VAR_11,&VAR_20,VAR_21) == 0) goto werr;
            } else if (VAR_21->type == VAR_9) {
                if (FUNC_13(VAR_11,&VAR_20,VAR_21) == 0) goto werr;
            } else if (VAR_21->type == VAR_3) {
                if (FUNC_9(VAR_11,&VAR_20,VAR_21) == 0) goto werr;
            } else if (VAR_21->type == VAR_7) {
                if (FUNC_14(VAR_11,&VAR_20,VAR_21) == 0) goto werr;
            } else if (VAR_21->type == VAR_5) {
                if (FUNC_11(VAR_11,&VAR_20,VAR_21) == 0) goto werr;
            } else {
                FUNC_18("Unknown object type");
            }

            if (VAR_22 != -1) {
                char VAR_24[]="*3\r\n$9\r\nPEXPIREAT\r\n";
                if (FUNC_15(VAR_11,VAR_24,sizeof(VAR_24)-1) == 0) goto werr;
                if (FUNC_17(VAR_11,&VAR_20) == 0) goto werr;
                if (FUNC_16(VAR_11,VAR_22) == 0) goto werr;
            }

            if (VAR_11->processed_bytes > VAR_14+VAR_0) {
                VAR_14 = VAR_11->processed_bytes;
                FUNC_0();
            }
        }
        FUNC_5(VAR_12);
        VAR_12 = ((void*)0);
    }
    return VAR_2;

werr:
    if (VAR_12) FUNC_5(VAR_12);
    return VAR_1;
}
