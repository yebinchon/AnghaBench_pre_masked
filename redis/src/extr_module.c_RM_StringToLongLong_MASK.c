
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptr; } ;
typedef TYPE_1__ RedisModuleString ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,long long*) ;

int FUNC_2(const RedisModuleString *VAR_2, long long *VAR_3) {
    return FUNC_1(VAR_2->ptr,FUNC_0(VAR_2->ptr),VAR_3) ? VAR_1 :
                                                     VAR_0;
}
