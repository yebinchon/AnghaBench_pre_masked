
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mstime_t ;
struct TYPE_3__ {int * value; int key; int db; } ;
typedef TYPE_1__ RedisModuleKey ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 () ;

mstime_t FUNC_2(RedisModuleKey *VAR_0) {
    mstime_t VAR_1 = FUNC_0(VAR_0->db,VAR_0->key);
    if (VAR_1 == -1 || VAR_0->value == ((void*)0)) return -1;
    VAR_1 -= FUNC_1();
    return VAR_1 >= 0 ? VAR_1 : 0;
}
