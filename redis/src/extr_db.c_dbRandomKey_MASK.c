
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sds ;
typedef int robj ;
struct TYPE_5__ {int expires; int dict; } ;
typedef TYPE_1__ redisDb ;
typedef int dictEntry ;
struct TYPE_6__ {scalar_t__ masterhost; } ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int ) ;
 TYPE_2__ VAR_0 ;

robj *FUNC_8(redisDb *VAR_1) {
    dictEntry *VAR_2;
    int VAR_3 = 100;
    int VAR_4 = FUNC_5(VAR_1->dict) == FUNC_5(VAR_1->expires);

    while(1) {
        sds VAR_5;
        robj *VAR_6;

        VAR_2 = FUNC_3(VAR_1->dict);
        if (VAR_2 == ((void*)0)) return ((void*)0);

        VAR_5 = FUNC_4(VAR_2);
        VAR_6 = FUNC_0(VAR_5,FUNC_7(VAR_5));
        if (FUNC_2(VAR_1->expires,VAR_5)) {
            if (VAR_4 && VAR_0.masterhost && --VAR_3 == 0) {
                return VAR_6;
            }
            if (FUNC_6(VAR_1,VAR_6)) {
                FUNC_1(VAR_6);
                continue;
            }
        }
        return VAR_6;
    }
}
