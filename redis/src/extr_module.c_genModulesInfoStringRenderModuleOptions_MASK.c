
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RedisModule {int options; } ;
typedef int sds ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;

sds FUNC_3(struct RedisModule *VAR_1) {
    sds VAR_2 = FUNC_1("[");
    if (VAR_1->options & VAR_0)
        VAR_2 = FUNC_0(VAR_2,"handle-io-errors|");
    VAR_2 = FUNC_2(VAR_2,"|");
    VAR_2 = FUNC_0(VAR_2,"]");
    return VAR_2;
}
