
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_25__ {char* ptr; scalar_t__ type; } ;
typedef TYPE_1__ robj ;
struct TYPE_26__ {int argc; TYPE_5__* db; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_29__ {scalar_t__ zset_max_ziplist_entries; scalar_t__ zset_max_ziplist_value; int dirty; } ;
struct TYPE_28__ {int wrongtypeerr; int syntaxerr; } ;
struct TYPE_27__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,double) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 () ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (TYPE_5__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_1__*,double*,int *) ;
 TYPE_1__* FUNC_9 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_10 (int ,char*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_11 (char*) ;
 TYPE_8__ VAR_10 ;
 TYPE_7__ VAR_11 ;
 int FUNC_12 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (double*) ;
 double* FUNC_15 (int) ;
 int FUNC_16 (TYPE_1__*,double,char*,int*,double*) ;

void FUNC_17(client *VAR_12, int VAR_13) {
    static char *VAR_14 = "resulting score is not a number (NaN)";
    robj *VAR_15 = VAR_12->argv[1];
    robj *VAR_16;
    sds VAR_17;
    double VAR_18 = 0, *VAR_19 = ((void*)0);
    int VAR_20, VAR_21;
    int VAR_22 = 0;



    int VAR_23 = 0;
    int VAR_24 = 0;
    int VAR_25 = 0;




    VAR_22 = 2;
    while(VAR_22 < VAR_12->argc) {
        char *VAR_26 = VAR_12->argv[VAR_22]->ptr;
        if (!FUNC_13(VAR_26,"nx")) VAR_13 |= VAR_7;
        else if (!FUNC_13(VAR_26,"xx")) VAR_13 |= VAR_9;
        else if (!FUNC_13(VAR_26,"ch")) VAR_13 |= VAR_4;
        else if (!FUNC_13(VAR_26,"incr")) VAR_13 |= VAR_5;
        else break;
        VAR_22++;
    }


    int VAR_27 = (VAR_13 & VAR_5) != 0;
    int VAR_28 = (VAR_13 & VAR_7) != 0;
    int VAR_29 = (VAR_13 & VAR_9) != 0;
    int VAR_30 = (VAR_13 & VAR_4) != 0;



    VAR_21 = VAR_12->argc-VAR_22;
    if (VAR_21 % 2 || !VAR_21) {
        FUNC_0(VAR_12,VAR_11.syntaxerr);
        return;
    }
    VAR_21 /= 2;


    if (VAR_28 && VAR_29) {
        FUNC_2(VAR_12,
            "XX and NX options at the same time are not compatible");
        return;
    }

    if (VAR_27 && VAR_21 > 1) {
        FUNC_2(VAR_12,
            "INCR option supports a single increment-element pair");
        return;
    }




    VAR_19 = FUNC_15(sizeof(double)*VAR_21);
    for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
        if (FUNC_8(VAR_12,VAR_12->argv[VAR_22+VAR_20*2],&VAR_19[VAR_20],((void*)0))
            != VAR_0) goto cleanup;
    }


    VAR_16 = FUNC_9(VAR_12->db,VAR_15);
    if (VAR_16 == ((void*)0)) {
        if (VAR_29) goto reply_to_client;
        if (VAR_10.zset_max_ziplist_entries == 0 ||
            VAR_10.zset_max_ziplist_value < FUNC_11(VAR_12->argv[VAR_22+1]->ptr))
        {
            VAR_16 = FUNC_5();
        } else {
            VAR_16 = FUNC_6();
        }
        FUNC_7(VAR_12->db,VAR_15,VAR_16);
    } else {
        if (VAR_16->type != VAR_2) {
            FUNC_0(VAR_12,VAR_11.wrongtypeerr);
            goto cleanup;
        }
    }

    for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
        double VAR_31;
        VAR_18 = VAR_19[VAR_20];
        int VAR_32 = VAR_13;

        VAR_17 = VAR_12->argv[VAR_22+1+VAR_20*2]->ptr;
        int VAR_33 = FUNC_16(VAR_16, VAR_18, VAR_17, &VAR_32, &VAR_31);
        if (VAR_33 == 0) {
            FUNC_2(VAR_12,VAR_14);
            goto cleanup;
        }
        if (VAR_32 & VAR_3) VAR_23++;
        if (VAR_32 & VAR_8) VAR_24++;
        if (!(VAR_32 & VAR_6)) VAR_25++;
        VAR_18 = VAR_31;
    }
    VAR_10.dirty += (VAR_23+VAR_24);

reply_to_client:
    if (VAR_27) {
        if (VAR_25)
            FUNC_1(VAR_12,VAR_18);
        else
            FUNC_4(VAR_12);
    } else {
        FUNC_3(VAR_12,VAR_30 ? VAR_23+VAR_24 : VAR_23);
    }

cleanup:
    FUNC_14(VAR_19);
    if (VAR_23 || VAR_24) {
        FUNC_12(VAR_12->db,VAR_15);
        FUNC_10(VAR_1,
            VAR_27 ? "zincr" : "zadd", VAR_15, VAR_12->db->id);
    }
}
