
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* rpc_proc; } ;
struct rpc_task {int tk_action; int tk_pid; TYPE_2__ tk_msg; struct rpc_clnt* tk_client; } ;
struct rpc_clnt {size_t cl_vers; TYPE_5__* cl_stats; TYPE_4__* cl_program; } ;
struct TYPE_10__ {int rpccnt; } ;
struct TYPE_9__ {TYPE_3__** version; int name; } ;
struct TYPE_8__ {int * counts; } ;
struct TYPE_6__ {int p_statidx; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,size_t,int ,char*) ;
 int FUNC_2 (struct rpc_task*) ;
 int FUNC_3 (struct rpc_task*,struct rpc_clnt*) ;
 int FUNC_4 (struct rpc_task*) ;

__attribute__((used)) static void
FUNC_5(struct rpc_task *VAR_1)
{
 struct rpc_clnt *VAR_2 = VAR_1->tk_client;
 int VAR_3 = VAR_1->tk_msg.rpc_proc->p_statidx;

 FUNC_4(VAR_1);
 FUNC_1("RPC: %5u call_start %s%d proc %s (%s)\n", VAR_1->tk_pid,
   VAR_2->cl_program->name, VAR_2->cl_vers,
   FUNC_2(VAR_1),
   (FUNC_0(VAR_1) ? "async" : "sync"));


 if (VAR_2->cl_program->version[VAR_2->cl_vers])
  VAR_2->cl_program->version[VAR_2->cl_vers]->counts[VAR_3]++;
 VAR_2->cl_stats->rpccnt++;
 VAR_1->tk_action = VAR_0;
 FUNC_3(VAR_1, VAR_2);
}
