
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; int bytes; int rio; } ;
typedef TYPE_1__ RedisModuleIO ;


 int VAR_0 ;
 int FUNC_0 (int ,float) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(RedisModuleIO *VAR_1, float VAR_2) {
    if (VAR_1->error) return;

    int VAR_3 = FUNC_1(VAR_1->rio, VAR_0);
    if (VAR_3 == -1) goto saveerr;
    VAR_1->bytes += VAR_3;

    VAR_3 = FUNC_0(VAR_1->rio, VAR_2);
    if (VAR_3 == -1) goto saveerr;
    VAR_1->bytes += VAR_3;
    return;

saveerr:
    VAR_1->error = 1;
}
