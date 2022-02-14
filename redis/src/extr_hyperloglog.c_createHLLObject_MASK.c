
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct hllhdr {int encoding; int magic; } ;
typedef scalar_t__ sds ;
struct TYPE_4__ {struct hllhdr* ptr; } ;
typedef TYPE_1__ robj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;

robj *FUNC_5(void) {
    robj *VAR_5;
    struct hllhdr *VAR_6;
    sds VAR_7;
    uint8_t *VAR_8;
    int VAR_9 = VAR_0 +
                    (((VAR_1+(VAR_3-1)) /
                     VAR_3)*2);
    int VAR_10;



    VAR_10 = VAR_1;
    VAR_7 = FUNC_3(((void*)0),VAR_9);
    VAR_8 = (uint8_t*)VAR_7 + VAR_0;
    while(VAR_10) {
        int VAR_11 = VAR_3;
        if (VAR_11 > VAR_10) VAR_11 = VAR_10;
        FUNC_0(VAR_8,VAR_11);
        VAR_8 += 2;
        VAR_10 -= VAR_11;
    }
    FUNC_4((VAR_8-(uint8_t*)VAR_7) == VAR_9);


    VAR_5 = FUNC_1(VAR_4,VAR_7);
    VAR_6 = VAR_5->ptr;
    FUNC_2(VAR_6->magic,"HYLL",4);
    VAR_6->encoding = VAR_2;
    return VAR_5;
}
