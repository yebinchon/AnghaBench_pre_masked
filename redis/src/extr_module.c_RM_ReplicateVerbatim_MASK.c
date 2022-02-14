
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int dirty; } ;
struct TYPE_8__ {TYPE_2__* client; } ;
struct TYPE_7__ {int argc; int argv; TYPE_1__* db; int cmd; } ;
struct TYPE_6__ {int id; } ;
typedef TYPE_3__ RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 TYPE_4__ VAR_3 ;

int FUNC_1(RedisModuleCtx *VAR_4) {
    FUNC_0(VAR_4->client->cmd,VAR_4->client->db->id,
        VAR_4->client->argv,VAR_4->client->argc,
        VAR_0|VAR_1);
    VAR_3.dirty++;
    return VAR_2;
}
