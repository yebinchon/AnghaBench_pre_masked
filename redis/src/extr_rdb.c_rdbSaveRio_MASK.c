
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint64_t ;
typedef int sds ;
struct TYPE_20__ {int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_21__ {size_t processed_bytes; int cksum; int update_cksum; } ;
typedef TYPE_2__ rio ;
struct TYPE_22__ {int * expires; int * dict; } ;
typedef TYPE_3__ redisDb ;
typedef int rdbSaveInfo ;
typedef int magic ;
typedef int dictIterator ;
typedef int dictEntry ;
typedef int dict ;
struct TYPE_23__ {int dbnum; int * lua_scripts; TYPE_3__* db; scalar_t__ rdb_checksum; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_10 ;
 long long FUNC_8 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__,int ) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (TYPE_2__*,char*,int,int ,int ) ;
 int FUNC_12 (TYPE_2__*,int,int *) ;
 int FUNC_13 (TYPE_2__*,TYPE_1__*,TYPE_1__*,long long) ;
 int FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 int FUNC_17 (TYPE_2__*,char*,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_18 (TYPE_2__*,int*,int) ;
 int FUNC_19 (int ) ;
 TYPE_4__ VAR_12 ;
 int FUNC_20 (char*,int,char*,int) ;

int FUNC_21(rio *VAR_13, int *VAR_14, int VAR_15, rdbSaveInfo *VAR_16) {
    dictIterator *VAR_17 = ((void*)0);
    dictEntry *VAR_18;
    char VAR_19[10];
    int VAR_20;
    uint64_t VAR_21;
    size_t VAR_22 = 0;

    if (VAR_12.rdb_checksum)
        VAR_13->update_cksum = VAR_11;
    FUNC_20(VAR_19,sizeof(VAR_19),"REDIS%04d",VAR_7);
    if (FUNC_17(VAR_13,VAR_19,9) == -1) goto werr;
    if (FUNC_12(VAR_13,VAR_15,VAR_16) == -1) goto werr;
    if (FUNC_15(VAR_13, VAR_9) == -1) goto werr;

    for (VAR_20 = 0; VAR_20 < VAR_12.dbnum; VAR_20++) {
        redisDb *VAR_23 = VAR_12.db+VAR_20;
        dict *VAR_24 = VAR_23->dict;
        if (FUNC_7(VAR_24) == 0) continue;
        VAR_17 = FUNC_3(VAR_24);


        if (FUNC_16(VAR_13,VAR_6) == -1) goto werr;
        if (FUNC_14(VAR_13,VAR_20) == -1) goto werr;





        uint64_t VAR_25, VAR_26;
        VAR_25 = FUNC_7(VAR_23->dict);
        VAR_26 = FUNC_7(VAR_23->expires);
        if (FUNC_16(VAR_13,VAR_5) == -1) goto werr;
        if (FUNC_14(VAR_13,VAR_25) == -1) goto werr;
        if (FUNC_14(VAR_13,VAR_26) == -1) goto werr;


        while((VAR_18 = FUNC_5(VAR_17)) != ((void*)0)) {
            sds VAR_27 = FUNC_2(VAR_18);
            robj VAR_28, *VAR_29 = FUNC_4(VAR_18);
            long long VAR_30;

            FUNC_9(VAR_28,VAR_27);
            VAR_30 = FUNC_8(VAR_23,&VAR_28);
            if (FUNC_13(VAR_13,&VAR_28,VAR_29,VAR_30) == -1) goto werr;




            if (VAR_15 & VAR_3 &&
                VAR_13->processed_bytes > VAR_22+VAR_0)
            {
                VAR_22 = VAR_13->processed_bytes;
                FUNC_0();
            }
        }
        FUNC_6(VAR_17);
        VAR_17 = ((void*)0);
    }





    if (VAR_16 && FUNC_7(VAR_12.lua_scripts)) {
        VAR_17 = FUNC_1(VAR_12.lua_scripts);
        while((VAR_18 = FUNC_5(VAR_17)) != ((void*)0)) {
            robj *VAR_31 = FUNC_4(VAR_18);
            if (FUNC_11(VAR_13,"lua",3,VAR_31->ptr,FUNC_19(VAR_31->ptr)) == -1)
                goto werr;
        }
        FUNC_6(VAR_17);
        VAR_17 = ((void*)0);
    }

    if (FUNC_15(VAR_13, VAR_8) == -1) goto werr;


    if (FUNC_16(VAR_13,VAR_4) == -1) goto werr;



    VAR_21 = VAR_13->cksum;
    FUNC_10(&VAR_21);
    if (FUNC_18(VAR_13,&VAR_21,8) == 0) goto werr;
    return VAR_2;

werr:
    if (VAR_14) *VAR_14 = VAR_10;
    if (VAR_17) FUNC_6(VAR_17);
    return VAR_1;
}
