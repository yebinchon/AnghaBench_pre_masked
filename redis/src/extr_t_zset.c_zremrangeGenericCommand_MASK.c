
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_20__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_19__ ;
typedef struct TYPE_34__ TYPE_17__ ;


struct TYPE_36__ {int dict; int zsl; } ;
typedef TYPE_1__ zset ;
typedef int zrangespec ;
typedef int zlexrangespec ;
struct TYPE_38__ {scalar_t__ encoding; TYPE_1__* ptr; } ;
typedef TYPE_2__ robj ;
struct TYPE_39__ {TYPE_17__* db; TYPE_2__** argv; } ;
typedef TYPE_3__ client ;
struct TYPE_37__ {unsigned long dirty; } ;
struct TYPE_35__ {int czero; } ;
struct TYPE_34__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*,unsigned long) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_17__*,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,TYPE_2__*,long*,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 TYPE_2__* FUNC_9 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_10 (int ,char*,TYPE_2__*,int ) ;
 TYPE_20__ VAR_6 ;
 int FUNC_11 (char*) ;
 TYPE_19__ VAR_7 ;
 int FUNC_12 (TYPE_17__*,TYPE_2__*) ;
 long FUNC_13 (TYPE_2__*) ;
 unsigned long FUNC_14 (int ,int *,int ) ;
 unsigned long FUNC_15 (int ,long,long,int ) ;
 unsigned long FUNC_16 (int ,int *,int ) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (TYPE_2__*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_19 (TYPE_2__*,TYPE_2__*,int *) ;
 TYPE_1__* FUNC_20 (TYPE_1__*,int *,unsigned long*) ;
 TYPE_1__* FUNC_21 (TYPE_1__*,long,long,unsigned long*) ;
 TYPE_1__* FUNC_22 (TYPE_1__*,int *,unsigned long*) ;
 scalar_t__ FUNC_23 (TYPE_1__*) ;

void FUNC_24(client *VAR_8, int VAR_9) {
    robj *VAR_10 = VAR_8->argv[1];
    robj *VAR_11;
    int VAR_12 = 0;
    unsigned long VAR_13 = 0;
    zrangespec VAR_14;
    zlexrangespec VAR_15;
    long VAR_16, VAR_17, VAR_18;


    if (VAR_9 == 129) {
        if ((FUNC_7(VAR_8,VAR_8->argv[2],&VAR_16,((void*)0)) != VAR_0) ||
            (FUNC_7(VAR_8,VAR_8->argv[3],&VAR_17,((void*)0)) != VAR_0))
            return;
    } else if (VAR_9 == 128) {
        if (FUNC_19(VAR_8->argv[2],VAR_8->argv[3],&VAR_14) != VAR_0) {
            FUNC_1(VAR_8,"min or max is not a float");
            return;
        }
    } else if (VAR_9 == 130) {
        if (FUNC_18(VAR_8->argv[2],VAR_8->argv[3],&VAR_15) != VAR_0) {
            FUNC_1(VAR_8,"min or max not valid string range item");
            return;
        }
    }


    if ((VAR_11 = FUNC_9(VAR_8,VAR_10,VAR_7.czero)) == ((void*)0) ||
        FUNC_3(VAR_8,VAR_11,VAR_5)) goto cleanup;

    if (VAR_9 == 129) {

        VAR_18 = FUNC_13(VAR_11);
        if (VAR_16 < 0) VAR_16 = VAR_18+VAR_16;
        if (VAR_17 < 0) VAR_17 = VAR_18+VAR_17;
        if (VAR_16 < 0) VAR_16 = 0;



        if (VAR_16 > VAR_17 || VAR_16 >= VAR_18) {
            FUNC_0(VAR_8,VAR_7.czero);
            goto cleanup;
        }
        if (VAR_17 >= VAR_18) VAR_17 = VAR_18-1;
    }


    if (VAR_11->encoding == VAR_4) {
        switch(VAR_9) {
        case 129:
            VAR_11->ptr = FUNC_21(VAR_11->ptr,VAR_16+1,VAR_17+1,&VAR_13);
            break;
        case 128:
            VAR_11->ptr = FUNC_22(VAR_11->ptr,&VAR_14,&VAR_13);
            break;
        case 130:
            VAR_11->ptr = FUNC_20(VAR_11->ptr,&VAR_15,&VAR_13);
            break;
        }
        if (FUNC_23(VAR_11->ptr) == 0) {
            FUNC_4(VAR_8->db,VAR_10);
            VAR_12 = 1;
        }
    } else if (VAR_11->encoding == VAR_3) {
        zset *VAR_19 = VAR_11->ptr;
        switch(VAR_9) {
        case 129:
            VAR_13 = FUNC_15(VAR_19->zsl,VAR_16+1,VAR_17+1,VAR_19->dict);
            break;
        case 128:
            VAR_13 = FUNC_16(VAR_19->zsl,&VAR_14,VAR_19->dict);
            break;
        case 130:
            VAR_13 = FUNC_14(VAR_19->zsl,&VAR_15,VAR_19->dict);
            break;
        }
        if (FUNC_8(VAR_19->dict)) FUNC_5(VAR_19->dict);
        if (FUNC_6(VAR_19->dict) == 0) {
            FUNC_4(VAR_8->db,VAR_10);
            VAR_12 = 1;
        }
    } else {
        FUNC_11("Unknown sorted set encoding");
    }


    if (VAR_13) {
        char *VAR_20[3] = {"zremrangebyrank","zremrangebyscore","zremrangebylex"};
        FUNC_12(VAR_8->db,VAR_10);
        FUNC_10(VAR_2,VAR_20[VAR_9],VAR_10,VAR_8->db->id);
        if (VAR_12)
            FUNC_10(VAR_1,"del",VAR_10,VAR_8->db->id);
    }
    VAR_6.dirty += VAR_13;
    FUNC_2(VAR_8,VAR_13);

cleanup:
    if (VAR_9 == 130) FUNC_17(&VAR_15);
}
