
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int redisContext ;
struct TYPE_7__ {int c; } ;
typedef TYPE_1__ redisAsyncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int*) ;

void FUNC_5(redisAsyncContext *VAR_1) {
    redisContext *VAR_2 = &(VAR_1->c);
    int VAR_3 = 0;

    if (FUNC_4(VAR_2,&VAR_3) == VAR_0) {
        FUNC_3(VAR_1);
    } else {

        if (!VAR_3)
            FUNC_1(VAR_1);
        else
            FUNC_2(VAR_1);


        FUNC_0(VAR_1);
    }
}
