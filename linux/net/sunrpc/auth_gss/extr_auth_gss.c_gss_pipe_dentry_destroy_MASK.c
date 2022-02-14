
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_pipe_dir_object {struct gss_pipe* pdo_data; } ;
struct rpc_pipe {int * dentry; } ;
struct gss_pipe {struct rpc_pipe* pipe; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct dentry *VAR_0,
  struct rpc_pipe_dir_object *VAR_1)
{
 struct gss_pipe *VAR_2 = VAR_1->pdo_data;
 struct rpc_pipe *VAR_3 = VAR_2->pipe;

 if (VAR_3->dentry != ((void*)0)) {
  FUNC_0(VAR_3->dentry);
  VAR_3->dentry = ((void*)0);
 }
}
