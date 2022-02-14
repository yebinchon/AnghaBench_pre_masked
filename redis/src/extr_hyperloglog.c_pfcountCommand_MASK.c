
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct hllhdr {int* card; int encoding; } ;
struct TYPE_16__ {struct hllhdr* ptr; } ;
typedef TYPE_1__ robj ;
typedef int max ;
struct TYPE_17__ {int argc; int * argv; int db; } ;
typedef TYPE_2__ client ;
struct TYPE_19__ {int dirty; } ;
struct TYPE_18__ {int czero; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct hllhdr*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_4 (int ,int ,TYPE_1__*) ;
 int FUNC_5 (struct hllhdr*,int*) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int ,int ) ;
 TYPE_1__* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int ) ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_12 (int ,int ) ;

void FUNC_13(client *VAR_8) {
    robj *VAR_9;
    struct hllhdr *VAR_10;
    uint64_t VAR_11;





    if (VAR_8->argc > 2) {
        uint8_t VAR_12[VAR_2+VAR_4], *VAR_13;
        int VAR_14;


        FUNC_10(VAR_12,0,sizeof(VAR_12));
        VAR_10 = (struct hllhdr*) VAR_12;
        VAR_10->encoding = VAR_3;
        VAR_13 = VAR_12 + VAR_2;
        for (VAR_14 = 1; VAR_14 < VAR_8->argc; VAR_14++) {

            robj *VAR_15 = FUNC_8(VAR_8->db,VAR_8->argv[VAR_14]);
            if (VAR_15 == ((void*)0)) continue;
            if (FUNC_7(VAR_8,VAR_15) != VAR_1) return;



            if (FUNC_6(VAR_13,VAR_15) == VAR_0) {
                FUNC_3(VAR_8,FUNC_11(VAR_5));
                return;
            }
        }


        FUNC_2(VAR_8,FUNC_5(VAR_10,((void*)0)));
        return;
    }





    VAR_9 = FUNC_9(VAR_8->db,VAR_8->argv[1]);
    if (VAR_9 == ((void*)0)) {


        FUNC_1(VAR_8,VAR_7.czero);
    } else {
        if (FUNC_7(VAR_8,VAR_9) != VAR_1) return;
        VAR_9 = FUNC_4(VAR_8->db,VAR_8->argv[1],VAR_9);


        VAR_10 = VAR_9->ptr;
        if (FUNC_0(VAR_10)) {

            VAR_11 = (uint64_t)VAR_10->card[0];
            VAR_11 |= (uint64_t)VAR_10->card[1] << 8;
            VAR_11 |= (uint64_t)VAR_10->card[2] << 16;
            VAR_11 |= (uint64_t)VAR_10->card[3] << 24;
            VAR_11 |= (uint64_t)VAR_10->card[4] << 32;
            VAR_11 |= (uint64_t)VAR_10->card[5] << 40;
            VAR_11 |= (uint64_t)VAR_10->card[6] << 48;
            VAR_11 |= (uint64_t)VAR_10->card[7] << 56;
        } else {
            int VAR_16 = 0;

            VAR_11 = FUNC_5(VAR_10,&VAR_16);
            if (VAR_16) {
                FUNC_3(VAR_8,FUNC_11(VAR_5));
                return;
            }
            VAR_10->card[0] = VAR_11 & 0xff;
            VAR_10->card[1] = (VAR_11 >> 8) & 0xff;
            VAR_10->card[2] = (VAR_11 >> 16) & 0xff;
            VAR_10->card[3] = (VAR_11 >> 24) & 0xff;
            VAR_10->card[4] = (VAR_11 >> 32) & 0xff;
            VAR_10->card[5] = (VAR_11 >> 40) & 0xff;
            VAR_10->card[6] = (VAR_11 >> 48) & 0xff;
            VAR_10->card[7] = (VAR_11 >> 56) & 0xff;




            FUNC_12(VAR_8->db,VAR_8->argv[1]);
            VAR_6.dirty++;
        }
        FUNC_2(VAR_8,VAR_11);
    }
}
