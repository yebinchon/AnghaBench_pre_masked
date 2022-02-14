
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int robj ;
struct TYPE_11__ {TYPE_1__* client; } ;
struct TYPE_10__ {int mode; int * iter; int * value; int * key; int db; TYPE_3__* ctx; } ;
struct TYPE_9__ {int db; } ;
typedef TYPE_2__ RedisModuleKey ;
typedef TYPE_3__ RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *,int) ;
 int * FUNC_3 (int ,int *,int) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;

void *FUNC_6(RedisModuleCtx *VAR_4, robj *VAR_5, int VAR_6) {
    RedisModuleKey *VAR_7;
    robj *VAR_8;
    int VAR_9 = VAR_6 & VAR_2? VAR_0: 0;

    if (VAR_6 & VAR_3) {
        VAR_8 = FUNC_3(VAR_4->client->db,VAR_5, VAR_9);
    } else {
        VAR_8 = FUNC_2(VAR_4->client->db,VAR_5, VAR_9);
        if (VAR_8 == ((void*)0)) {
            return ((void*)0);
        }
    }


    VAR_7 = FUNC_4(sizeof(*VAR_7));
    VAR_7->ctx = VAR_4;
    VAR_7->db = VAR_4->client->db;
    VAR_7->key = VAR_5;
    FUNC_1(VAR_5);
    VAR_7->value = VAR_8;
    VAR_7->iter = ((void*)0);
    VAR_7->mode = VAR_6;
    FUNC_5(VAR_7);
    FUNC_0(VAR_4,VAR_1,VAR_7);
    return (void*)VAR_7;
}
