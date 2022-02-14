
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* errstr; } ;
typedef TYPE_1__ redisAsyncContext ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

void FUNC_1(const redisAsyncContext *VAR_1, int VAR_2) {
    if (VAR_2 != VAR_0) {
        FUNC_0("Error: %s\n", VAR_1->errstr);
        return;
    }
    FUNC_0("Disconnected...\n");
}
