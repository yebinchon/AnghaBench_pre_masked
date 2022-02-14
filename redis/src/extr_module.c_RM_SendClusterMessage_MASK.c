
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_7__ {int cluster_enabled; } ;
struct TYPE_6__ {TYPE_1__* module; } ;
struct TYPE_5__ {int name; } ;
typedef TYPE_2__ RedisModuleCtx ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ,int ,unsigned char*,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_3__ VAR_3 ;

int FUNC_2(RedisModuleCtx *VAR_4, char *VAR_5, uint8_t VAR_6, unsigned char *VAR_7, uint32_t VAR_8) {
    if (!VAR_3.cluster_enabled) return VAR_1;
    uint64_t VAR_9 = FUNC_1(VAR_4->module->name,0);
    if (FUNC_0(VAR_5,VAR_9,VAR_6,VAR_7,VAR_8) == VAR_0)
        return VAR_2;
    else
        return VAR_1;
}
