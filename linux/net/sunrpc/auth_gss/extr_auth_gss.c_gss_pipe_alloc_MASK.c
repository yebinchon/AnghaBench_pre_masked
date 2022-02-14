
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_pipe_ops {int dummy; } ;
struct rpc_clnt {int dummy; } ;
struct gss_pipe {char const* name; int pdo; int kref; struct rpc_clnt* clnt; int pipe; } ;


 int VAR_0 ;
 struct gss_pipe* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct gss_pipe*) ;
 struct gss_pipe* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,struct gss_pipe*) ;
 int FUNC_7 (struct rpc_pipe_ops const*,int ) ;

__attribute__((used)) static struct gss_pipe *FUNC_8(struct rpc_clnt *VAR_4,
  const char *VAR_5,
  const struct rpc_pipe_ops *VAR_6)
{
 struct gss_pipe *VAR_7;
 int VAR_8 = -VAR_0;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  goto err;
 VAR_7->pipe = FUNC_7(VAR_6, VAR_2);
 if (FUNC_1(VAR_7->pipe)) {
  VAR_8 = FUNC_2(VAR_7->pipe);
  goto err_free_gss_pipe;
 }
 VAR_7->name = VAR_5;
 VAR_7->clnt = VAR_4;
 FUNC_5(&VAR_7->kref);
 FUNC_6(&VAR_7->pdo,
   &VAR_3,
   VAR_7);
 return VAR_7;
err_free_gss_pipe:
 FUNC_3(VAR_7);
err:
 return FUNC_0(VAR_8);
}
