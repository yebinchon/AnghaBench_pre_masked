
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ mstime_t ;
struct TYPE_5__ {int mode; int key; int db; TYPE_1__* ctx; int * value; } ;
struct TYPE_4__ {int client; } ;
typedef TYPE_2__ RedisModuleKey ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;

int FUNC_3(RedisModuleKey *VAR_4, mstime_t VAR_5) {
    if (!(VAR_4->mode & VAR_3) || VAR_4->value == ((void*)0))
        return VAR_0;
    if (VAR_5 != VAR_1) {
        VAR_5 += FUNC_0();
        FUNC_2(VAR_4->ctx->client,VAR_4->db,VAR_4->key,VAR_5);
    } else {
        FUNC_1(VAR_4->db,VAR_4->key);
    }
    return VAR_2;
}
