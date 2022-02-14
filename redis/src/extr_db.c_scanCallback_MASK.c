
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ sds ;
struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ robj ;
typedef int list ;
typedef int dictEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (scalar_t__,int ) ;
 TYPE_1__* FUNC_1 (double,int ) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;

void FUNC_7(void *VAR_3, const dictEntry *VAR_4) {
    void **VAR_5 = (void**) VAR_3;
    list *VAR_6 = VAR_5[0];
    robj *VAR_7 = VAR_5[1];
    robj *VAR_8, *VAR_9 = ((void*)0);

    if (VAR_7 == ((void*)0)) {
        sds VAR_10 = FUNC_2(VAR_4);
        VAR_8 = FUNC_0(VAR_10, FUNC_5(VAR_10));
    } else if (VAR_7->type == VAR_1) {
        sds VAR_11 = FUNC_2(VAR_4);
        VAR_8 = FUNC_0(VAR_11,FUNC_5(VAR_11));
    } else if (VAR_7->type == VAR_0) {
        sds VAR_12 = FUNC_2(VAR_4);
        sds VAR_13 = FUNC_3(VAR_4);
        VAR_8 = FUNC_0(VAR_12,FUNC_5(VAR_12));
        VAR_9 = FUNC_0(VAR_13,FUNC_5(VAR_13));
    } else if (VAR_7->type == VAR_2) {
        sds VAR_14 = FUNC_2(VAR_4);
        VAR_8 = FUNC_0(VAR_14,FUNC_5(VAR_14));
        VAR_9 = FUNC_1(*(double*)FUNC_3(VAR_4),0);
    } else {
        FUNC_6("Type not handled in SCAN callback.");
    }

    FUNC_4(VAR_6, VAR_8);
    if (VAR_9) FUNC_4(VAR_6, VAR_9);
}
