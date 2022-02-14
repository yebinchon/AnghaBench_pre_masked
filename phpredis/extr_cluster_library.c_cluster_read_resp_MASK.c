
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reply_len; int * line_reply; int reply_type; int cmd_sock; } ;
typedef TYPE_1__ redisCluster ;
typedef int clusterReply ;


 int * FUNC_0 (int ,int ,int *,int ) ;

clusterReply *FUNC_1(redisCluster *VAR_0, int VAR_1) {
    return FUNC_0(VAR_0->cmd_sock, VAR_0->reply_type,
                                  VAR_1 ? VAR_0->line_reply : ((void*)0),
                                  VAR_0->reply_len);
}
