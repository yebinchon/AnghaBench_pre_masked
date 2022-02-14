
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* masterhost; int second_replid_offset; int master_repl_offset; int replid2; int replid; int masterport; } ;
struct TYPE_4__ {int version; char* masterhost; int repl2_offset; int repl1_offset; int replid2; int replid1; int masterport; int master; } ;
typedef TYPE_1__ RedisModuleReplicationInfoV1 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_2__ VAR_2 ;

int FUNC_1(void *VAR_3, int VAR_4) {
    if (VAR_4 != 1) return VAR_0;

    RedisModuleReplicationInfoV1 *VAR_5 = VAR_3;
    FUNC_0(VAR_5,0,sizeof(*VAR_5));
    VAR_5->version = VAR_4;
    VAR_5->master = VAR_2.masterhost==((void*)0);
    VAR_5->masterhost = VAR_2.masterhost? VAR_2.masterhost: "";
    VAR_5->masterport = VAR_2.masterport;
    VAR_5->replid1 = VAR_2.replid;
    VAR_5->replid2 = VAR_2.replid2;
    VAR_5->repl1_offset = VAR_2.master_repl_offset;
    VAR_5->repl2_offset = VAR_2.second_replid_offset;
    return VAR_1;
}
