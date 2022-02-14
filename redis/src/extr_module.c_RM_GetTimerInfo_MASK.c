
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int64_t ;
typedef int id ;
struct TYPE_7__ {scalar_t__ module; } ;
struct TYPE_6__ {scalar_t__ module; void* data; } ;
typedef int RedisModuleTimerID ;
typedef TYPE_1__ RedisModuleTimer ;
typedef TYPE_2__ RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,unsigned char*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 () ;

int FUNC_3(RedisModuleCtx *VAR_4, RedisModuleTimerID VAR_5, uint64_t *VAR_6, void **VAR_7) {
    RedisModuleTimer *VAR_8 = FUNC_1(VAR_2,(unsigned char*)&VAR_5,sizeof(VAR_5));
    if (VAR_8 == VAR_3 || VAR_8->module != VAR_4->module)
        return VAR_0;
    if (VAR_6) {
        int64_t VAR_9 = FUNC_0(VAR_5)-FUNC_2();
        if (VAR_9 < 0) VAR_9 = 0;
        *VAR_6 = VAR_9/1000;
    }
    if (VAR_7) *VAR_7 = VAR_8->data;
    return VAR_1;
}
