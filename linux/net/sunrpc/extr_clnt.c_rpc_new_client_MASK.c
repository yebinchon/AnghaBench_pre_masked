
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_xprt_switch {int dummy; } ;
struct rpc_xprt {struct rpc_timeout* timeout; } ;
struct rpc_version {int number; int nrprocs; int procs; } ;
struct rpc_timeout {int dummy; } ;
struct rpc_program {size_t nrvers; int stats; int number; struct rpc_version** version; int name; } ;
struct rpc_create_args {char* nodename; size_t version; int client_name; int authflavor; int * timeout; scalar_t__ prognumber; int cred; int servername; struct rpc_program* program; } ;
struct rpc_clnt {int cl_cred; int * cl_metrics; int cl_count; TYPE_1__* cl_timeout; int cl_rtt_default; int * cl_rtt; int cl_xpi; struct rpc_timeout cl_timeout_default; int cl_lock; int cl_tasks; struct rpc_program const* cl_program; int cl_pipedir_objects; int cl_stats; int cl_vers; int cl_prog; int cl_maxproc; int cl_procinfo; struct rpc_clnt* cl_parent; } ;
struct TYPE_4__ {char* nodename; } ;
struct TYPE_3__ {int to_initval; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rpc_clnt* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*,int ,int ,struct rpc_xprt*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rpc_clnt*) ;
 struct rpc_clnt* FUNC_7 (int,int ) ;
 int FUNC_8 (struct rpc_timeout*,int *,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct rpc_clnt*) ;
 int * FUNC_11 (struct rpc_clnt*) ;
 int FUNC_12 (struct rpc_clnt*,int ,int ) ;
 int FUNC_13 (struct rpc_clnt*,char const*) ;
 int FUNC_14 (struct rpc_clnt*,struct rpc_xprt*,struct rpc_timeout const*) ;
 int FUNC_15 (struct rpc_clnt*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (int *) ;
 TYPE_2__* FUNC_22 () ;
 int FUNC_23 (int *,struct rpc_xprt_switch*) ;
 int FUNC_24 (struct rpc_xprt*) ;
 int FUNC_25 (struct rpc_xprt_switch*) ;

__attribute__((used)) static struct rpc_clnt * FUNC_26(const struct rpc_create_args *VAR_3,
  struct rpc_xprt_switch *VAR_4,
  struct rpc_xprt *VAR_5,
  struct rpc_clnt *VAR_6)
{
 const struct rpc_program *VAR_7 = VAR_3->program;
 const struct rpc_version *VAR_8;
 struct rpc_clnt *VAR_9 = ((void*)0);
 const struct rpc_timeout *VAR_10;
 const char *VAR_11 = VAR_3->nodename;
 int VAR_12;


 FUNC_4("RPC:       creating %s client for %s (xprt %p)\n",
   VAR_7->name, VAR_3->servername, VAR_5);

 VAR_12 = FUNC_20();
 if (VAR_12)
  goto out_no_rpciod;

 VAR_12 = -VAR_0;
 if (VAR_3->version >= VAR_7->nrvers)
  goto out_err;
 VAR_8 = VAR_7->version[VAR_3->version];
 if (VAR_8 == ((void*)0))
  goto out_err;

 VAR_12 = -VAR_1;
 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  goto out_err;
 VAR_9->cl_parent = VAR_6 ? : VAR_9;

 VAR_12 = FUNC_10(VAR_9);
 if (VAR_12)
  goto out_no_clid;

 VAR_9->cl_cred = FUNC_5(VAR_3->cred);
 VAR_9->cl_procinfo = VAR_8->procs;
 VAR_9->cl_maxproc = VAR_8->nrprocs;
 VAR_9->cl_prog = VAR_3->prognumber ? : VAR_7->number;
 VAR_9->cl_vers = VAR_8->number;
 VAR_9->cl_stats = VAR_7->stats;
 VAR_9->cl_metrics = FUNC_11(VAR_9);
 FUNC_17(&VAR_9->cl_pipedir_objects);
 VAR_12 = -VAR_1;
 if (VAR_9->cl_metrics == ((void*)0))
  goto out_no_stats;
 VAR_9->cl_program = VAR_7;
 FUNC_1(&VAR_9->cl_tasks);
 FUNC_21(&VAR_9->cl_lock);

 VAR_10 = VAR_5->timeout;
 if (VAR_3->timeout != ((void*)0)) {
  FUNC_8(&VAR_9->cl_timeout_default, VAR_3->timeout,
    sizeof(VAR_9->cl_timeout_default));
  VAR_10 = &VAR_9->cl_timeout_default;
 }

 FUNC_14(VAR_9, VAR_5, VAR_10);
 FUNC_23(&VAR_9->cl_xpi, VAR_4);
 FUNC_25(VAR_4);

 VAR_9->cl_rtt = &VAR_9->cl_rtt_default;
 FUNC_18(&VAR_9->cl_rtt_default, VAR_9->cl_timeout->to_initval);

 FUNC_3(&VAR_9->cl_count, 1);

 if (VAR_11 == ((void*)0))
  VAR_11 = FUNC_22()->nodename;

 FUNC_13(VAR_9, VAR_11);

 VAR_12 = FUNC_12(VAR_9, VAR_3->authflavor, VAR_3->client_name);
 if (VAR_12)
  goto out_no_path;
 if (VAR_6)
  FUNC_2(&VAR_6->cl_count);
 return VAR_9;

out_no_path:
 FUNC_16(VAR_9->cl_metrics);
out_no_stats:
 FUNC_9(VAR_9->cl_cred);
 FUNC_15(VAR_9);
out_no_clid:
 FUNC_6(VAR_9);
out_err:
 FUNC_19();
out_no_rpciod:
 FUNC_25(VAR_4);
 FUNC_24(VAR_5);
 return FUNC_0(VAR_12);
}
