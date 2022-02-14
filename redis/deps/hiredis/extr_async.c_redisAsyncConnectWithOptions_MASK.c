
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int options; } ;
typedef TYPE_1__ redisOptions ;
typedef int redisContext ;
typedef int redisAsyncContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

redisAsyncContext *FUNC_4(const redisOptions *VAR_1) {
    redisOptions VAR_2 = *VAR_1;
    redisContext *VAR_3;
    redisAsyncContext *VAR_4;

    VAR_2.options |= VAR_0;
    VAR_3 = FUNC_2(&VAR_2);
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_4 = FUNC_1(VAR_3);
    if (VAR_4 == ((void*)0)) {
        FUNC_3(VAR_3);
        return ((void*)0);
    }
    FUNC_0(VAR_4);
    return VAR_4;
}
