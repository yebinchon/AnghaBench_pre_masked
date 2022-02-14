
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_pipe_dir_object {int dummy; } ;
struct gss_pipe {struct rpc_pipe_dir_object pdo; } ;
struct gss_alloc_pdo {int upcall_ops; int name; int clnt; } ;


 int FUNC_0 (struct gss_pipe*) ;
 struct gss_pipe* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static struct rpc_pipe_dir_object *FUNC_2(void *VAR_0)
{
 struct gss_pipe *VAR_1;
 struct gss_alloc_pdo *VAR_2 = VAR_0;

 VAR_1 = FUNC_1(VAR_2->clnt, VAR_2->name, VAR_2->upcall_ops);
 if (!FUNC_0(VAR_1))
  return &VAR_1->pdo;
 return ((void*)0);
}
