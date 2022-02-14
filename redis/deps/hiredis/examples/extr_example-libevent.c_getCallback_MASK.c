
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* str; } ;
typedef TYPE_1__ redisReply ;
struct TYPE_6__ {char* errstr; } ;
typedef TYPE_2__ redisAsyncContext ;


 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(redisAsyncContext *VAR_0, void *VAR_1, void *VAR_2) {
    redisReply *VAR_3 = VAR_1;
    if (VAR_3 == ((void*)0)) {
        if (VAR_0->errstr) {
            FUNC_0("errstr: %s\n", VAR_0->errstr);
        }
        return;
    }
    FUNC_0("argv[%s]: %s\n", (char*)VAR_2, VAR_3->str);


    FUNC_1(VAR_0);
}
