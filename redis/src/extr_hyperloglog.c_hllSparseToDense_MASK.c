
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct hllhdr {scalar_t__ encoding; int registers; } ;
typedef scalar_t__ sds ;
struct TYPE_3__ {scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int *,int ) ;

int FUNC_10(robj *VAR_6) {
    sds VAR_7 = VAR_6->ptr, VAR_8;
    struct hllhdr *VAR_9, *VAR_10 = (struct hllhdr*)VAR_7;
    int VAR_11 = 0, VAR_12, VAR_13;
    uint8_t *VAR_14 = (uint8_t*)VAR_7, *VAR_15 = VAR_14+FUNC_8(VAR_7);


    VAR_9 = (struct hllhdr*) VAR_7;
    if (VAR_9->encoding == VAR_2) return VAR_1;




    VAR_8 = FUNC_9(((void*)0),VAR_3);
    VAR_9 = (struct hllhdr*) VAR_8;
    *VAR_9 = *VAR_10;
    VAR_9->encoding = VAR_2;



    VAR_14 += VAR_4;
    while(VAR_14 < VAR_15) {
        if (FUNC_2(VAR_14)) {
            VAR_12 = FUNC_6(VAR_14);
            VAR_11 += VAR_12;
            VAR_14++;
        } else if (FUNC_1(VAR_14)) {
            VAR_12 = FUNC_5(VAR_14);
            VAR_11 += VAR_12;
            VAR_14 += 2;
        } else {
            VAR_12 = FUNC_3(VAR_14);
            VAR_13 = FUNC_4(VAR_14);
            if ((VAR_12 + VAR_11) > VAR_5) break;
            while(VAR_12--) {
                FUNC_0(VAR_9->registers,VAR_11,VAR_13);
                VAR_11++;
            }
            VAR_14++;
        }
    }



    if (VAR_11 != VAR_5) {
        FUNC_7(VAR_8);
        return VAR_0;
    }


    FUNC_7(VAR_6->ptr);
    VAR_6->ptr = VAR_8;
    return VAR_1;
}
