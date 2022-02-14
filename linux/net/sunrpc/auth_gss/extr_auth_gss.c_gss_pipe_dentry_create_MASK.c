
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_pipe_dir_object {struct gss_pipe* pdo_data; } ;
struct gss_pipe {TYPE_1__* pipe; int clnt; int name; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct dentry* dentry; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*,int ,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_0,
  struct rpc_pipe_dir_object *VAR_1)
{
 struct gss_pipe *VAR_2 = VAR_1->pdo_data;
 struct dentry *VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_2->name, VAR_2->clnt, VAR_2->pipe);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);
 VAR_2->pipe->dentry = VAR_3;
 return 0;
}
