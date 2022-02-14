
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int uint8_t ;
typedef int uint64_t ;
struct hllhdr {scalar_t__ encoding; int registers; } ;
typedef scalar_t__ sds ;
struct TYPE_7__ {struct hllhdr* ptr; } ;
typedef TYPE_1__ robj ;
typedef unsigned int int64_t ;
typedef int ele ;
typedef int client ;
struct TYPE_9__ {int hll_sparse_max_bytes; } ;
struct TYPE_8__ {int ok; } ;


 int FUNC_0 (unsigned int,int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,unsigned long long,unsigned long long,...) ;
 int FUNC_5 (double) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,unsigned char*,int) ;
 scalar_t__ FUNC_9 (struct hllhdr*,int *) ;
 int FUNC_10 (int ,unsigned char*,int) ;
 int FUNC_11 (int ,int ,scalar_t__) ;
 unsigned int FUNC_12 () ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int *,scalar_t__) ;
 TYPE_3__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 double FUNC_15 (int) ;

void FUNC_16(client *VAR_8) {
    unsigned int VAR_9, VAR_10;
    sds VAR_11 = FUNC_14(((void*)0),VAR_0);
    struct hllhdr *VAR_12 = (struct hllhdr*) VAR_11, *VAR_13;
    robj *VAR_14 = ((void*)0);
    uint8_t VAR_15[VAR_2];





    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {


        for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
            unsigned int VAR_16 = FUNC_12() & VAR_3;

            VAR_15[VAR_10] = VAR_16;
            FUNC_1(VAR_12->registers,VAR_10,VAR_16);
        }

        for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
            unsigned int VAR_17;

            FUNC_0(VAR_17,VAR_12->registers,VAR_10);
            if (VAR_17 != VAR_15[VAR_10]) {
                FUNC_4(VAR_8,
                    "TESTFAILED Register %d should be %d but is %d",
                    VAR_10, (int) VAR_15[VAR_10], (int) VAR_17);
                goto cleanup;
            }
        }
    }
    FUNC_11(VAR_12->registers,0,VAR_0-VAR_1);
    VAR_14 = FUNC_6();
    double VAR_18 = 1.04/FUNC_15(VAR_2);
    int64_t VAR_19 = 1;
    uint64_t VAR_20 = (uint64_t)FUNC_12() | (uint64_t)FUNC_12() << 32;
    uint64_t VAR_21;
    for (VAR_9 = 1; VAR_9 <= 10000000; VAR_9++) {
        VAR_21 = VAR_9 ^ VAR_20;
        FUNC_10(VAR_12->registers,(unsigned char*)&VAR_21,sizeof(VAR_21));
        FUNC_8(VAR_14,(unsigned char*)&VAR_21,sizeof(VAR_21));



        if (VAR_9 == VAR_19 && VAR_9 < VAR_6.hll_sparse_max_bytes/2) {
            VAR_13 = VAR_14->ptr;
            if (VAR_13->encoding != VAR_4) {
                FUNC_3(VAR_8, "TESTFAILED sparse encoding not used");
                goto cleanup;
            }
        }


        if (VAR_9 == VAR_19 && FUNC_9(VAR_12,((void*)0)) != FUNC_9(VAR_14->ptr,((void*)0))) {
                FUNC_3(VAR_8, "TESTFAILED dense/sparse disagree");
                goto cleanup;
        }


        if (VAR_9 == VAR_19) {
            int64_t VAR_22 = VAR_19 - (int64_t)FUNC_9(VAR_12,((void*)0));
            uint64_t VAR_23 = FUNC_5(VAR_18*6*VAR_19);





            if (VAR_9 == 10) VAR_23 = 1;

            if (VAR_22 < 0) VAR_22 = -VAR_22;
            if (VAR_22 > (int64_t)VAR_23) {
                FUNC_4(VAR_8,
                    "TESTFAILED Too big error. card:%llu abserr:%llu",
                    (unsigned long long) VAR_19,
                    (unsigned long long) VAR_22);
                goto cleanup;
            }
            VAR_19 *= 10;
        }
    }


    FUNC_2(VAR_8,VAR_7.ok);

cleanup:
    FUNC_13(VAR_11);
    if (VAR_14) FUNC_7(VAR_14);
}
