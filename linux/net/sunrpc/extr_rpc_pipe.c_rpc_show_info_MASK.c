
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct rpc_clnt* private; } ;
struct rpc_clnt {int cl_vers; int cl_prog; TYPE_1__* cl_program; int cl_xprt; } ;
struct TYPE_4__ {int servername; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct rpc_clnt*,int ) ;
 int FUNC_4 (struct seq_file*,char*,int ,...) ;

__attribute__((used)) static int
FUNC_5(struct seq_file *VAR_3, void *VAR_4)
{
 struct rpc_clnt *VAR_5 = VAR_3->private;

 FUNC_1();
 FUNC_4(VAR_3, "RPC server: %s\n",
   FUNC_0(VAR_5->cl_xprt)->servername);
 FUNC_4(VAR_3, "service: %s (%d) version %d\n", VAR_5->cl_program->name,
   VAR_5->cl_prog, VAR_5->cl_vers);
 FUNC_4(VAR_3, "address: %s\n", FUNC_3(VAR_5, VAR_0));
 FUNC_4(VAR_3, "protocol: %s\n", FUNC_3(VAR_5, VAR_2));
 FUNC_4(VAR_3, "port: %s\n", FUNC_3(VAR_5, VAR_1));
 FUNC_2();
 return 0;
}
