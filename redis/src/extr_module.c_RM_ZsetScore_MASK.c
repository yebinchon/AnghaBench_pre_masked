
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_7__ {TYPE_3__* value; } ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ RedisModuleString ;
typedef TYPE_2__ RedisModuleKey ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ,double*) ;

int FUNC_1(RedisModuleKey *VAR_4, RedisModuleString *VAR_5, double *VAR_6) {
    if (VAR_4->value == ((void*)0)) return VAR_2;
    if (VAR_4->value->type != VAR_1) return VAR_2;
    if (FUNC_0(VAR_4->value,VAR_5->ptr,VAR_6) == VAR_0) return VAR_2;
    return VAR_3;
}
