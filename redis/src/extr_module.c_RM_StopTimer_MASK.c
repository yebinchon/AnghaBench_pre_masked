
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int id ;
struct TYPE_8__ {scalar_t__ module; } ;
struct TYPE_7__ {scalar_t__ module; void* data; } ;
typedef int RedisModuleTimerID ;
typedef TYPE_1__ RedisModuleTimer ;
typedef TYPE_2__ RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ,unsigned char*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,unsigned char*,int,int *) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(RedisModuleCtx *VAR_4, RedisModuleTimerID VAR_5, void **VAR_6) {
    RedisModuleTimer *VAR_7 = FUNC_0(VAR_2,(unsigned char*)&VAR_5,sizeof(VAR_5));
    if (VAR_7 == VAR_3 || VAR_7->module != VAR_4->module)
        return VAR_0;
    if (VAR_6) *VAR_6 = VAR_7->data;
    FUNC_1(VAR_2,(unsigned char*)&VAR_5,sizeof(VAR_5),((void*)0));
    FUNC_2(VAR_7);
    return VAR_1;
}
