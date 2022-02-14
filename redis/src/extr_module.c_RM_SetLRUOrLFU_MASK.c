
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
typedef TYPE_1__ RedisModuleKey ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,long long,long long,int ) ;

int FUNC_2(RedisModuleKey *VAR_2, long long VAR_3, long long VAR_4) {
    if (!VAR_2->value)
        return VAR_0;
    if (FUNC_1(VAR_2->value, VAR_3, VAR_4, VAR_4>=0 ? FUNC_0() : 0))
        return VAR_1;
    return VAR_0;
}
