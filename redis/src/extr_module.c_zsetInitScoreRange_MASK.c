
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zskiplist ;
struct TYPE_14__ {int * zsl; } ;
typedef TYPE_2__ zset ;
struct TYPE_15__ {double min; double max; int minex; int maxex; } ;
typedef TYPE_3__ zrangespec ;
struct TYPE_16__ {int zer; int * zcurrent; TYPE_1__* value; TYPE_3__ zrs; int ztype; } ;
struct TYPE_13__ {scalar_t__ type; scalar_t__ encoding; TYPE_2__* ptr; } ;
typedef TYPE_4__ RedisModuleKey ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,TYPE_3__*) ;
 int * FUNC_3 (int *,TYPE_3__*) ;
 int * FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int * FUNC_5 (TYPE_2__*,TYPE_3__*) ;

int FUNC_6(RedisModuleKey *VAR_6, double VAR_7, double VAR_8, int VAR_9, int VAR_10, int VAR_11) {
    if (!VAR_6->value || VAR_6->value->type != VAR_2) return VAR_3;

    FUNC_0(VAR_6);
    VAR_6->ztype = VAR_5;
    VAR_6->zer = 0;



    zrangespec *VAR_12 = &VAR_6->zrs;
    VAR_12->min = VAR_7;
    VAR_12->max = VAR_8;
    VAR_12->minex = VAR_9;
    VAR_12->maxex = VAR_10;

    if (VAR_6->value->encoding == VAR_1) {
        VAR_6->zcurrent = VAR_11 ? FUNC_4(VAR_6->value->ptr,VAR_12) :
                                FUNC_5(VAR_6->value->ptr,VAR_12);
    } else if (VAR_6->value->encoding == VAR_0) {
        zset *VAR_13 = VAR_6->value->ptr;
        zskiplist *VAR_14 = VAR_13->zsl;
        VAR_6->zcurrent = VAR_11 ? FUNC_2(VAR_14,VAR_12) :
                                FUNC_3(VAR_14,VAR_12);
    } else {
        FUNC_1("Unsupported zset encoding");
    }
    if (VAR_6->zcurrent == ((void*)0)) VAR_6->zer = 1;
    return VAR_4;
}
