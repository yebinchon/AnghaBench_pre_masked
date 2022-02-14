
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct rpc_clnt {TYPE_1__* cl_program; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int * pipe_dir_name; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct super_block*,struct rpc_clnt*) ;

__attribute__((used)) static int
FUNC_3(struct super_block *VAR_0, struct rpc_clnt *VAR_1)
{
 struct dentry *VAR_2;

 if (VAR_1->cl_program->pipe_dir_name != ((void*)0)) {
  VAR_2 = FUNC_2(VAR_0, VAR_1);
  if (FUNC_0(VAR_2))
   return FUNC_1(VAR_2);
 }
 return 0;
}
