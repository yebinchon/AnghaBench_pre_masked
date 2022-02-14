
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_7__ {int mode; TYPE_3__* value; } ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ RedisModuleString ;
typedef TYPE_2__ RedisModuleKey ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;

int FUNC_1(RedisModuleKey *VAR_4, RedisModuleString *VAR_5, int *VAR_6) {
    if (!(VAR_4->mode & VAR_3)) return VAR_1;
    if (VAR_4->value && VAR_4->value->type != VAR_0) return VAR_1;
    if (VAR_4->value != ((void*)0) && FUNC_0(VAR_4->value,VAR_5->ptr)) {
        if (VAR_6) *VAR_6 = 1;
    } else {
        if (VAR_6) *VAR_6 = 0;
    }
    return VAR_2;
}
