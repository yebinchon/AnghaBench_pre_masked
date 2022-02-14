
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_10__ ;


typedef unsigned int uint8_t ;
typedef unsigned int uint64_t ;
typedef scalar_t__ time_t ;
struct TYPE_37__ {char* ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_38__ {unsigned int cksum; int max_processing_chunk; int update_cksum; } ;
typedef TYPE_2__ rio ;
struct TYPE_39__ {int expires; int dict; } ;
typedef TYPE_3__ redisDb ;
struct TYPE_40__ {int repl_id_is_set; void* repl_offset; int repl_id; void* repl_stream_db; } ;
typedef TYPE_4__ rdbSaveInfo ;
struct TYPE_41__ {scalar_t__ (* aux_load ) (TYPE_6__*,unsigned int,int) ;} ;
typedef TYPE_5__ moduleType ;
struct TYPE_42__ {int ver; scalar_t__ ctx; scalar_t__ error; } ;
struct TYPE_36__ {scalar_t__ rdb_checksum; scalar_t__ key_load_delay; int * masterhost; int lua; TYPE_3__* db; scalar_t__ dbnum; int loading_process_events_interval_bytes; } ;
typedef TYPE_6__ RedisModuleIO ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long long FUNC_0 () ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,unsigned int) ;
 int VAR_21 ;
 int FUNC_5 (int) ;
 int * FUNC_6 (int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int ,char*,scalar_t__) ;
 int FUNC_9 (unsigned int*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_6__,TYPE_5__*,TYPE_2__*,int *) ;
 TYPE_5__* FUNC_12 (unsigned int) ;
 int FUNC_13 (char*,unsigned int) ;
 long long FUNC_14 () ;
 int FUNC_15 (TYPE_1__*,long long,long long,long long) ;
 int VAR_22 ;
 int FUNC_16 (char*,...) ;
 TYPE_1__* FUNC_17 (TYPE_2__*,char*) ;
 void* FUNC_18 (TYPE_2__*,int *) ;
 long long FUNC_19 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_20 (int,TYPE_2__*,TYPE_1__*) ;
 int VAR_23 ;
 TYPE_1__* FUNC_21 (TYPE_2__*) ;
 long long FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (char*) ;
 scalar_t__ FUNC_25 (TYPE_2__*) ;
 scalar_t__ FUNC_26 (TYPE_2__*,...) ;
 scalar_t__ FUNC_27 (char*) ;
 TYPE_10__ VAR_24 ;
 int FUNC_28 (int ,char*,...) ;
 int FUNC_29 (int *,TYPE_3__*,TYPE_1__*,long long) ;
 int FUNC_30 (char*,char*) ;
 scalar_t__ FUNC_31 (char*,int *,int) ;
 void* FUNC_32 (char*,int *,int) ;
 scalar_t__ FUNC_33 (TYPE_6__*,unsigned int,int) ;
 scalar_t__ FUNC_34 (int *) ;
 int FUNC_35 (scalar_t__) ;
 int FUNC_36 (scalar_t__) ;

