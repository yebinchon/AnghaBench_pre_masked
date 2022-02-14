
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {int dummy; } ;
struct rpc_task {int tk_action; int tk_ops; int tk_status; int tk_flags; int tk_pid; TYPE_1__* tk_rqstp; int tk_waitqueue; struct rpc_clnt* tk_client; } ;
struct rpc_clnt {int cl_vers; TYPE_2__* cl_program; int cl_clid; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int rq_xid; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rpc_task*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (struct rpc_task*) ;
 int FUNC_5 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,char const*) ;

__attribute__((used)) static int
FUNC_6(struct seq_file *VAR_0, void *VAR_1)
{
 u32 VAR_2 = 0;
 struct rpc_task *VAR_3 = VAR_1;
 struct rpc_clnt *VAR_4 = VAR_3->tk_client;
 const char *VAR_5 = "none";

 if (FUNC_0(VAR_3))
  VAR_5 = FUNC_3(VAR_3->tk_waitqueue);

 if (VAR_3->tk_rqstp)
  VAR_2 = FUNC_1(VAR_3->tk_rqstp->rq_xid);

 FUNC_5(VAR_0, "%5u %04x %6d 0x%x 0x%x %8ld %ps %sv%u %s a:%ps q:%s\n",
  VAR_3->tk_pid, VAR_3->tk_flags, VAR_3->tk_status,
  VAR_4->cl_clid, VAR_2, FUNC_4(VAR_3), VAR_3->tk_ops,
  VAR_4->cl_program->name, VAR_4->cl_vers, FUNC_2(VAR_3),
  VAR_3->tk_action, VAR_5);
 return 0;
}
