
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ error; } ;
typedef TYPE_1__ RedisModuleIO ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_1__*,size_t*) ;
 int FUNC_2 (char*,size_t,long double*) ;

long double FUNC_3(RedisModuleIO *VAR_0) {
    if (VAR_0->error) return 0;
    long double VAR_1;
    size_t VAR_2;
    char* VAR_3 = FUNC_1(VAR_0,&VAR_2);
    if (!VAR_3) return 0;
    FUNC_2(VAR_3,VAR_2,&VAR_1);
    FUNC_0(VAR_3);
    return VAR_1;
}
