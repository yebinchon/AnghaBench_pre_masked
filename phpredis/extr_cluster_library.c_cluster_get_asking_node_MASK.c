
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int redisClusterNode ;
struct TYPE_4__ {char* redir_host; int redir_port; int redir_slot; int redir_host_len; int nodes; } ;
typedef TYPE_1__ redisCluster ;
typedef int key ;


 int * FUNC_0 (TYPE_1__*,char*,int ,int,int ,int ) ;
 int FUNC_1 (char*,int,char*,char*,int) ;
 int * FUNC_2 (int ,char*,int) ;

__attribute__((used)) static redisClusterNode *FUNC_3(redisCluster *VAR_0) {
    redisClusterNode *VAR_1;
    char VAR_2[1024];
    int VAR_3;


    VAR_3 = FUNC_1(VAR_2, sizeof(VAR_2), "%s:%u", VAR_0->redir_host, VAR_0->redir_port);


    if ((VAR_1 = FUNC_2(VAR_0->nodes, VAR_2, VAR_3)) != ((void*)0)) {
        return VAR_1;
    }


    VAR_1 = FUNC_0(VAR_0, VAR_0->redir_host, VAR_0->redir_host_len,
        VAR_0->redir_port, VAR_0->redir_slot, 0);


   return VAR_1;
}
