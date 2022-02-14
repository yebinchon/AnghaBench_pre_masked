
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct rpc_iostats {int dummy; } ;
struct rpc_clnt {unsigned int cl_maxproc; int cl_procinfo; struct rpc_clnt* cl_parent; int * cl_metrics; TYPE_1__* cl_program; int cl_vers; int cl_prog; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_iostats*,int *) ;
 int FUNC_1 (struct seq_file*,struct rpc_iostats*,unsigned int,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct rpc_clnt*,int ,struct seq_file*) ;
 int FUNC_3 (struct seq_file*,char*,...) ;

void FUNC_4(struct seq_file *VAR_2, struct rpc_clnt *VAR_3)
{
 unsigned int VAR_4, VAR_5 = VAR_3->cl_maxproc;

 if (!VAR_3->cl_metrics)
  return;

 FUNC_3(VAR_2, "\tRPC iostats version: %s  ", VAR_0);
 FUNC_3(VAR_2, "p/v: %u/%u (%s)\n",
   VAR_3->cl_prog, VAR_3->cl_vers, VAR_3->cl_program->name);

 FUNC_2(VAR_3, VAR_1, VAR_2);

 FUNC_3(VAR_2, "\tper-op statistics\n");
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  struct rpc_iostats VAR_6 = {};
  struct rpc_clnt *VAR_7 = VAR_3;
  do {
   FUNC_0(&VAR_6, &VAR_7->cl_metrics[VAR_4]);
   if (VAR_7 == VAR_7->cl_parent)
    break;
   VAR_7 = VAR_7->cl_parent;
  } while (VAR_7);
  FUNC_1(VAR_2, &VAR_6, VAR_4, VAR_3->cl_procinfo);
 }
}
