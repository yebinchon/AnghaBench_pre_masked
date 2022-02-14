
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_18__ {scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_19__ {scalar_t__ cksum; int update_cksum; } ;
typedef TYPE_2__ rio ;
struct TYPE_21__ {int key_type; char* error; scalar_t__ error_set; void* doing; TYPE_1__* key; int expires; int already_expired; int keys; TYPE_2__* rio; } ;
struct TYPE_20__ {scalar_t__ rdb_checksum; } ;
typedef int FILE ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (scalar_t__*) ;
 long long FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int *) ;
 long long FUNC_11 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_12 (int,TYPE_2__*,TYPE_1__*) ;
 int VAR_18 ;
 TYPE_1__* FUNC_13 (TYPE_2__*) ;
 long long FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 TYPE_7__ VAR_19 ;
 scalar_t__ FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_18 (TYPE_2__*,...) ;
 TYPE_3__ VAR_20 ;
 int FUNC_19 (int *,char*,int ) ;
 int FUNC_20 (int) ;

int FUNC_21(char *VAR_21, FILE *VAR_22) {
    uint64_t VAR_23;
    int VAR_24, VAR_25;
    char VAR_26[1024];
    long long VAR_27, VAR_28 = FUNC_6();
    static rio VAR_29;

    int VAR_30 = (VAR_22 == ((void*)0));
    if (VAR_22 == ((void*)0) && (VAR_22 = FUNC_3(VAR_21,"r")) == ((void*)0)) return 1;

    FUNC_17(&VAR_29,VAR_22);
    VAR_19.rio = &VAR_29;
    VAR_29.update_cksum = VAR_18;
    if (FUNC_18(&VAR_29,VAR_26,9) == 0) goto eoferr;
    VAR_26[9] = '\0';
    if (FUNC_4(VAR_26,"REDIS",5) != 0) {
        FUNC_7("Wrong signature trying to load DB from file");
        goto err;
    }
    VAR_25 = FUNC_0(VAR_26+5);
    if (VAR_25 < 1 || VAR_25 > VAR_17) {
        FUNC_7("Can't handle RDB format version %d",VAR_25);
        goto err;
    }

    VAR_27 = -1;
    FUNC_19(VAR_22, VAR_21, VAR_0);
    while(1) {
        robj *VAR_31, *VAR_32;


        VAR_19.doing = VAR_7;
        if ((VAR_24 = FUNC_15(&VAR_29)) == -1) goto eoferr;


        if (VAR_24 == VAR_11) {
            VAR_19.doing = VAR_3;



            VAR_27 = FUNC_14(&VAR_29);
            VAR_27 *= 1000;
            if (FUNC_16(&VAR_29)) goto eoferr;
            continue;
        } else if (VAR_24 == VAR_12) {


            VAR_19.doing = VAR_3;
            VAR_27 = FUNC_11(&VAR_29, VAR_25);
            if (FUNC_16(&VAR_29)) goto eoferr;
            continue;
        } else if (VAR_24 == VAR_13) {

            uint8_t VAR_33;
            if (FUNC_18(&VAR_29,&VAR_33,1) == 0) goto eoferr;
            continue;
        } else if (VAR_24 == VAR_14) {

            if (FUNC_10(&VAR_29,((void*)0)) == VAR_8) goto eoferr;
            continue;
        } else if (VAR_24 == VAR_10) {

            break;
        } else if (VAR_24 == VAR_16) {

            VAR_19.doing = VAR_5;
            if ((VAR_23 = FUNC_10(&VAR_29,((void*)0))) == VAR_8)
                goto eoferr;
            FUNC_8("Selecting DB ID %d", VAR_23);
            continue;
        } else if (VAR_24 == VAR_15) {


            uint64_t VAR_34, VAR_35;
            VAR_19.doing = VAR_5;
            if ((VAR_34 = FUNC_10(&VAR_29,((void*)0))) == VAR_8)
                goto eoferr;
            if ((VAR_35 = FUNC_10(&VAR_29,((void*)0))) == VAR_8)
                goto eoferr;
            continue;
        } else if (VAR_24 == VAR_9) {





            robj *VAR_36, *VAR_37;
            VAR_19.doing = VAR_2;
            if ((VAR_36 = FUNC_13(&VAR_29)) == ((void*)0)) goto eoferr;
            if ((VAR_37 = FUNC_13(&VAR_29)) == ((void*)0)) goto eoferr;

            FUNC_8("AUX FIELD %s = '%s'",
                (char*)VAR_36->ptr, (char*)VAR_37->ptr);
            FUNC_1(VAR_36);
            FUNC_1(VAR_37);
            continue;
        } else {
            if (!FUNC_9(VAR_24)) {
                FUNC_7("Invalid object type: %d", VAR_24);
                goto err;
            }
            VAR_19.key_type = VAR_24;
        }


        VAR_19.doing = VAR_4;
        if ((VAR_31 = FUNC_13(&VAR_29)) == ((void*)0)) goto eoferr;
        VAR_19.key = VAR_31;
        VAR_19.keys++;

        VAR_19.doing = VAR_6;
        if ((VAR_32 = FUNC_12(VAR_24,&VAR_29,VAR_31)) == ((void*)0)) goto eoferr;

        if (VAR_27 != -1 && VAR_27 < VAR_28)
            VAR_19.already_expired++;
        if (VAR_27 != -1) VAR_19.expires++;
        VAR_19.key = ((void*)0);
        FUNC_1(VAR_31);
        FUNC_1(VAR_32);
        VAR_19.key_type = -1;
        VAR_27 = -1;
    }

    if (VAR_25 >= 5 && VAR_20.rdb_checksum) {
        uint64_t VAR_38, VAR_39 = VAR_29.cksum;

        VAR_19.doing = VAR_1;
        if (FUNC_18(&VAR_29,&VAR_38,8) == 0) goto eoferr;
        FUNC_5(&VAR_38);
        if (VAR_38 == 0) {
            FUNC_8("RDB file was saved with checksum disabled: no check performed.");
        } else if (VAR_38 != VAR_39) {
            FUNC_7("RDB CRC error");
            goto err;
        } else {
            FUNC_8("Checksum OK");
        }
    }

    if (VAR_30) FUNC_2(VAR_22);
    FUNC_20(1);
    return 0;

eoferr:
    if (VAR_19.error_set) {
        FUNC_7(VAR_19.error);
    } else {
        FUNC_7("Unexpected EOF reading RDB file");
    }
err:
    if (VAR_30) FUNC_2(VAR_22);
    FUNC_20(0);
    return 1;
}
