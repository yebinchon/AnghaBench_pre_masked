
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_pipe_dir_object_ops {int dummy; } ;
struct rpc_pipe_dir_object {void* pdo_data; struct rpc_pipe_dir_object_ops const* pdo_ops; int pdo_head; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct rpc_pipe_dir_object *VAR_0,
  const struct rpc_pipe_dir_object_ops *VAR_1,
  void *VAR_2)
{
 FUNC_0(&VAR_0->pdo_head);
 VAR_0->pdo_ops = VAR_1;
 VAR_0->pdo_data = VAR_2;
}
