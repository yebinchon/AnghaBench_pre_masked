
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_5__ {int mode; TYPE_3__* value; } ;
typedef int RedisModuleString ;
typedef TYPE_1__ RedisModuleKey ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(RedisModuleKey *VAR_8, int VAR_9, RedisModuleString *VAR_10) {
    if (!(VAR_8->mode & VAR_7)) return VAR_3;
    if (VAR_8->value && VAR_8->value->type != VAR_0) return VAR_3;
    if (VAR_8->value == ((void*)0)) FUNC_1(VAR_8,VAR_4);
    FUNC_0(VAR_8->value, VAR_10,
        (VAR_9 == VAR_5) ? VAR_1 : VAR_2);
    return VAR_6;
}
