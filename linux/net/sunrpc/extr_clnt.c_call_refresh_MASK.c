
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {TYPE_2__* tk_client; scalar_t__ tk_status; int tk_action; } ;
struct TYPE_4__ {TYPE_1__* cl_stats; } ;
struct TYPE_3__ {int rpcauthrefresh; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*) ;

__attribute__((used)) static void
FUNC_2(struct rpc_task *VAR_1)
{
 FUNC_0(VAR_1);

 VAR_1->tk_action = VAR_0;
 VAR_1->tk_status = 0;
 VAR_1->tk_client->cl_stats->rpcauthrefresh++;
 FUNC_1(VAR_1);
}
