
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct hllhdr {scalar_t__ encoding; int registers; } ;
typedef struct hllhdr uint8_t ;
typedef struct hllhdr* sds ;
struct TYPE_22__ {struct hllhdr* ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_23__ {int argc; TYPE_7__** argv; int db; } ;
typedef TYPE_2__ client ;
struct TYPE_26__ {char* ptr; } ;
struct TYPE_25__ {int dirty; } ;
struct TYPE_24__ {int czero; int cone; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hllhdr,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct hllhdr*) ;
 scalar_t__ FUNC_2 (struct hllhdr*) ;
 int FUNC_3 (struct hllhdr*) ;
 int FUNC_4 (struct hllhdr*) ;
 int FUNC_5 (struct hllhdr*) ;
 int FUNC_6 (struct hllhdr*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,struct hllhdr*,int ) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (TYPE_2__*,char*,char*) ;
 int FUNC_12 (TYPE_2__*,struct hllhdr) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (TYPE_2__*,char*) ;
 TYPE_1__* FUNC_15 (int ,TYPE_7__*,TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_17 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_18 (int ,TYPE_7__*) ;
 struct hllhdr* FUNC_19 (struct hllhdr*,char*,int,...) ;
 struct hllhdr* FUNC_20 () ;
 int FUNC_21 (struct hllhdr*) ;
 int FUNC_22 (struct hllhdr*) ;
 int FUNC_23 (int ) ;
 struct hllhdr* FUNC_24 (struct hllhdr*,char*) ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_25 (char*,char*) ;

void FUNC_26(client *VAR_8) {
    char *VAR_9 = VAR_8->argv[1]->ptr;
    struct hllhdr *VAR_10;
    robj *VAR_11;
    int VAR_12;

    VAR_11 = FUNC_18(VAR_8->db,VAR_8->argv[2]);
    if (VAR_11 == ((void*)0)) {
        FUNC_10(VAR_8,"The specified key does not exist");
        return;
    }
    if (FUNC_17(VAR_8,VAR_11) != VAR_1) return;
    VAR_11 = FUNC_15(VAR_8->db,VAR_8->argv[2],VAR_11);
    VAR_10 = VAR_11->ptr;


    if (!FUNC_25(VAR_9,"getreg")) {
        if (VAR_8->argc != 3) goto arityerr;

        if (VAR_10->encoding == VAR_4) {
            if (FUNC_16(VAR_11) == VAR_0) {
                FUNC_13(VAR_8,FUNC_23(VAR_5));
                return;
            }
            VAR_6.dirty++;
        }

        VAR_10 = VAR_11->ptr;
        FUNC_8(VAR_8,VAR_3);
        for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
            uint8_t VAR_13;

            FUNC_0(VAR_13,VAR_10->registers,VAR_12);
            FUNC_12(VAR_8,VAR_13);
        }
    }

    else if (!FUNC_25(VAR_9,"decode")) {
        if (VAR_8->argc != 3) goto arityerr;

        uint8_t *VAR_14 = VAR_11->ptr, *VAR_15 = VAR_14+FUNC_22(VAR_11->ptr);
        sds VAR_16 = FUNC_20();

        if (VAR_10->encoding != VAR_4) {
            FUNC_10(VAR_8,"HLL encoding is not sparse");
            return;
        }

        VAR_14 += VAR_2;
        while(VAR_14 < VAR_15) {
            int VAR_17, VAR_18;

            if (FUNC_2(VAR_14)) {
                VAR_17 = FUNC_6(VAR_14);
                VAR_14++;
                VAR_16 = FUNC_19(VAR_16,"z:%d ",VAR_17);
            } else if (FUNC_1(VAR_14)) {
                VAR_17 = FUNC_5(VAR_14);
                VAR_14 += 2;
                VAR_16 = FUNC_19(VAR_16,"Z:%d ",VAR_17);
            } else {
                VAR_17 = FUNC_3(VAR_14);
                VAR_18 = FUNC_4(VAR_14);
                VAR_14++;
                VAR_16 = FUNC_19(VAR_16,"v:%d,%d ",VAR_18,VAR_17);
            }
        }
        VAR_16 = FUNC_24(VAR_16," ");
        FUNC_9(VAR_8,VAR_16,FUNC_22(VAR_16));
        FUNC_21(VAR_16);
    }

    else if (!FUNC_25(VAR_9,"encoding")) {
        char *VAR_19[2] = {"dense","sparse"};
        if (VAR_8->argc != 3) goto arityerr;

        FUNC_14(VAR_8,VAR_19[VAR_10->encoding]);
    }

    else if (!FUNC_25(VAR_9,"todense")) {
        int VAR_20 = 0;
        if (VAR_8->argc != 3) goto arityerr;

        if (VAR_10->encoding == VAR_4) {
            if (FUNC_16(VAR_11) == VAR_0) {
                FUNC_13(VAR_8,FUNC_23(VAR_5));
                return;
            }
            VAR_20 = 1;
            VAR_6.dirty++;
        }
        FUNC_7(VAR_8,VAR_20 ? VAR_7.cone : VAR_7.czero);
    } else {
        FUNC_11(VAR_8,"Unknown PFDEBUG subcommand '%s'", VAR_9);
    }
    return;

arityerr:
    FUNC_11(VAR_8,
        "Wrong number of arguments for the '%s' subcommand",VAR_9);
}
