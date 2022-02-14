
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {int error; int bytes; int rio; } ;
typedef TYPE_1__ RedisModuleIO ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned char*,size_t) ;

void FUNC_2(RedisModuleIO *VAR_1, const char *VAR_2, size_t VAR_3) {
    if (VAR_1->error) return;

    ssize_t VAR_4 = FUNC_0(VAR_1->rio, VAR_0);
    if (VAR_4 == -1) goto saveerr;
    VAR_1->bytes += VAR_4;

    VAR_4 = FUNC_1(VAR_1->rio, (unsigned char*)VAR_2,VAR_3);
    if (VAR_4 == -1) goto saveerr;
    VAR_1->bytes += VAR_4;
    return;

saveerr:
    VAR_1->error = 1;
}
