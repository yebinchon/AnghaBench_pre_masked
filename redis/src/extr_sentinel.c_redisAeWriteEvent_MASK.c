
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int context; } ;
typedef TYPE_1__ redisAeEvents ;
typedef int aeEventLoop ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(aeEventLoop *VAR_0, int VAR_1, void *VAR_2, int VAR_3) {
    ((void)VAR_0); ((void)VAR_1); ((void)VAR_3);

    redisAeEvents *VAR_4 = (redisAeEvents*)VAR_2;
    FUNC_0(VAR_4->context);
}
