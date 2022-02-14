
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,double,int ,int*,double*) ;

int FUNC_4(RedisModuleKey *VAR_7, double VAR_8, RedisModuleString *VAR_9, int *VAR_10, double *VAR_11) {
    int VAR_12 = 0;
    if (!(VAR_7->mode & VAR_4)) return VAR_1;
    if (VAR_7->value && VAR_7->value->type != VAR_0) return VAR_1;
    if (VAR_7->value == ((void*)0)) FUNC_2(VAR_7,VAR_2);
    if (VAR_10) VAR_12 = FUNC_1(*VAR_10);
    VAR_12 |= VAR_5;
    if (FUNC_3(VAR_7->value,VAR_8,VAR_9->ptr,&VAR_12,VAR_11) == 0) {
        if (VAR_10) *VAR_10 = 0;
        return VAR_1;
    }

    if (VAR_10 && (*VAR_10 & VAR_6)) {
        *VAR_10 = 0;
        return VAR_1;
    }
    if (VAR_10) *VAR_10 = FUNC_0(VAR_12);
    return VAR_3;
}
