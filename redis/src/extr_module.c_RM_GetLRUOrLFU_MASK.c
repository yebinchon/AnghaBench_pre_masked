
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int maxmemory_policy; } ;
struct TYPE_4__ {int value; } ;
typedef TYPE_1__ RedisModuleKey ;


 long long FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_3 ;

int FUNC_2(RedisModuleKey *VAR_4, long long *VAR_5, long long *VAR_6) {
    *VAR_6 = *VAR_5 = -1;
    if (!VAR_4->value)
        return VAR_1;
    if (VAR_3.maxmemory_policy & VAR_0) {
        *VAR_5 = FUNC_0(VAR_4->value);
    } else {
        *VAR_6 = FUNC_1(VAR_4->value)/1000;
    }
    return VAR_2;
}