int FUNC_37(rio *VAR_25, int VAR_26, rdbSaveInfo *VAR_27) {
    uint64_t VAR_28;
    int VAR_29, VAR_30;
    redisDb *VAR_31 = VAR_24.db+0;
    char VAR_32[1024];

    VAR_25->update_cksum = VAR_23;
    VAR_25->max_processing_chunk = VAR_24.loading_process_events_interval_bytes;
    if (FUNC_26(VAR_25,VAR_32,9) == 0) goto eoferr;
    VAR_32[9] = '\0';
    if (FUNC_7(VAR_32,"REDIS",5) != 0) {
        FUNC_28(VAR_6,"Wrong signature trying to load DB from file");
        VAR_21 = VAR_3;
        return VAR_1;
    }
    VAR_30 = FUNC_1(VAR_32+5);
    if (VAR_30 < 1 || VAR_30 > VAR_20) {
        FUNC_28(VAR_6,"Can't handle RDB format version %d",VAR_30);
        VAR_21 = VAR_3;
        return VAR_1;
    }


    long long VAR_33 = -1, VAR_34 = -1, VAR_35 = -1, VAR_36 = FUNC_14();
    long long VAR_37 = FUNC_0();

    while(1) {
        robj *VAR_38, *VAR_39;


        if ((VAR_29 = FUNC_23(VAR_25)) == -1) goto eoferr;


        if (VAR_29 == VAR_13) {



            VAR_35 = FUNC_22(VAR_25);
            VAR_35 *= 1000;
            if (FUNC_25(VAR_25)) goto eoferr;
            continue;
        } else if (VAR_29 == VAR_14) {


            VAR_35 = FUNC_19(VAR_25,VAR_30);
            if (FUNC_25(VAR_25)) goto eoferr;
            continue;
        } else if (VAR_29 == VAR_15) {

            uint8_t VAR_40;
            if (FUNC_26(VAR_25,&VAR_40,1) == 0) goto eoferr;
            VAR_34 = VAR_40;
            continue;
        } else if (VAR_29 == VAR_16) {

            uint64_t VAR_41;
            if ((VAR_41 = FUNC_18(VAR_25,((void*)0))) == VAR_8) goto eoferr;
            VAR_33 = VAR_41;
            continue;
        } else if (VAR_29 == VAR_12) {

            break;
        } else if (VAR_29 == VAR_19) {

            if ((VAR_28 = FUNC_18(VAR_25,((void*)0))) == VAR_8) goto eoferr;
            if (VAR_28 >= (unsigned)VAR_24.dbnum) {
                FUNC_28(VAR_6,
                    "FATAL: Data file was created with a Redis "
                    "server configured to handle more than %d "
                    "databases. Exiting\n", VAR_24.dbnum);
                FUNC_5(1);
            }
            VAR_31 = VAR_24.db+VAR_28;
            continue;
        } else if (VAR_29 == VAR_18) {


            uint64_t VAR_42, VAR_43;
            if ((VAR_42 = FUNC_18(VAR_25,((void*)0))) == VAR_8)
                goto eoferr;
            if ((VAR_43 = FUNC_18(VAR_25,((void*)0))) == VAR_8)
                goto eoferr;
            FUNC_4(VAR_31->dict,VAR_42);
            FUNC_4(VAR_31->expires,VAR_43);
            continue;
        } else if (VAR_29 == VAR_11) {





            robj *VAR_44, *VAR_45;
            if ((VAR_44 = FUNC_21(VAR_25)) == ((void*)0)) goto eoferr;
            if ((VAR_45 = FUNC_21(VAR_25)) == ((void*)0)) goto eoferr;

            if (((char*)VAR_44->ptr)[0] == '%') {



                FUNC_28(VAR_5,"RDB '%s': %s",
                    (char*)VAR_44->ptr,
                    (char*)VAR_45->ptr);
            } else if (!FUNC_30(VAR_44->ptr,"repl-stream-db")) {
                if (VAR_27) VAR_27->repl_stream_db = FUNC_1(VAR_45->ptr);
            } else if (!FUNC_30(VAR_44->ptr,"repl-id")) {
                if (VAR_27 && FUNC_27(VAR_45->ptr) == VAR_0) {
                    FUNC_8(VAR_27->repl_id,VAR_45->ptr,VAR_0+1);
                    VAR_27->repl_id_is_set = 1;
                }
            } else if (!FUNC_30(VAR_44->ptr,"repl-offset")) {
                if (VAR_27) VAR_27->repl_offset = FUNC_32(VAR_45->ptr,((void*)0),10);
            } else if (!FUNC_30(VAR_44->ptr,"lua")) {

                if (FUNC_6(((void*)0),VAR_24.lua,VAR_45) == ((void*)0)) {
                    FUNC_16(
                        "Can't load Lua script from RDB file! "
                        "BODY: %s", VAR_45->ptr);
                }
            } else if (!FUNC_30(VAR_44->ptr,"redis-ver")) {
                FUNC_28(VAR_5,"Loading RDB produced by version %s",
                    (char*)VAR_45->ptr);
            } else if (!FUNC_30(VAR_44->ptr,"ctime")) {
                time_t VAR_46 = FUNC_34(((void*)0))-FUNC_31(VAR_45->ptr,((void*)0),10);
                if (VAR_46 < 0) VAR_46 = 0;
                FUNC_28(VAR_5,"RDB age %ld seconds",
                    (unsigned long) VAR_46);
            } else if (!FUNC_30(VAR_44->ptr,"used-mem")) {
                long long VAR_47 = FUNC_32(VAR_45->ptr,((void*)0),10);
                FUNC_28(VAR_5,"RDB memory usage when created %.2f Mb",
                    (double) VAR_47 / (1024*1024));
            } else if (!FUNC_30(VAR_44->ptr,"aof-preamble")) {
                long long VAR_48 = FUNC_32(VAR_45->ptr,((void*)0),10);
                if (VAR_48) FUNC_28(VAR_5,"RDB has an AOF tail");
            } else if (!FUNC_30(VAR_44->ptr,"redis-bits")) {

            } else {


                FUNC_28(VAR_4,"Unrecognized RDB AUX field: '%s'",
                    (char*)VAR_44->ptr);
            }

            FUNC_3(VAR_44);
            FUNC_3(VAR_45);
            continue;
        } else if (VAR_29 == VAR_17) {



            uint64_t VAR_49 = FUNC_18(VAR_25,((void*)0));
            int VAR_50 = FUNC_18(VAR_25,((void*)0));
            int VAR_51 = FUNC_18(VAR_25,((void*)0));
            if (FUNC_25(VAR_25)) goto eoferr;
            if (VAR_50 != VAR_10)
                FUNC_24("bad when_opcode");
            moduleType *VAR_52 = FUNC_12(VAR_49);
            char VAR_53[10];
            FUNC_13(VAR_53,VAR_49);

            if (!VAR_22 && VAR_52 == ((void*)0)) {

                FUNC_28(VAR_6,"The RDB file contains AUX module data I can't load: no matching module '%s'", VAR_53);
                FUNC_5(1);
            } else if (!VAR_22 && VAR_52 != ((void*)0)) {
                if (!VAR_52->aux_load) {

                    FUNC_28(VAR_6,"The RDB file contains module AUX data, but the module '%s' doesn't seem to support it.", VAR_53);
                    FUNC_5(1);
                }

                RedisModuleIO VAR_54;
                FUNC_11(VAR_54,VAR_52,VAR_25,((void*)0));
                VAR_54.ver = 2;


                if (VAR_52->aux_load(&VAR_54,VAR_49&1023, VAR_51) || VAR_54.error) {
                    FUNC_13(VAR_53,VAR_49);
                    FUNC_28(VAR_6,"The RDB file contains module AUX data for the module type '%s', that the responsible module is not able to load. Check for modules log above for additional clues.", VAR_53);
                    FUNC_5(1);
                }
                if (VAR_54.ctx) {
                    FUNC_10(VAR_54.ctx);
                    FUNC_36(VAR_54.ctx);
                }
                uint64_t VAR_55 = FUNC_18(VAR_25,((void*)0));
                if (VAR_55 != VAR_9) {
                    FUNC_28(VAR_6,"The RDB file contains module AUX data for the module '%s' that is not terminated by the proper module value EOF marker", VAR_53);
                    FUNC_5(1);
                }
                continue;
            } else {

                robj *VAR_56 = FUNC_17(VAR_25,VAR_53);
                FUNC_3(VAR_56);
                continue;
            }
        }


        if ((VAR_38 = FUNC_21(VAR_25)) == ((void*)0)) goto eoferr;

        if ((VAR_39 = FUNC_20(VAR_29,VAR_25,VAR_38)) == ((void*)0)) {
            FUNC_3(VAR_38);
            goto eoferr;
        }






        if (VAR_24.masterhost == ((void*)0) && !(VAR_26&VAR_7) && VAR_35 != -1 && VAR_35 < VAR_36) {
            FUNC_3(VAR_38);
            FUNC_3(VAR_39);
        } else {

            FUNC_2(VAR_31,VAR_38,VAR_39);


            if (VAR_35 != -1) FUNC_29(((void*)0),VAR_31,VAR_38,VAR_35);


            FUNC_15(VAR_39,VAR_34,VAR_33,VAR_37);



            FUNC_3(VAR_38);
        }
        if (VAR_24.key_load_delay)
            FUNC_35(VAR_24.key_load_delay);



        VAR_35 = -1;
        VAR_34 = -1;
        VAR_33 = -1;
    }

    if (VAR_30 >= 5) {
        uint64_t VAR_57, VAR_58 = VAR_25->cksum;

        if (FUNC_26(VAR_25,&VAR_57,8) == 0) goto eoferr;
        if (VAR_24.rdb_checksum) {
            FUNC_9(&VAR_57);
            if (VAR_57 == 0) {
                FUNC_28(VAR_6,"RDB file was saved with checksum disabled: no check performed.");
            } else if (VAR_57 != VAR_58) {
                FUNC_28(VAR_6,"Wrong RDB checksum. Aborting now.");
                FUNC_16("RDB CRC error");
            }
        }
    }
    return VAR_2;





eoferr:
    FUNC_28(VAR_6,
        "Short read or OOM loading DB. Unrecoverable error, aborting now.");
    FUNC_24("Unexpected EOF reading RDB file");
    return VAR_1;
}
