
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct hllhdr {int encoding; int registers; } ;
struct TYPE_24__ {struct hllhdr* ptr; } ;
typedef TYPE_1__ robj ;
typedef int max ;
struct TYPE_25__ {int argc; TYPE_3__* db; int * argv; } ;
typedef TYPE_2__ client ;
struct TYPE_28__ {int dirty; } ;
struct TYPE_27__ {int ok; } ;
struct TYPE_26__ {int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int FUNC_0 (struct hllhdr*) ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_3__*,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_3__*,int ,TYPE_1__*) ;
 int FUNC_6 (int ,int,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_11 (TYPE_3__*,int ) ;
 TYPE_1__* FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (scalar_t__*,int ,int) ;
 int FUNC_14 (int ,char*,int ,int ) ;
 int FUNC_15 (int ) ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_16 (TYPE_3__*,int ) ;

void FUNC_17(client *VAR_7) {
    uint8_t VAR_8[VAR_2];
    struct hllhdr *VAR_9;
    int VAR_10;
    int VAR_11 = 0;




    FUNC_13(VAR_8,0,sizeof(VAR_8));
    for (VAR_10 = 1; VAR_10 < VAR_7->argc; VAR_10++) {

        robj *VAR_12 = FUNC_11(VAR_7->db,VAR_7->argv[VAR_10]);
        if (VAR_12 == ((void*)0)) continue;
        if (FUNC_10(VAR_7,VAR_12) != VAR_1) return;



        VAR_9 = VAR_12->ptr;
        if (VAR_9->encoding == 129) VAR_11 = 1;



        if (FUNC_7(VAR_8,VAR_12) == VAR_0) {
            FUNC_2(VAR_7,FUNC_15(VAR_4));
            return;
        }
    }


    robj *VAR_13 = FUNC_12(VAR_7->db,VAR_7->argv[1]);
    if (VAR_13 == ((void*)0)) {



        VAR_13 = FUNC_3();
        FUNC_4(VAR_7->db,VAR_7->argv[1],VAR_13);
    } else {



        VAR_13 = FUNC_5(VAR_7->db,VAR_7->argv[1],VAR_13);
    }



    if (VAR_11 && FUNC_9(VAR_13) == VAR_0) {
        FUNC_2(VAR_7,FUNC_15(VAR_4));
        return;
    }



    for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
        if (VAR_8[VAR_10] == 0) continue;
        VAR_9 = VAR_13->ptr;
        switch(VAR_9->encoding) {
        case 129: FUNC_6(VAR_9->registers,VAR_10,VAR_8[VAR_10]); break;
        case 128: FUNC_8(VAR_13,VAR_10,VAR_8[VAR_10]); break;
        }
    }
    VAR_9 = VAR_13->ptr;

    FUNC_0(VAR_9);

    FUNC_16(VAR_7->db,VAR_7->argv[1]);


    FUNC_14(VAR_3,"pfadd",VAR_7->argv[1],VAR_7->db->id);
    VAR_5.dirty++;
    FUNC_1(VAR_7,VAR_6.ok);
}
