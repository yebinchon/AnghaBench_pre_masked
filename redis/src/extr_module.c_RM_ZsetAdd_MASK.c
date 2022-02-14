
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_8__ {int mode; TYPE_3__* value; } ;
struct TYPE_7__ {int ptr; } ;
typedef TYPE_1__ RedisModuleString ;
typedef TYPE_2__ RedisModuleKey ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,double,int ,int*,int *) ;

int FUNC_4(RedisModuleKey *VAR_5, double VAR_6, RedisModuleString *VAR_7, int *VAR_8) {
    int VAR_9 = 0;
    if (!(VAR_5->mode & VAR_4)) return VAR_1;
    if (VAR_5->value && VAR_5->value->type != VAR_0) return VAR_1;
    if (VAR_5->value == ((void*)0)) FUNC_2(VAR_5,VAR_2);
    if (VAR_8) VAR_9 = FUNC_1(*VAR_8);
    if (FUNC_3(VAR_5->value,VAR_6,VAR_7->ptr,&VAR_9,((void*)0)) == 0) {
        if (VAR_8) *VAR_8 = 0;
        return VAR_1;
    }
    if (VAR_8) *VAR_8 = FUNC_0(VAR_9);
    return VAR_3;
}
