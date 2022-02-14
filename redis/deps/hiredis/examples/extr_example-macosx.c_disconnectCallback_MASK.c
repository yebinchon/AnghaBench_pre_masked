
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* errstr; } ;
typedef TYPE_1__ redisAsyncContext ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;

void FUNC_3(const redisAsyncContext *VAR_1, int VAR_2) {
    if (VAR_2 != VAR_0) {
        FUNC_2("Error: %s\n", VAR_1->errstr);
        return;
    }
    FUNC_1(FUNC_0());
    FUNC_2("Disconnected...\n");
}
