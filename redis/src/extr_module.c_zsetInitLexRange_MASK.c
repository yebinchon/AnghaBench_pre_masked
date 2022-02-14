
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zskiplist ;
struct TYPE_9__ {int * zsl; } ;
typedef TYPE_2__ zset ;
typedef int zlexrangespec ;
struct TYPE_10__ {int zer; int * zcurrent; TYPE_1__* value; int ztype; int zlrs; } ;
struct TYPE_8__ {scalar_t__ type; scalar_t__ encoding; TYPE_2__* ptr; } ;
typedef int RedisModuleString ;
typedef TYPE_3__ RedisModuleKey ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *,int *) ;
 int * FUNC_5 (TYPE_2__*,int *) ;
 int * FUNC_6 (TYPE_2__*,int *) ;

int FUNC_7(RedisModuleKey *VAR_7, RedisModuleString *VAR_8, RedisModuleString *VAR_9, int VAR_10) {
    if (!VAR_7->value || VAR_7->value->type != VAR_3) return VAR_4;

    FUNC_0(VAR_7);
    VAR_7->zer = 0;



    zlexrangespec *VAR_11 = &VAR_7->zlrs;
    if (FUNC_4(VAR_8, VAR_9, VAR_11) == VAR_0) return VAR_4;



    VAR_7->ztype = VAR_6;

    if (VAR_7->value->encoding == VAR_2) {
        VAR_7->zcurrent = VAR_10 ? FUNC_5(VAR_7->value->ptr,VAR_11) :
                                FUNC_6(VAR_7->value->ptr,VAR_11);
    } else if (VAR_7->value->encoding == VAR_1) {
        zset *VAR_12 = VAR_7->value->ptr;
        zskiplist *VAR_13 = VAR_12->zsl;
        VAR_7->zcurrent = VAR_10 ? FUNC_2(VAR_13,VAR_11) :
                                FUNC_3(VAR_13,VAR_11);
    } else {
        FUNC_1("Unsupported zset encoding");
    }
    if (VAR_7->zcurrent == ((void*)0)) VAR_7->zer = 1;

    return VAR_5;
}
