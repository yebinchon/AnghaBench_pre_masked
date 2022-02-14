
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {size_t slot; scalar_t__ slave; } ;
typedef TYPE_1__ redisClusterNode ;
struct TYPE_11__ {size_t redir_slot; char* redir_host; int redir_port; TYPE_1__** master; int redir_host_len; int nodes; } ;
typedef TYPE_2__ redisCluster ;
typedef int key ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,char*,int) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,char*,int ,int,size_t,int ) ;
 size_t FUNC_3 (char*,int,char*,char*,int) ;
 int FUNC_4 (int ,char*,size_t,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(redisCluster *VAR_0) {
    redisClusterNode *VAR_1;
    char VAR_2[1024];
    size_t VAR_3;


    if (VAR_0->master[VAR_0->redir_slot]) {

        if (!FUNC_0(VAR_0)) {
            return;
        }


        VAR_1 = FUNC_1(VAR_0, VAR_0->redir_host, VAR_0->redir_port);

        if (VAR_1) {

            VAR_0->master[VAR_0->redir_slot] = VAR_1;
        } else {

            VAR_1 = FUNC_2(VAR_0, VAR_0->redir_host, VAR_0->redir_host_len,
                VAR_0->redir_port, VAR_0->redir_slot, 0);


            VAR_3 = FUNC_3(VAR_2, sizeof(VAR_2), "%s:%d", VAR_0->redir_host, VAR_0->redir_port);
            FUNC_4(VAR_0->nodes, VAR_2, VAR_3, VAR_1);


            VAR_0->master[VAR_0->redir_slot] = VAR_1;
        }
    } else {

        VAR_1 = FUNC_1(VAR_0, VAR_0->redir_host, VAR_0->redir_port);
        if (!VAR_1) {
            VAR_1 = FUNC_2(VAR_0, VAR_0->redir_host, VAR_0->redir_host_len,
                VAR_0->redir_port, VAR_0->redir_slot, 0);
        }


        VAR_0->master[VAR_0->redir_slot] = VAR_1;
    }


    VAR_1->slot = VAR_0->redir_slot;



    VAR_1->slave = 0;
}
