
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wantRead; int pendingWrite; } ;
typedef TYPE_1__ redisSSLContext ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(redisSSLContext *VAR_2, int VAR_3) {




    if (VAR_3 == VAR_0) {
        VAR_2->wantRead = 1;
        return 1;
    } else if (VAR_3 == VAR_1) {
        VAR_2->pendingWrite = 1;
        return 1;
    } else {
        return 0;
    }
}
